
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct qedi_nvm_iscsi_image {int dummy; } ;
struct qedi_ctx {int dbg_ctx; scalar_t__ iscsi_image; int cdev; } ;
struct TYPE_4__ {TYPE_1__* common; } ;
struct TYPE_3__ {int (* nvm_get_image ) (int ,int ,char*,int) ;} ;


 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (int *,int ,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 TYPE_2__* VAR_2 ;
 int FUNC_2 (int ,int ,char*,int) ;

__attribute__((used)) static int FUNC_3(struct qedi_ctx *VAR_3)
{
 int VAR_4 = 1;

 FUNC_1(&VAR_3->dbg_ctx, VAR_0,
    "Get NVM iSCSI CFG image\n");
 VAR_4 = VAR_2->common->nvm_get_image(VAR_3->cdev,
           VAR_1,
           (char *)VAR_3->iscsi_image,
           sizeof(struct qedi_nvm_iscsi_image));
 if (VAR_4)
  FUNC_0(&VAR_3->dbg_ctx,
    "Could not get NVM image. ret = %d\n", VAR_4);

 return VAR_4;
}
