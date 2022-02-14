
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ath10k_fw_crash_data {int timestamp; int guid; } ;
struct TYPE_2__ {struct ath10k_fw_crash_data* fw_crash_data; } ;
struct ath10k {int dump_mutex; TYPE_1__ coredump; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

struct ath10k_fw_crash_data *FUNC_3(struct ath10k *VAR_1)
{
 struct ath10k_fw_crash_data *VAR_2 = VAR_1->coredump.fw_crash_data;

 FUNC_2(&VAR_1->dump_mutex);

 if (VAR_0 == 0)

  return ((void*)0);

 FUNC_0(&VAR_2->guid);
 FUNC_1(&VAR_2->timestamp);

 return VAR_2;
}
