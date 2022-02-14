
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int time64_t ;
struct watchdog_device {int dummy; } ;
struct TYPE_3__ {scalar_t__ id; } ;


 int VAR_0 ;
 int FUNC_0 (int ,TYPE_1__*) ;
 int VAR_1 ;
 int FUNC_1 (struct watchdog_device*) ;
 TYPE_1__ VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_2(struct watchdog_device *VAR_4)
{
 time64_t VAR_5;
 int VAR_6;

 VAR_5 = FUNC_1(VAR_4);
 if (VAR_2.id)
  VAR_6 = FUNC_0(VAR_1, &VAR_2);
 else
  VAR_6 = -VAR_0;
 if (!VAR_6)
  VAR_3 = VAR_5;

 return VAR_6;
}
