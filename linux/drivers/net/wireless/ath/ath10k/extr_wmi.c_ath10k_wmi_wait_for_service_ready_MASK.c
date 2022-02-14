
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int service_ready; } ;
struct ath10k {TYPE_1__ wmi; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned long FUNC_0 (int *,int ) ;

int FUNC_1(struct ath10k *VAR_2)
{
 unsigned long VAR_3;

 VAR_3 = FUNC_0(&VAR_2->wmi.service_ready,
      VAR_1);
 if (!VAR_3)
  return -VAR_0;
 return 0;
}
