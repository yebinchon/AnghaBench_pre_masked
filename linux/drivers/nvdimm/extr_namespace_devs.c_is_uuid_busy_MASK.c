
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct nd_pfn {int * uuid; } ;
struct nd_namespace_pmem {int * uuid; } ;
struct nd_namespace_blk {int * uuid; } ;
struct nd_btt {int * uuid; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct device*) ;
 scalar_t__ FUNC_1 (struct device*) ;
 scalar_t__ FUNC_2 (struct device*) ;
 scalar_t__ FUNC_3 (struct device*) ;
 scalar_t__ FUNC_4 (int *,int *,int ) ;
 struct nd_btt* FUNC_5 (struct device*) ;
 struct nd_namespace_blk* FUNC_6 (struct device*) ;
 struct nd_namespace_pmem* FUNC_7 (struct device*) ;
 struct nd_pfn* FUNC_8 (struct device*) ;

__attribute__((used)) static int FUNC_9(struct device *VAR_2, void *VAR_3)
{
 u8 *VAR_4 = VAR_3, *VAR_5 = ((void*)0);

 if (FUNC_1(VAR_2)) {
  struct nd_namespace_pmem *VAR_6 = FUNC_7(VAR_2);

  VAR_5 = VAR_6->uuid;
 } else if (FUNC_0(VAR_2)) {
  struct nd_namespace_blk *VAR_7 = FUNC_6(VAR_2);

  VAR_5 = VAR_7->uuid;
 } else if (FUNC_2(VAR_2)) {
  struct nd_btt *VAR_8 = FUNC_5(VAR_2);

  VAR_5 = VAR_8->uuid;
 } else if (FUNC_3(VAR_2)) {
  struct nd_pfn *VAR_9 = FUNC_8(VAR_2);

  VAR_5 = VAR_9->uuid;
 }

 if (VAR_5 && FUNC_4(VAR_4, VAR_5, VAR_1) == 0)
  return -VAR_0;

 return 0;
}
