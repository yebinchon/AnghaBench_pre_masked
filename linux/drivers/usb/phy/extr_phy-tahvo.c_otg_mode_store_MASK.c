
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {TYPE_1__* otg; } ;
struct tahvo_usb {scalar_t__ tahvo_mode; int serialize; TYPE_2__ phy; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;
struct TYPE_3__ {scalar_t__ gadget; scalar_t__ host; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 struct tahvo_usb* FUNC_0 (struct device*) ;
 int FUNC_1 (struct device*,char*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (char const*) ;
 scalar_t__ FUNC_5 (char const*,char*,int) ;
 int FUNC_6 (struct tahvo_usb*) ;
 int FUNC_7 (struct tahvo_usb*) ;
 int FUNC_8 (struct tahvo_usb*) ;
 int FUNC_9 (struct tahvo_usb*) ;
 int FUNC_10 (struct tahvo_usb*) ;

__attribute__((used)) static ssize_t FUNC_11(struct device *VAR_3,
         struct device_attribute *VAR_4,
         const char *VAR_5, size_t VAR_6)
{
 struct tahvo_usb *VAR_7 = FUNC_0(VAR_3);
 int VAR_8;

 FUNC_2(&VAR_7->serialize);
 if (VAR_6 >= 4 && FUNC_5(VAR_5, "host", 4) == 0) {
  if (VAR_7->tahvo_mode == VAR_2)
   FUNC_10(VAR_7);
  VAR_7->tahvo_mode = VAR_1;
  if (VAR_7->phy.otg->host) {
   FUNC_1(VAR_3, "HOST mode: host controller present\n");
   FUNC_6(VAR_7);
  } else {
   FUNC_1(VAR_3, "HOST mode: no host controller, powering off\n");
   FUNC_8(VAR_7);
  }
  VAR_8 = FUNC_4(VAR_5);
 } else if (VAR_6 >= 10 && FUNC_5(VAR_5, "peripheral", 10) == 0) {
  if (VAR_7->tahvo_mode == VAR_1)
   FUNC_9(VAR_7);
  VAR_7->tahvo_mode = VAR_2;
  if (VAR_7->phy.otg->gadget) {
   FUNC_1(VAR_3, "PERIPHERAL mode: gadget driver present\n");
   FUNC_7(VAR_7);
  } else {
   FUNC_1(VAR_3, "PERIPHERAL mode: no gadget driver, powering off\n");
   FUNC_8(VAR_7);
  }
  VAR_8 = FUNC_4(VAR_5);
 } else {
  VAR_8 = -VAR_0;
 }
 FUNC_3(&VAR_7->serialize);

 return VAR_8;
}
