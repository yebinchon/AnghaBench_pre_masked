
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct siox_master {int poll_interval; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int FUNC_0 (char const*,int ,int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct siox_master*) ;
 int FUNC_3 (struct siox_master*) ;
 struct siox_master* FUNC_4 (struct device*) ;

__attribute__((used)) static ssize_t FUNC_5(struct device *VAR_0,
          struct device_attribute *VAR_1,
          const char *VAR_2, size_t VAR_3)
{
 struct siox_master *VAR_4 = FUNC_4(VAR_0);
 int VAR_5;
 u64 VAR_6;

 VAR_5 = FUNC_0(VAR_2, 0, &VAR_6);
 if (VAR_5 < 0)
  return VAR_5;

 FUNC_2(VAR_4);

 VAR_4->poll_interval = FUNC_1(VAR_6);

 FUNC_3(VAR_4);

 return VAR_3;
}
