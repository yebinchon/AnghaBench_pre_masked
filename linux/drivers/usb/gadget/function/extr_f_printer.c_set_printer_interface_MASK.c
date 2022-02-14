
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct printer_dev {TYPE_1__* out_ep; TYPE_1__* in_ep; int gadget; } ;
struct TYPE_3__ {int * desc; int name; struct printer_dev* driver_data; } ;


 int FUNC_0 (struct printer_dev*,char*,int ,int) ;
 void* FUNC_1 (int ,int *,int *,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;

__attribute__((used)) static int
FUNC_4(struct printer_dev *VAR_6)
{
 int VAR_7 = 0;

 VAR_6->in_ep->desc = FUNC_1(VAR_6->gadget, &VAR_0, &VAR_2,
    &VAR_4);
 VAR_6->in_ep->driver_data = VAR_6;

 VAR_6->out_ep->desc = FUNC_1(VAR_6->gadget, &VAR_1,
        &VAR_3, &VAR_5);
 VAR_6->out_ep->driver_data = VAR_6;

 VAR_7 = FUNC_3(VAR_6->in_ep);
 if (VAR_7 != 0) {
  FUNC_0(VAR_6, "enable %s --> %d\n", VAR_6->in_ep->name, VAR_7);
  goto done;
 }

 VAR_7 = FUNC_3(VAR_6->out_ep);
 if (VAR_7 != 0) {
  FUNC_0(VAR_6, "enable %s --> %d\n", VAR_6->in_ep->name, VAR_7);
  goto done;
 }

done:

 if (VAR_7 != 0) {
  (void) FUNC_2(VAR_6->in_ep);
  (void) FUNC_2(VAR_6->out_ep);
  VAR_6->in_ep->desc = ((void*)0);
  VAR_6->out_ep->desc = ((void*)0);
 }


 return VAR_7;
}
