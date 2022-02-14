
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nd_namespace_common {int dev; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct nd_namespace_common*) ;
 int FUNC_1 (struct nd_namespace_common*) ;
 scalar_t__ FUNC_2 (struct device*,int ) ;
 scalar_t__ FUNC_3 (struct device*) ;
 scalar_t__ FUNC_4 (struct device*) ;
 int FUNC_5 (struct device*,struct nd_namespace_common*) ;
 int FUNC_6 (struct device*,struct nd_namespace_common*) ;
 int FUNC_7 (struct device*,struct nd_namespace_common*) ;
 int FUNC_8 (struct nd_namespace_common*) ;
 struct nd_namespace_common* FUNC_9 (struct device*) ;
 int FUNC_10 (struct device*,struct nd_namespace_common*) ;
 int FUNC_11 (int *) ;

__attribute__((used)) static int FUNC_12(struct device *VAR_2)
{
 int VAR_3;
 struct nd_namespace_common *VAR_4;

 VAR_4 = FUNC_9(VAR_2);
 if (FUNC_0(VAR_4))
  return FUNC_1(VAR_4);

 if (FUNC_2(VAR_2, FUNC_11(&VAR_4->dev)))
  return -VAR_0;

 if (FUNC_3(VAR_2))
  return FUNC_8(VAR_4);

 if (FUNC_4(VAR_2))
  return FUNC_10(VAR_2, VAR_4);

 VAR_3 = FUNC_5(VAR_2, VAR_4);
 if (VAR_3 == 0)
  return -VAR_0;
 VAR_3 = FUNC_7(VAR_2, VAR_4);
 if (VAR_3 == 0)
  return -VAR_0;
 else if (VAR_3 == -VAR_1)
  return VAR_3;

 VAR_3 = FUNC_6(VAR_2, VAR_4);
 if (VAR_3 == 0)
  return -VAR_0;
 else if (VAR_3 == -VAR_1)
  return VAR_3;
 return FUNC_10(VAR_2, VAR_4);
}
