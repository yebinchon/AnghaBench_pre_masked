
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct nd_region {int dummy; } ;
struct nd_namespace_pmem {int * uuid; } ;
struct nd_namespace_blk {int * uuid; } ;
struct device_attribute {int dummy; } ;
struct device {int parent; } ;
typedef size_t ssize_t ;
struct TYPE_2__ {scalar_t__ claim; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (struct device*,char*,size_t,char const*,char*) ;
 scalar_t__ FUNC_1 (struct device*) ;
 scalar_t__ FUNC_2 (struct device*) ;
 int FUNC_3 (int *) ;
 size_t FUNC_4 (struct nd_region*,struct device*,int *,int **) ;
 int FUNC_5 (struct device*) ;
 int FUNC_6 (struct device*) ;
 size_t FUNC_7 (struct nd_region*,struct device*) ;
 size_t FUNC_8 (struct device*,int **,char const*,size_t) ;
 int FUNC_9 (struct device*) ;
 int FUNC_10 (struct device*) ;
 struct nd_namespace_blk* FUNC_11 (struct device*) ;
 struct nd_namespace_pmem* FUNC_12 (struct device*) ;
 struct nd_region* FUNC_13 (int ) ;
 TYPE_1__* FUNC_14 (struct device*) ;
 int FUNC_15 (struct device*) ;

__attribute__((used)) static ssize_t FUNC_16(struct device *VAR_2,
  struct device_attribute *VAR_3, const char *VAR_4, size_t VAR_5)
{
 struct nd_region *VAR_6 = FUNC_13(VAR_2->parent);
 u8 *VAR_7 = ((void*)0);
 ssize_t VAR_8 = 0;
 u8 **VAR_9;

 if (FUNC_2(VAR_2)) {
  struct nd_namespace_pmem *VAR_10 = FUNC_12(VAR_2);

  VAR_9 = &VAR_10->uuid;
 } else if (FUNC_1(VAR_2)) {
  struct nd_namespace_blk *VAR_11 = FUNC_11(VAR_2);

  VAR_9 = &VAR_11->uuid;
 } else
  return -VAR_1;

 FUNC_5(VAR_2);
 FUNC_9(VAR_2);
 FUNC_15(VAR_2);
 if (FUNC_14(VAR_2)->claim)
  VAR_8 = -VAR_0;
 if (VAR_8 >= 0)
  VAR_8 = FUNC_8(VAR_2, &VAR_7, VAR_4, VAR_5);
 if (VAR_8 >= 0)
  VAR_8 = FUNC_4(VAR_6, VAR_2, VAR_7, VAR_9);
 if (VAR_8 >= 0)
  VAR_8 = FUNC_7(VAR_6, VAR_2);
 else
  FUNC_3(VAR_7);
 FUNC_0(VAR_2, "result: %zd wrote: %s%s", VAR_8, VAR_4,
   VAR_4[VAR_5 - 1] == '\n' ? "" : "\n");
 FUNC_10(VAR_2);
 FUNC_6(VAR_2);

 return VAR_8 < 0 ? VAR_8 : VAR_5;
}
