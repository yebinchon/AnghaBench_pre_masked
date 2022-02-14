
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct work_struct {int dummy; } ;
struct TYPE_2__ {int (* unusable ) (struct usbip_device*) ;int (* reset ) (struct usbip_device*) ;int (* shutdown ) (struct usbip_device*) ;} ;
struct usbip_device {int event; int eh_waitq; TYPE_1__ eh_ops; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int * VAR_3 ;
 struct usbip_device* FUNC_0 () ;
 int FUNC_1 (struct usbip_device*) ;
 int FUNC_2 (struct usbip_device*) ;
 int FUNC_3 (struct usbip_device*) ;
 int FUNC_4 (struct usbip_device*,int) ;
 int FUNC_5 (char*,int) ;
 int FUNC_6 (int *) ;
 int * VAR_4 ;

__attribute__((used)) static void FUNC_7(struct work_struct *VAR_5)
{
 struct usbip_device *VAR_6;

 if (VAR_4 == ((void*)0)) {
  VAR_4 = VAR_3;
 }

 while ((VAR_6 = FUNC_0()) != ((void*)0)) {
  FUNC_5("pending event %lx\n", VAR_6->event);





  if (VAR_6->event & VAR_1) {
   VAR_6->eh_ops.shutdown(VAR_6);
   FUNC_4(VAR_6, VAR_1);
  }


  if (VAR_6->event & VAR_0) {
   VAR_6->eh_ops.reset(VAR_6);
   FUNC_4(VAR_6, VAR_0);
  }


  if (VAR_6->event & VAR_2) {
   VAR_6->eh_ops.unusable(VAR_6);
   FUNC_4(VAR_6, VAR_2);
  }

  FUNC_6(&VAR_6->eh_waitq);
 }
}
