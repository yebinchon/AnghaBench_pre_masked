
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct nvme_private {int comp_status; } ;
struct TYPE_3__ {int cmd_kref; struct nvme_private* priv; } ;
typedef TYPE_1__ srb_t ;


 int FUNC_0 (int *,int ) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_1(srb_t *VAR_1, int VAR_2)
{
 struct nvme_private *VAR_3 = VAR_1->priv;

 VAR_3->comp_status = VAR_2;
 FUNC_0(&VAR_1->cmd_kref, VAR_0);

 return;
}
