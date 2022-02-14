
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct device_node {TYPE_1__* parent; } ;
struct TYPE_2__ {struct TYPE_2__* parent; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,char const*,int*) ;

__attribute__((used)) static int FUNC_1(const struct device_node *VAR_1)
{
 const char *VAR_2 = "#pinctrl-cells";
 int VAR_3, VAR_4;

 VAR_4 = FUNC_0(VAR_1->parent, VAR_2, &VAR_3);
 if (VAR_4) {
  VAR_4 = FUNC_0(VAR_1->parent->parent,
          VAR_2, &VAR_3);
  if (VAR_4)
   return -VAR_0;
 }

 return VAR_3;
}
