
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
 int VAR_1 ;
 int * FUNC_0 (struct arm_ccn*,int ) ;
 int FUNC_1 (struct device*) ;
 struct arm_ccn* FUNC_2 (int ) ;
 int FUNC_3 (char*,int ,char*,int ) ;

__attribute__((used)) static ssize_t FUNC_4(struct device *VAR_2,
  struct device_attribute *VAR_3, char *VAR_4)
{
 struct arm_ccn *VAR_5 = FUNC_2(FUNC_1(VAR_2));
 u64 *VAR_6 = FUNC_0(VAR_5, VAR_3->attr.name);

 return VAR_6 ? FUNC_3(VAR_4, VAR_1, "0x%016llx\n", *VAR_6) : -VAR_0;
}
