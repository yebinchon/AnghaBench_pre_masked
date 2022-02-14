
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct se_cmd {struct iblock_req* priv; } ;
struct iblock_req {int ib_bio_err_cnt; } ;
struct bio {scalar_t__ bi_status; struct se_cmd* bi_private; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct bio*) ;
 int FUNC_2 (struct se_cmd*) ;
 int FUNC_3 (char*,struct bio*,scalar_t__) ;
 int FUNC_4 () ;

__attribute__((used)) static void FUNC_5(struct bio *VAR_0)
{
 struct se_cmd *VAR_1 = VAR_0->bi_private;
 struct iblock_req *VAR_2 = VAR_1->priv;

 if (VAR_0->bi_status) {
  FUNC_3("bio error: %p,  err: %d\n", VAR_0, VAR_0->bi_status);



  FUNC_0(&VAR_2->ib_bio_err_cnt);
  FUNC_4();
 }

 FUNC_1(VAR_0);

 FUNC_2(VAR_1);
}
