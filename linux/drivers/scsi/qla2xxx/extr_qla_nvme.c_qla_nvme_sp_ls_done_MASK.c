
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct nvme_private {int comp_status; int ls_work; } ;
struct TYPE_3__ {int cmd_kref; struct nvme_private* priv; } ;
typedef TYPE_1__ srb_t ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;
 scalar_t__ FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int *) ;
 int VAR_1 ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(srb_t *VAR_2, int VAR_3)
{
 struct nvme_private *VAR_4 = VAR_2->priv;

 if (FUNC_1(FUNC_2(&VAR_2->cmd_kref) == 0))
  return;

 if (VAR_3)
  VAR_3 = -VAR_0;

 VAR_4->comp_status = VAR_3;
 FUNC_0(&VAR_4->ls_work, VAR_1);
 FUNC_3(&VAR_4->ls_work);
}
