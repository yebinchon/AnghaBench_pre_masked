
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct power_supply {int dev; TYPE_1__* desc; } ;
struct TYPE_2__ {int name; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *,int ) ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 scalar_t__ FUNC_2 (int) ;

__attribute__((used)) static int FUNC_3(struct power_supply *VAR_2)
{
 int VAR_3 = FUNC_1(VAR_2->desc->name);

 if (FUNC_2(VAR_3))
  return -VAR_0;
 if (FUNC_0(&VAR_2->dev, VAR_1))
  return -VAR_0;
 return 0;
}
