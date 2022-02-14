
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct nd_region {int dummy; } ;
struct nd_namespace_pmem {int * uuid; } ;
struct nd_namespace_blk {int * uuid; } ;
struct device_attribute {int dummy; } ;
struct device {int parent; } ;
typedef int ssize_t ;


 int FUNC_0 (struct device*,unsigned long long) ;
 int FUNC_1 (struct device*,char*,unsigned long long,char*,int) ;
 scalar_t__ FUNC_2 (struct device*) ;
 scalar_t__ FUNC_3 (struct device*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (char const*,int ,unsigned long long*) ;
 int FUNC_6 (struct device*) ;
 int FUNC_7 (struct device*) ;
 int FUNC_8 (struct nd_region*,struct device*) ;
 int FUNC_9 (struct device*) ;
 int FUNC_10 (struct device*) ;
 struct nd_namespace_blk* FUNC_11 (struct device*) ;
 struct nd_namespace_pmem* FUNC_12 (struct device*) ;
 struct nd_region* FUNC_13 (int ) ;
 int FUNC_14 (struct device*) ;

__attribute__((used)) static ssize_t FUNC_15(struct device *VAR_0,
  struct device_attribute *VAR_1, const char *VAR_2, size_t VAR_3)
{
 struct nd_region *VAR_4 = FUNC_13(VAR_0->parent);
 unsigned long long VAR_5;
 u8 **VAR_6 = ((void*)0);
 int VAR_7;

 VAR_7 = FUNC_5(VAR_2, 0, &VAR_5);
 if (VAR_7)
  return VAR_7;

 FUNC_6(VAR_0);
 FUNC_9(VAR_0);
 FUNC_14(VAR_0);
 VAR_7 = FUNC_0(VAR_0, VAR_5);
 if (VAR_7 >= 0)
  VAR_7 = FUNC_8(VAR_4, VAR_0);

 if (FUNC_3(VAR_0)) {
  struct nd_namespace_pmem *VAR_8 = FUNC_12(VAR_0);

  VAR_6 = &VAR_8->uuid;
 } else if (FUNC_2(VAR_0)) {
  struct nd_namespace_blk *VAR_9 = FUNC_11(VAR_0);

  VAR_6 = &VAR_9->uuid;
 }

 if (VAR_7 == 0 && VAR_5 == 0 && VAR_6) {

  FUNC_4(*VAR_6);
  *VAR_6 = ((void*)0);
 }

 FUNC_1(VAR_0, "%llx %s (%d)\n", VAR_5, VAR_7 < 0 ? "fail" : "success", VAR_7);

 FUNC_10(VAR_0);
 FUNC_7(VAR_0);

 return VAR_7 < 0 ? VAR_7 : VAR_3;
}
