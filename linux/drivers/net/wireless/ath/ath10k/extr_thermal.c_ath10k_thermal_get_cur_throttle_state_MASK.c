
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct thermal_cooling_device {struct ath10k* devdata; } ;
struct TYPE_2__ {unsigned long throttle_state; } ;
struct ath10k {int conf_mutex; TYPE_1__ thermal; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static int
FUNC_2(struct thermal_cooling_device *VAR_0,
          unsigned long *VAR_1)
{
 struct ath10k *VAR_2 = VAR_0->devdata;

 FUNC_0(&VAR_2->conf_mutex);
 *VAR_1 = VAR_2->thermal.throttle_state;
 FUNC_1(&VAR_2->conf_mutex);

 return 0;
}
