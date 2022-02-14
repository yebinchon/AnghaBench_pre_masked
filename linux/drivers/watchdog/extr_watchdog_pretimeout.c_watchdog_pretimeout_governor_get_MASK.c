
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct watchdog_device {TYPE_1__* gov; } ;
struct TYPE_2__ {char* name; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (char*,char*,char*) ;

int FUNC_3(struct watchdog_device *VAR_1, char *VAR_2)
{
 int VAR_3 = 0;

 FUNC_0(&VAR_0);
 if (VAR_1->gov)
  VAR_3 = FUNC_2(VAR_2, "%s\n", VAR_1->gov->name);
 FUNC_1(&VAR_0);

 return VAR_3;
}
