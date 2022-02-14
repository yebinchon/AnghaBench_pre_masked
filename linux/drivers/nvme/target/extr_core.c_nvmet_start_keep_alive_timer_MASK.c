
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nvmet_ctrl {int kato; int ka_work; int cntlid; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;
 int VAR_1 ;
 int FUNC_1 (char*,int ,int) ;
 int FUNC_2 (int *,int) ;

__attribute__((used)) static void FUNC_3(struct nvmet_ctrl *VAR_2)
{
 FUNC_1("ctrl %d start keep-alive timer for %d secs\n",
  VAR_2->cntlid, VAR_2->kato);

 FUNC_0(&VAR_2->ka_work, VAR_1);
 FUNC_2(&VAR_2->ka_work, VAR_2->kato * VAR_0);
}
