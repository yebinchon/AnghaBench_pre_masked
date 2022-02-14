
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct dasd_device {int dummy; } ;
typedef int ssize_t ;


 scalar_t__ FUNC_0 (struct dasd_device*) ;
 struct dasd_device* FUNC_1 (int ) ;
 int FUNC_2 (struct dasd_device*) ;
 int FUNC_3 (struct dasd_device*) ;
 int FUNC_4 (struct dasd_device*) ;
 int FUNC_5 (struct dasd_device*) ;
 int FUNC_6 (struct dasd_device*) ;
 int FUNC_7 (struct dasd_device*) ;
 int FUNC_8 (struct dasd_device*) ;
 int FUNC_9 (char*,char*,...) ;
 int FUNC_10 (struct device*) ;

__attribute__((used)) static ssize_t FUNC_11(struct device *VAR_0,
         struct device_attribute *VAR_1, char *VAR_2)
{
 struct dasd_device *VAR_3;
 u8 VAR_4, VAR_5, VAR_6, VAR_7, VAR_8, VAR_9;

 VAR_3 = FUNC_1(FUNC_10(VAR_0));
 if (FUNC_0(VAR_3))
  return FUNC_9(VAR_2, "0\n");

 VAR_4 = FUNC_7(VAR_3);
 VAR_5 = FUNC_6(VAR_3);
 VAR_6 = FUNC_2(VAR_3);
 VAR_7 = FUNC_3(VAR_3);
 VAR_8 = FUNC_4(VAR_3);
 VAR_9 = FUNC_5(VAR_3);
 FUNC_8(VAR_3);

 return FUNC_9(VAR_2, "%02x %02x %02x %02x %02x %02x\n", VAR_4, VAR_5,
         VAR_6, VAR_7, VAR_8, VAR_9);
}
