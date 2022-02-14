
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct watchdog_device {TYPE_1__* info; scalar_t__ parent; } ;
struct TYPE_2__ {scalar_t__ identity; } ;


 int FUNC_0 (struct watchdog_device*) ;
 char const* FUNC_1 (scalar_t__) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (char*,char const*,int) ;
 int FUNC_5 (struct watchdog_device*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;

int FUNC_6(struct watchdog_device *VAR_2)
{
 const char *VAR_3;
 int VAR_4 = 0;

 FUNC_2(&VAR_1);
 if (VAR_0)
  VAR_4 = FUNC_0(VAR_2);
 else
  FUNC_5(VAR_2);
 FUNC_3(&VAR_1);

 if (VAR_4) {
  VAR_3 = VAR_2->parent ? FUNC_1(VAR_2->parent) :
     (const char *)VAR_2->info->identity;
  FUNC_4("%s: failed to register watchdog device (err = %d)\n",
   VAR_3, VAR_4);
 }

 return VAR_4;
}
