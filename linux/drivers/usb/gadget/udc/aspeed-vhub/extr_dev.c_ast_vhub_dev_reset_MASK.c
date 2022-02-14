
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ast_vhub_dev {TYPE_1__* vhub; int driver; int gadget; int enabled; } ;
struct TYPE_2__ {int lock; } ;


 int FUNC_0 (struct ast_vhub_dev*,char*) ;
 int FUNC_1 (struct ast_vhub_dev*) ;
 int FUNC_2 (struct ast_vhub_dev*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int ) ;

void FUNC_6(struct ast_vhub_dev *VAR_0)
{

 if (!VAR_0->driver) {
  FUNC_1(VAR_0);
  return;
 }


 if (!VAR_0->enabled) {
  FUNC_0(VAR_0, "Reset of disabled device, enabling...\n");
  FUNC_2(VAR_0);
 } else {
  FUNC_0(VAR_0, "Reset of enabled device, resetting...\n");
  FUNC_4(&VAR_0->vhub->lock);
  FUNC_5(&VAR_0->gadget, VAR_0->driver);
  FUNC_3(&VAR_0->vhub->lock);





  FUNC_1(VAR_0);
  FUNC_2(VAR_0);
 }
}
