
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usb_interface {int minor; int usb_dev; int dev; } ;
struct usb_class_driver {int minor_base; char* name; int * fops; } ;
typedef int name ;
struct TYPE_2__ {int class; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_3 ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int ) ;
 int VAR_4 ;
 int FUNC_3 (int *,char*,int) ;
 int FUNC_4 (int ,int *,int ,struct usb_class_driver*,char*,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 () ;
 int VAR_5 ;
 int FUNC_7 (char*) ;
 int VAR_6 ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (char*,int,char*,int) ;
 int FUNC_11 (int *) ;
 TYPE_1__* VAR_7 ;
 int ** VAR_8 ;

int FUNC_12(struct usb_interface *VAR_9,
       struct usb_class_driver *VAR_10)
{
 int VAR_11;
 int VAR_12 = VAR_10->minor_base;
 int VAR_13;
 char VAR_14[20];
 if (VAR_10->fops == ((void*)0))
  return -VAR_1;
 if (VAR_9->minor >= 0)
  return -VAR_0;

 FUNC_8(&VAR_5);
 VAR_11 = FUNC_6();
 FUNC_9(&VAR_5);

 if (VAR_11)
  return VAR_11;

 FUNC_3(&VAR_9->dev, "looking for a minor, starting at %d\n", VAR_12);

 FUNC_5(&VAR_6);
 for (VAR_13 = VAR_12; VAR_13 < VAR_3; ++VAR_13) {
  if (VAR_8[VAR_13])
   continue;

  VAR_8[VAR_13] = VAR_10->fops;
  VAR_9->minor = VAR_13;
  break;
 }
 if (VAR_9->minor < 0) {
  FUNC_11(&VAR_6);
  return -VAR_2;
 }


 FUNC_10(VAR_14, sizeof(VAR_14), VAR_10->name, VAR_13 - VAR_12);
 VAR_9->usb_dev = FUNC_4(VAR_7->class, &VAR_9->dev,
          FUNC_1(VAR_4, VAR_13), VAR_10,
          "%s", FUNC_7(VAR_14));
 if (FUNC_0(VAR_9->usb_dev)) {
  VAR_8[VAR_13] = ((void*)0);
  VAR_9->minor = -1;
  VAR_11 = FUNC_2(VAR_9->usb_dev);
 }
 FUNC_11(&VAR_6);
 return VAR_11;
}
