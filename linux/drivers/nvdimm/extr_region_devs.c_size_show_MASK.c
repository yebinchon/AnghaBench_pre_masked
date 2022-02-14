
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nd_region {unsigned long long ndr_size; int ndr_mappings; struct nd_mapping* mapping; } ;
struct nd_mapping {unsigned long long size; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 scalar_t__ FUNC_0 (struct device*) ;
 int FUNC_1 (char*,char*,unsigned long long) ;
 struct nd_region* FUNC_2 (struct device*) ;

__attribute__((used)) static ssize_t FUNC_3(struct device *VAR_0,
  struct device_attribute *VAR_1, char *VAR_2)
{
 struct nd_region *VAR_3 = FUNC_2(VAR_0);
 unsigned long long VAR_4 = 0;

 if (FUNC_0(VAR_0)) {
  VAR_4 = VAR_3->ndr_size;
 } else if (VAR_3->ndr_mappings == 1) {
  struct nd_mapping *VAR_5 = &VAR_3->mapping[0];

  VAR_4 = VAR_5->size;
 }

 return FUNC_1(VAR_2, "%llu\n", VAR_4);
}
