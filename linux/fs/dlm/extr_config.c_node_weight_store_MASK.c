
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct config_item {int dummy; } ;
typedef int ssize_t ;
struct TYPE_2__ {int weight; } ;


 TYPE_1__* FUNC_0 (struct config_item*) ;
 int FUNC_1 (char const*,int ,int *) ;

__attribute__((used)) static ssize_t FUNC_2(struct config_item *VAR_0, const char *VAR_1,
     size_t VAR_2)
{
 int VAR_3 = FUNC_1(VAR_1, 0, &FUNC_0(VAR_0)->weight);

 if (VAR_3)
  return VAR_3;
 return VAR_2;
}
