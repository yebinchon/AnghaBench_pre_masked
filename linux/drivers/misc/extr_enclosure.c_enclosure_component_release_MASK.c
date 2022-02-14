
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct enclosure_component {scalar_t__ dev; } ;
struct device {scalar_t__ parent; } ;


 int FUNC_0 (struct enclosure_component*) ;
 int FUNC_1 (scalar_t__) ;
 struct enclosure_component* FUNC_2 (struct device*) ;

__attribute__((used)) static void FUNC_3(struct device *VAR_0)
{
 struct enclosure_component *VAR_1 = FUNC_2(VAR_0);

 if (VAR_1->dev) {
  FUNC_0(VAR_1);
  FUNC_1(VAR_1->dev);
 }
 FUNC_1(VAR_0->parent);
}
