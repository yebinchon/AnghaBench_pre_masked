
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct watchdog_device {int dummy; } ;
struct TYPE_3__ {scalar_t__ id; scalar_t__ timeout; } ;


 int FUNC_0 (int ,TYPE_1__*) ;
 int VAR_0 ;
 TYPE_1__ VAR_1 ;

__attribute__((used)) static int FUNC_1(struct watchdog_device *VAR_2)
{
 int VAR_3 = 0;

 VAR_1.timeout = 0;
 if (VAR_1.id)
  VAR_3 = FUNC_0(VAR_0, &VAR_1);
 if (!VAR_3)
  VAR_1.id = 0;

 return VAR_3;
}
