
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct nd_namespace_pmem {int const* uuid; } ;
struct nd_namespace_blk {int const* uuid; } ;
struct device {int dummy; } ;


 scalar_t__ FUNC_0 (struct device*) ;
 scalar_t__ FUNC_1 (struct device*) ;
 struct nd_namespace_blk* FUNC_2 (struct device*) ;
 struct nd_namespace_pmem* FUNC_3 (struct device*) ;

const u8 *FUNC_4(struct device *VAR_0)
{
 static const u8 VAR_1[16];

 if (!VAR_0)
  return VAR_1;

 if (FUNC_1(VAR_0)) {
  struct nd_namespace_pmem *VAR_2 = FUNC_3(VAR_0);

  return VAR_2->uuid;
 } else if (FUNC_0(VAR_0)) {
  struct nd_namespace_blk *VAR_3 = FUNC_2(VAR_0);

  return VAR_3->uuid;
 } else
  return VAR_1;
}
