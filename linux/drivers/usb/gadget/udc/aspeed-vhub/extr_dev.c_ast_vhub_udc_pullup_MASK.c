
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usb_gadget {int dummy; } ;
struct ast_vhub_dev {TYPE_1__* vhub; scalar_t__ enabled; int index; } ;
struct TYPE_2__ {int lock; } ;


 int FUNC_0 (struct ast_vhub_dev*,char*,int) ;
 int FUNC_1 (struct ast_vhub_dev*) ;
 int FUNC_2 (struct ast_vhub_dev*) ;
 int FUNC_3 (TYPE_1__*,int ,int) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;
 struct ast_vhub_dev* FUNC_6 (struct usb_gadget*) ;

__attribute__((used)) static int FUNC_7(struct usb_gadget* VAR_0, int VAR_1)
{
 struct ast_vhub_dev *VAR_2 = FUNC_6(VAR_0);
 unsigned long VAR_3;

 FUNC_4(&VAR_2->vhub->lock, VAR_3);

 FUNC_0(VAR_2, "pullup(%d)\n", VAR_1);


 FUNC_3(VAR_2->vhub, VAR_2->index, VAR_1);





 if (VAR_2->enabled) {
  FUNC_2(VAR_2);
  FUNC_1(VAR_2);
 }

 FUNC_5(&VAR_2->vhub->lock, VAR_3);

 return 0;
}
