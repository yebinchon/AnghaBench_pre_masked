
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int driver_ver_str; int os_type; } ;
struct ionic_identity {int dev; TYPE_2__ drv; } ;
struct ionic_dev {TYPE_1__* dev_cmd_regs; } ;
struct ionic {int dev_cmd_lock; struct ionic_dev idev; struct ionic_identity ident; } ;
struct TYPE_3__ {int data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct ionic*) ;
 int FUNC_2 (struct ionic_dev*,int ) ;
 int FUNC_3 (struct ionic*,int ) ;
 int FUNC_4 (int *,int *,size_t) ;
 int FUNC_5 (int *,TYPE_2__*,size_t) ;
 int FUNC_6 (struct ionic_identity*,int ,int) ;
 size_t FUNC_7 (int,int) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int ,int ,int) ;

int FUNC_11(struct ionic *VAR_4)
{
 struct ionic_identity *VAR_5 = &VAR_4->ident;
 struct ionic_dev *VAR_6 = &VAR_4->idev;
 size_t VAR_7;
 int VAR_8;

 FUNC_6(VAR_5, 0, sizeof(*VAR_5));

 VAR_5->drv.os_type = FUNC_0(VAR_3);
 FUNC_10(VAR_5->drv.driver_ver_str, VAR_1,
  sizeof(VAR_5->drv.driver_ver_str) - 1);

 FUNC_8(&VAR_4->dev_cmd_lock);

 VAR_7 = FUNC_7(sizeof(VAR_5->drv), sizeof(VAR_6->dev_cmd_regs->data));
 FUNC_5(&VAR_6->dev_cmd_regs->data, &VAR_5->drv, VAR_7);

 FUNC_2(VAR_6, VAR_2);
 VAR_8 = FUNC_3(VAR_4, VAR_0);
 if (!VAR_8) {
  VAR_7 = FUNC_7(sizeof(VAR_5->dev), sizeof(VAR_6->dev_cmd_regs->data));
  FUNC_4(&VAR_5->dev, &VAR_6->dev_cmd_regs->data, VAR_7);
 }

 FUNC_9(&VAR_4->dev_cmd_lock);

 if (VAR_8)
  goto err_out_unmap;

 FUNC_1(VAR_4);

 return 0;

err_out_unmap:
 return VAR_8;
}
