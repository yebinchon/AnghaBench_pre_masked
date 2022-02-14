
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct r8192_priv {int bpbc_pressed; } ;
struct net_device {int dummy; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,char*) ;
 struct r8192_priv* FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct net_device*,int ,int*) ;

__attribute__((used)) static void FUNC_4(struct net_device *VAR_2)
{
 struct r8192_priv *VAR_3 = FUNC_2(VAR_2);
 u8 VAR_4;

 FUNC_3(VAR_2, VAR_1, &VAR_4);
 if (VAR_4 == 0xff)
  return;

 if (VAR_4 & FUNC_0(6) || VAR_4 & FUNC_0(0)) {



  FUNC_1(VAR_0, "CheckPbcGPIO - PBC is pressed\n");
  VAR_3->bpbc_pressed = 1;
 }

}
