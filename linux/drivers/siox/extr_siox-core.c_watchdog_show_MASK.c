
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct siox_device {int status_read_clean; int smaster; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*,char*,int) ;
 struct siox_device* FUNC_3 (struct device*) ;

__attribute__((used)) static ssize_t FUNC_4(struct device *VAR_1,
        struct device_attribute *VAR_2, char *VAR_3)
{
 struct siox_device *VAR_4 = FUNC_3(VAR_1);
 u8 VAR_5;

 FUNC_0(VAR_4->smaster);

 VAR_5 = VAR_4->status_read_clean;

 FUNC_1(VAR_4->smaster);

 return FUNC_2(VAR_3, "%d\n", VAR_5 & VAR_0);
}
