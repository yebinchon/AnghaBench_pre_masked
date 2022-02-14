
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct nd_namespace_pmem {int * uuid; } ;
struct nd_namespace_blk {int * uuid; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int * FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (struct device*) ;
 scalar_t__ FUNC_2 (struct device*) ;
 struct nd_namespace_blk* FUNC_3 (struct device*) ;
 struct nd_namespace_pmem* FUNC_4 (struct device*) ;

__attribute__((used)) static u8 *FUNC_5(struct device *VAR_1)
{
 if (FUNC_2(VAR_1)) {
  struct nd_namespace_pmem *VAR_2 = FUNC_4(VAR_1);

  return VAR_2->uuid;
 } else if (FUNC_1(VAR_1)) {
  struct nd_namespace_blk *VAR_3 = FUNC_3(VAR_1);

  return VAR_3->uuid;
 } else
  return FUNC_0(-VAR_0);
}
