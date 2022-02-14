
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nd_namespace_pmem {int lbasize; } ;
struct nd_namespace_blk {int lbasize; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct device*) ;
 scalar_t__ FUNC_1 (struct device*) ;
 int FUNC_2 (int ,int ,char*) ;
 int VAR_2 ;
 struct nd_namespace_blk* FUNC_3 (struct device*) ;
 struct nd_namespace_pmem* FUNC_4 (struct device*) ;

__attribute__((used)) static ssize_t FUNC_5(struct device *VAR_3,
  struct device_attribute *VAR_4, char *VAR_5)
{
 if (FUNC_0(VAR_3)) {
  struct nd_namespace_blk *VAR_6 = FUNC_3(VAR_3);

  return FUNC_2(VAR_6->lbasize,
    VAR_1, VAR_5);
 }

 if (FUNC_1(VAR_3)) {
  struct nd_namespace_pmem *VAR_7 = FUNC_4(VAR_3);

  return FUNC_2(VAR_7->lbasize,
    VAR_2, VAR_5);
 }
 return -VAR_0;
}
