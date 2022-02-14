
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ks_wlan_private {int dev_state; int connect_status; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ks_wlan_private*,int ) ;
 scalar_t__ FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(struct ks_wlan_private *VAR_2)
{
 if (FUNC_1(VAR_2->connect_status))
  FUNC_0(VAR_2, VAR_1);
 else
  VAR_2->dev_state = VAR_0;
}
