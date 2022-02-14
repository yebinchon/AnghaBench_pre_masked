
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ks_wlan_private {scalar_t__ sleep_mode; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct ks_wlan_private*,scalar_t__) ;

__attribute__((used)) static void FUNC_1(struct ks_wlan_private *VAR_2)
{
 if (VAR_2->sleep_mode != VAR_1 &&
     VAR_2->sleep_mode != VAR_0)
  return;

 FUNC_0(VAR_2, VAR_2->sleep_mode);
}
