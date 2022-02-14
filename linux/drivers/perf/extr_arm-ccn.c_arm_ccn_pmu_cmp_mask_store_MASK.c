
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct TYPE_2__ {int name; } ;
struct device_attribute {TYPE_1__ attr; } ;
struct device {int dummy; } ;
struct arm_ccn {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int * FUNC_0 (struct arm_ccn*,int ) ;
 int FUNC_1 (struct device*) ;
 int FUNC_2 (char const*,int ,int *) ;
 struct arm_ccn* FUNC_3 (int ) ;

__attribute__((used)) static ssize_t FUNC_4(struct device *VAR_1,
  struct device_attribute *VAR_2, const char *VAR_3, size_t VAR_4)
{
 struct arm_ccn *VAR_5 = FUNC_3(FUNC_1(VAR_1));
 u64 *VAR_6 = FUNC_0(VAR_5, VAR_2->attr.name);
 int VAR_7 = -VAR_0;

 if (VAR_6)
  VAR_7 = FUNC_2(VAR_3, 0, VAR_6);

 return VAR_7 ? VAR_7 : VAR_4;
}
