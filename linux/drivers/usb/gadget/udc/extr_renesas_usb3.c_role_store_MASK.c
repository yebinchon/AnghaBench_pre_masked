
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct renesas_usb3 {scalar_t__ forced_b_device; int driver; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef size_t ssize_t ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 struct renesas_usb3* FUNC_0 (struct device*) ;
 scalar_t__ FUNC_1 (char const*,char*) ;
 int FUNC_2 (struct renesas_usb3*) ;
 int FUNC_3 (struct renesas_usb3*) ;
 int FUNC_4 (struct renesas_usb3*,int,int ) ;

__attribute__((used)) static ssize_t FUNC_5(struct device *VAR_3, struct device_attribute *VAR_4,
     const char *VAR_5, size_t VAR_6)
{
 struct renesas_usb3 *VAR_7 = FUNC_0(VAR_3);
 bool VAR_8;

 if (!VAR_7->driver)
  return -VAR_2;

 if (VAR_7->forced_b_device)
  return -VAR_0;

 if (FUNC_1(VAR_5, "host"))
  VAR_8 = 1;
 else if (FUNC_1(VAR_5, "peripheral"))
  VAR_8 = 0;
 else
  return -VAR_1;

 if (VAR_8 == FUNC_3(VAR_7))
  return -VAR_1;

 FUNC_4(VAR_7, VAR_8, FUNC_2(VAR_7));

 return VAR_6;
}
