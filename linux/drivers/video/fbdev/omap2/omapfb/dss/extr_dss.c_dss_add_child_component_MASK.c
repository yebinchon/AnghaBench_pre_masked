
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int parent; } ;
struct component_match {int dummy; } ;


 int FUNC_0 (int ,struct component_match**,int ,struct device*) ;
 int FUNC_1 (struct device*) ;
 int VAR_0 ;
 scalar_t__ FUNC_2 (int ,char*) ;

__attribute__((used)) static int FUNC_3(struct device *VAR_1, void *VAR_2)
{
 struct component_match **VAR_3 = VAR_2;







 if (FUNC_2(FUNC_1(VAR_1), "rfbi"))
  return 0;

 FUNC_0(VAR_1->parent, VAR_3, VAR_0, VAR_1);

 return 0;
}
