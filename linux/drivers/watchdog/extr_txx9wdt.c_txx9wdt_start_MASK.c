
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct watchdog_device {int timeout; } ;
struct TYPE_2__ {int wtmr; int tcr; int tisr; int ccdr; int cpra; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int VAR_7 ;
 TYPE_1__* VAR_8 ;

__attribute__((used)) static int FUNC_3(struct watchdog_device *VAR_9)
{
 FUNC_1(&VAR_7);
 FUNC_0(VAR_6 * VAR_9->timeout, &VAR_8->cpra);
 FUNC_0(VAR_5, &VAR_8->ccdr);
 FUNC_0(0, &VAR_8->tisr);
 FUNC_0(VAR_1 | VAR_0 | VAR_2,
       &VAR_8->tcr);
 FUNC_0(VAR_4 | VAR_3, &VAR_8->wtmr);
 FUNC_2(&VAR_7);
 return 0;
}
