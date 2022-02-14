
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nd_region {int dummy; } ;
struct nd_namespace_pmem {unsigned long lbasize; } ;
struct nd_namespace_blk {unsigned long lbasize; } ;
struct device_attribute {int dummy; } ;
struct device {int parent; } ;
typedef int ssize_t ;
struct TYPE_2__ {scalar_t__ claim; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned long* VAR_2 ;
 int FUNC_0 (struct device*,char*,int,char*,char const*,char*) ;
 scalar_t__ FUNC_1 (struct device*) ;
 scalar_t__ FUNC_2 (struct device*) ;
 int FUNC_3 (struct device*) ;
 int FUNC_4 (struct device*) ;
 int FUNC_5 (struct nd_region*,struct device*) ;
 int FUNC_6 (struct device*,char const*,unsigned long*,unsigned long const*) ;
 int FUNC_7 (struct device*) ;
 int FUNC_8 (struct device*) ;
 unsigned long* VAR_3 ;
 struct nd_namespace_blk* FUNC_9 (struct device*) ;
 struct nd_namespace_pmem* FUNC_10 (struct device*) ;
 struct nd_region* FUNC_11 (int ) ;
 TYPE_1__* FUNC_12 (struct device*) ;

__attribute__((used)) static ssize_t FUNC_13(struct device *VAR_4,
  struct device_attribute *VAR_5, const char *VAR_6, size_t VAR_7)
{
 struct nd_region *VAR_8 = FUNC_11(VAR_4->parent);
 const unsigned long *VAR_9;
 unsigned long *VAR_10;
 ssize_t VAR_11 = 0;

 if (FUNC_1(VAR_4)) {
  struct nd_namespace_blk *VAR_12 = FUNC_9(VAR_4);

  VAR_10 = &VAR_12->lbasize;
  VAR_9 = VAR_2;
 } else if (FUNC_2(VAR_4)) {
  struct nd_namespace_pmem *VAR_13 = FUNC_10(VAR_4);

  VAR_10 = &VAR_13->lbasize;
  VAR_9 = VAR_3;
 } else
  return -VAR_1;

 FUNC_3(VAR_4);
 FUNC_7(VAR_4);
 if (FUNC_12(VAR_4)->claim)
  VAR_11 = -VAR_0;
 if (VAR_11 >= 0)
  VAR_11 = FUNC_6(VAR_4, VAR_6, VAR_10, VAR_9);
 if (VAR_11 >= 0)
  VAR_11 = FUNC_5(VAR_8, VAR_4);
 FUNC_0(VAR_4, "result: %zd %s: %s%s", VAR_11, VAR_11 < 0 ? "tried" : "wrote",
   VAR_6, VAR_6[VAR_7 - 1] == '\n' ? "" : "\n");
 FUNC_8(VAR_4);
 FUNC_4(VAR_4);

 return VAR_11 ? VAR_11 : VAR_7;
}
