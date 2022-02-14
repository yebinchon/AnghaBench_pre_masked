
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int parent; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct device*) ;
 scalar_t__ FUNC_1 (struct device*) ;
 scalar_t__ FUNC_2 (struct device*) ;
 scalar_t__ FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (struct device*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static int FUNC_7(struct device *VAR_4)
{
 if (FUNC_4(VAR_4))
  return VAR_1;
 else if (FUNC_0(VAR_4))
  return VAR_3;
 else if (FUNC_1(VAR_4))
  return VAR_2;
 else if (FUNC_2(VAR_4))
  return VAR_0;
 else if (FUNC_3(VAR_4->parent))
  return FUNC_5(FUNC_6(VAR_4->parent));

 return 0;
}
