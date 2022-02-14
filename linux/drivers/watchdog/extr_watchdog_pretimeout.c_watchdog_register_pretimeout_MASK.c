
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct watchdog_pretimeout {struct watchdog_device* wdd; int entry; } ;
struct watchdog_device {int gov; TYPE_1__* info; } ;
struct TYPE_2__ {int options; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct watchdog_pretimeout* FUNC_0 (int,int ) ;
 int FUNC_1 (int *,int *) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

int FUNC_4(struct watchdog_device *VAR_6)
{
 struct watchdog_pretimeout *VAR_7;

 if (!(VAR_6->info->options & VAR_2))
  return 0;

 VAR_7 = FUNC_0(sizeof(*VAR_7), VAR_1);
 if (!VAR_7)
  return -VAR_0;

 FUNC_2(&VAR_5);
 FUNC_1(&VAR_7->entry, &VAR_4);
 VAR_7->wdd = VAR_6;
 VAR_6->gov = VAR_3;
 FUNC_3(&VAR_5);

 return 0;
}
