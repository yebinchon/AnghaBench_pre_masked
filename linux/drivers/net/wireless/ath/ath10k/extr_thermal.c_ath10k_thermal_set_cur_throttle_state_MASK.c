
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct thermal_cooling_device {struct ath10k* devdata; } ;
struct TYPE_2__ {unsigned long throttle_state; } ;
struct ath10k {int conf_mutex; TYPE_1__ thermal; } ;


 unsigned long VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ath10k*) ;
 int FUNC_1 (struct ath10k*,char*,unsigned long,unsigned long) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int
FUNC_4(struct thermal_cooling_device *VAR_2,
          unsigned long VAR_3)
{
 struct ath10k *VAR_4 = VAR_2->devdata;

 if (VAR_3 > VAR_0) {
  FUNC_1(VAR_4, "throttle state %ld is exceeding the limit %d\n",
       VAR_3, VAR_0);
  return -VAR_1;
 }
 FUNC_2(&VAR_4->conf_mutex);
 VAR_4->thermal.throttle_state = VAR_3;
 FUNC_0(VAR_4);
 FUNC_3(&VAR_4->conf_mutex);
 return 0;
}
