
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usb_gadget {int dummy; } ;
struct ast_vhub_dev {TYPE_1__* vhub; int wakeup_en; } ;
struct TYPE_2__ {int lock; } ;


 int FUNC_0 (struct ast_vhub_dev*,char*) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 struct ast_vhub_dev* FUNC_4 (struct usb_gadget*) ;

__attribute__((used)) static int FUNC_5(struct usb_gadget* VAR_1)
{
 struct ast_vhub_dev *VAR_2 = FUNC_4(VAR_1);
 unsigned long VAR_3;
 int VAR_4 = -VAR_0;

 FUNC_2(&VAR_2->vhub->lock, VAR_3);
 if (!VAR_2->wakeup_en)
  goto err;

 FUNC_0(VAR_2, "Device initiated wakeup\n");


 FUNC_1(VAR_2->vhub);
 VAR_4 = 0;
 err:
 FUNC_3(&VAR_2->vhub->lock, VAR_3);
 return VAR_4;
}
