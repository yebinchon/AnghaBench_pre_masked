
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nd_namespace_common {int rw_bytes; int dev; } ;
struct nd_namespace_blk {int size; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct nd_namespace_common*) ;
 int FUNC_1 (struct nd_namespace_common*) ;
 int FUNC_2 (struct device*,struct nd_namespace_blk*) ;
 scalar_t__ FUNC_3 (struct device*) ;
 scalar_t__ FUNC_4 (struct device*,struct nd_namespace_common*) ;
 int FUNC_5 (struct nd_namespace_blk*) ;
 int VAR_1 ;
 int FUNC_6 (struct nd_namespace_common*) ;
 int FUNC_7 (struct nd_namespace_common*) ;
 struct nd_namespace_common* FUNC_8 (struct device*) ;
 struct nd_namespace_blk* FUNC_9 (int *) ;

__attribute__((used)) static int FUNC_10(struct device *VAR_2)
{
 struct nd_namespace_common *VAR_3;
 struct nd_namespace_blk *VAR_4;

 VAR_3 = FUNC_8(VAR_2);
 if (FUNC_0(VAR_3))
  return FUNC_1(VAR_3);

 VAR_4 = FUNC_9(&VAR_3->dev);
 VAR_4->size = FUNC_7(VAR_3);
 FUNC_2(VAR_2, VAR_4);

 VAR_3->rw_bytes = VAR_1;
 if (FUNC_3(VAR_2))
  return FUNC_6(VAR_3);
 else if (FUNC_4(VAR_2, VAR_3) == 0) {

  return -VAR_0;
 } else
  return FUNC_5(VAR_4);
}
