
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct watchdog_device {int timeout; } ;
struct TYPE_2__ {int unlock_sequence; scalar_t__ sch_wdtba; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 TYPE_1__ VAR_2 ;
 int FUNC_0 (struct watchdog_device*,int ) ;
 int FUNC_1 (int ,scalar_t__) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(struct watchdog_device *VAR_3)
{
 FUNC_0(VAR_3, VAR_3->timeout);


 FUNC_2(&VAR_2.unlock_sequence);
 FUNC_1(VAR_1, VAR_2.sch_wdtba + VAR_0);
 FUNC_3(&VAR_2.unlock_sequence);

 return 0;
}
