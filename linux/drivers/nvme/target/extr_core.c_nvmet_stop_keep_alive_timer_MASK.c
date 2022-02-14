
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nvmet_ctrl {int ka_work; int cntlid; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (char*,int ) ;

__attribute__((used)) static void FUNC_2(struct nvmet_ctrl *VAR_0)
{
 FUNC_1("ctrl %d stop keep-alive\n", VAR_0->cntlid);

 FUNC_0(&VAR_0->ka_work);
}
