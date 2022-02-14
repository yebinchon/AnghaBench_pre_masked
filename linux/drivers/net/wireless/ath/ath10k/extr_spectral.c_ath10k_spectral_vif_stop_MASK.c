
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ath10k_vif {int ar; int spectral_enabled; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;

int FUNC_1(struct ath10k_vif *VAR_1)
{
 if (!VAR_1->spectral_enabled)
  return 0;

 return FUNC_0(VAR_1->ar, VAR_0);
}
