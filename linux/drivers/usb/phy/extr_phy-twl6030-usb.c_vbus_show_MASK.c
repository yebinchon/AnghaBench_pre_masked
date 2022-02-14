
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct twl6030_usb {int linkstat; int lock; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;



 int VAR_1 ;
 struct twl6030_usb* FUNC_0 (struct device*) ;
 int FUNC_1 (char*,int ,char*) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

__attribute__((used)) static ssize_t FUNC_4(struct device *VAR_2,
   struct device_attribute *VAR_3, char *VAR_4)
{
 struct twl6030_usb *VAR_5 = FUNC_0(VAR_2);
 unsigned long VAR_6;
 int VAR_7 = -VAR_0;

 FUNC_2(&VAR_5->lock, VAR_6);

 switch (VAR_5->linkstat) {
 case 128:
        VAR_7 = FUNC_1(VAR_4, VAR_1, "vbus\n");
        break;
 case 130:
        VAR_7 = FUNC_1(VAR_4, VAR_1, "id\n");
        break;
 case 129:
        VAR_7 = FUNC_1(VAR_4, VAR_1, "none\n");
        break;
 default:
        VAR_7 = FUNC_1(VAR_4, VAR_1, "UNKNOWN\n");
 }
 FUNC_3(&VAR_5->lock, VAR_6);

 return VAR_7;
}
