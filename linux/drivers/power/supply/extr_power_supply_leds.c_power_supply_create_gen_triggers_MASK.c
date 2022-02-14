
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct power_supply {int online_trig; int online_trig_name; TYPE_1__* desc; } ;
struct TYPE_2__ {int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,int ) ;
 int FUNC_1 (int ,int *) ;

__attribute__((used)) static int FUNC_2(struct power_supply *VAR_2)
{
 VAR_2->online_trig_name = FUNC_0(VAR_1, "%s-online",
       VAR_2->desc->name);
 if (!VAR_2->online_trig_name)
  return -VAR_0;

 FUNC_1(VAR_2->online_trig_name, &VAR_2->online_trig);

 return 0;
}
