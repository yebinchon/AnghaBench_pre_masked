
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nvme_ctrl {int kato; int ka_work; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int) ;
 scalar_t__ FUNC_1 (int) ;

__attribute__((used)) static void FUNC_2(struct nvme_ctrl *VAR_1)
{
 if (FUNC_1(VAR_1->kato == 0))
  return;

 FUNC_0(&VAR_1->ka_work, VAR_1->kato * VAR_0);
}
