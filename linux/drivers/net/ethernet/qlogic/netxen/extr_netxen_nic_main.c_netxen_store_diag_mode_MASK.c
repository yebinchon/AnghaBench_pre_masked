
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct netxen_adapter {int flags; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef size_t ssize_t ;


 size_t VAR_0 ;
 int VAR_1 ;
 struct netxen_adapter* FUNC_0 (struct device*) ;
 scalar_t__ FUNC_1 (char const*,int,unsigned long*) ;

__attribute__((used)) static ssize_t
FUNC_2(struct device *VAR_2,
  struct device_attribute *VAR_3, const char *VAR_4, size_t VAR_5)
{
 struct netxen_adapter *VAR_6 = FUNC_0(VAR_2);
 unsigned long VAR_7;

 if (FUNC_1(VAR_4, 2, &VAR_7))
  return -VAR_0;

 if (!!VAR_7 != !!(VAR_6->flags & VAR_1))
  VAR_6->flags ^= VAR_1;

 return VAR_5;
}
