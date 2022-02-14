
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct se_cmd {struct iblock_req* priv; } ;
struct iblock_req {int ib_bio_err_cnt; int pending; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (struct iblock_req*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct se_cmd*,int ) ;

__attribute__((used)) static void FUNC_4(struct se_cmd *VAR_2)
{
 struct iblock_req *VAR_3 = VAR_2->priv;
 u8 VAR_4;

 if (!FUNC_2(&VAR_3->pending))
  return;

 if (FUNC_0(&VAR_3->ib_bio_err_cnt))
  VAR_4 = VAR_0;
 else
  VAR_4 = VAR_1;

 FUNC_3(VAR_2, VAR_4);
 FUNC_1(VAR_3);
}
