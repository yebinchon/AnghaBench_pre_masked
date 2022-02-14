
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct siox_master {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef size_t ssize_t ;


 size_t VAR_0 ;
 int FUNC_0 (struct siox_master*,char*,size_t,size_t,int ) ;
 int FUNC_1 (char const*,char*,char*,size_t*,size_t*,int *) ;
 scalar_t__ FUNC_2 (char*,char*) ;
 struct siox_master* FUNC_3 (struct device*) ;

__attribute__((used)) static ssize_t FUNC_4(struct device *VAR_1,
    struct device_attribute *VAR_2,
    const char *VAR_3, size_t VAR_4)
{
 struct siox_master *VAR_5 = FUNC_3(VAR_1);
 int VAR_6;
 char VAR_7[20] = "";
 size_t VAR_8 = 0, VAR_9 = 0;
 u8 VAR_10 = 0;

 VAR_6 = FUNC_1(VAR_3, "%19s %zu %zu %hhu", VAR_7, &VAR_8,
       &VAR_9, &VAR_10);
 if (VAR_6 != 3 && VAR_6 != 4)
  return -VAR_0;

 if (FUNC_2(VAR_7, "siox-12x8") || VAR_8 != 2 || VAR_9 != 4)
  return -VAR_0;

 FUNC_0(VAR_5, "siox-12x8", VAR_8, VAR_9, VAR_10);

 return VAR_4;
}
