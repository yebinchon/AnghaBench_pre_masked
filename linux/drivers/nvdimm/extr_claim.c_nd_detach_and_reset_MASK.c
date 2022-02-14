
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nd_pfn {int mode; int * uuid; } ;
struct nd_namespace_common {int dummy; } ;
struct nd_btt {int * uuid; scalar_t__ lbasize; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct device*,struct nd_namespace_common**) ;
 scalar_t__ FUNC_1 (struct device*,struct nd_namespace_common*) ;
 scalar_t__ FUNC_2 (struct device*) ;
 scalar_t__ FUNC_3 (struct device*) ;
 scalar_t__ FUNC_4 (struct device*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct device*,int ) ;
 struct nd_btt* FUNC_7 (struct device*) ;
 struct nd_pfn* FUNC_8 (struct device*) ;

__attribute__((used)) static void FUNC_9(struct device *VAR_2,
  struct nd_namespace_common **VAR_3)
{

 FUNC_0(VAR_2, VAR_3);
 if (FUNC_1(VAR_2, *VAR_3)) {
  FUNC_6(VAR_2, VAR_0);
 } else if (FUNC_2(VAR_2)) {
  struct nd_btt *VAR_4 = FUNC_7(VAR_2);

  VAR_4->lbasize = 0;
  FUNC_5(VAR_4->uuid);
  VAR_4->uuid = ((void*)0);
 } else if (FUNC_4(VAR_2) || FUNC_3(VAR_2)) {
  struct nd_pfn *VAR_5 = FUNC_8(VAR_2);

  FUNC_5(VAR_5->uuid);
  VAR_5->uuid = ((void*)0);
  VAR_5->mode = VAR_1;
 }
}
