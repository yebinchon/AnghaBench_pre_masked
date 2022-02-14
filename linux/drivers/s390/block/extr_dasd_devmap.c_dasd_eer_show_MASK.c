
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct dasd_devmap {scalar_t__ device; } ;
typedef int ssize_t ;


 int FUNC_0 (struct dasd_devmap*) ;
 int VAR_0 ;
 int FUNC_1 (scalar_t__) ;
 struct dasd_devmap* FUNC_2 (int ) ;
 int FUNC_3 (struct device*) ;
 int FUNC_4 (char*,int ,char*) ;

__attribute__((used)) static ssize_t
FUNC_5(struct device *VAR_1, struct device_attribute *VAR_2, char *VAR_3)
{
 struct dasd_devmap *VAR_4;
 int VAR_5;

 VAR_4 = FUNC_2(FUNC_3(VAR_1));
 if (!FUNC_0(VAR_4) && VAR_4->device)
  VAR_5 = FUNC_1(VAR_4->device);
 else
  VAR_5 = 0;
 return FUNC_4(VAR_3, VAR_0, VAR_5 ? "1\n" : "0\n");
}
