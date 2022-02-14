
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int data; } ;
struct wusb_dev {TYPE_1__ cdid; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int FUNC_0 (char*,char*,int ) ;
 int FUNC_1 (struct device*) ;
 struct wusb_dev* FUNC_2 (int ) ;
 int FUNC_3 (struct wusb_dev*) ;

__attribute__((used)) static ssize_t FUNC_4(struct device *VAR_1,
         struct device_attribute *VAR_2, char *VAR_3)
{
 ssize_t VAR_4;
 struct wusb_dev *VAR_5;

 VAR_5 = FUNC_2(FUNC_1(VAR_1));
 if (VAR_5 == ((void*)0))
  return -VAR_0;
 VAR_4 = FUNC_0(VAR_3, "%16ph\n", VAR_5->cdid.data);
 FUNC_3(VAR_5);
 return VAR_4;
}
