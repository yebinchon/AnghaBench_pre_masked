
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * svc_map; } ;
struct ath10k {TYPE_1__ wmi; int dev_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ,int *) ;

__attribute__((used)) static inline bool FUNC_1(struct ath10k *VAR_2)
{
 if (FUNC_0(VAR_0, &VAR_2->dev_flags) &&
     FUNC_0(VAR_1, VAR_2->wmi.svc_map))
  return 1;

 return 0;
}
