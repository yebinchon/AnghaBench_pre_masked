
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stmmac_priv {int mode; int device; scalar_t__ chain_mode; struct mac_device_info* hw; } ;
struct mac_device_info {int * mode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*) ;
 int VAR_3 ;

__attribute__((used)) static void FUNC_1(struct stmmac_priv *VAR_4)
{
 struct mac_device_info *VAR_5 = VAR_4->hw;

 if (VAR_4->chain_mode) {
  FUNC_0(VAR_4->device, "Chain mode enabled\n");
  VAR_4->mode = VAR_0;
  VAR_5->mode = &VAR_2;
 } else {
  FUNC_0(VAR_4->device, "Ring mode enabled\n");
  VAR_4->mode = VAR_1;
  VAR_5->mode = &VAR_3;
 }
}
