
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ath10k_fw_stats {int dummy; } ;
struct TYPE_4__ {TYPE_1__* ops; } ;
struct ath10k {TYPE_2__ wmi; } ;
struct TYPE_3__ {int (* fw_stats_fill ) (struct ath10k*,struct ath10k_fw_stats*,char*) ;} ;


 int VAR_0 ;
 int FUNC_0 (struct ath10k*,struct ath10k_fw_stats*,char*) ;

__attribute__((used)) static inline int
FUNC_1(struct ath10k *VAR_1, struct ath10k_fw_stats *VAR_2,
    char *VAR_3)
{
 if (!VAR_1->wmi.ops->fw_stats_fill)
  return -VAR_0;

 VAR_1->wmi.ops->fw_stats_fill(VAR_1, VAR_2, VAR_3);
 return 0;
}
