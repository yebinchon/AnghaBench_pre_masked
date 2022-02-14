
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct r8192_priv {scalar_t__ bTXPowerDataReadFromEEPORM; } ;
struct net_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,char*,...) ;
 int* VAR_4 ;
 int* VAR_5 ;
 int FUNC_1 (struct net_device*,int,int,int) ;
 struct r8192_priv* FUNC_2 (struct net_device*) ;

void FUNC_3(struct net_device *VAR_6)
{
 u32 VAR_7 = 0, VAR_8 = 0;
 u32 *VAR_9 = ((void*)0);
 struct r8192_priv *VAR_10 = FUNC_2(VAR_6);

 if (VAR_10->bTXPowerDataReadFromEEPORM) {
  FUNC_0(VAR_1, "Rtl819XMACPHY_Array_PG\n");
  VAR_7 = VAR_3;
  VAR_9 = VAR_5;

 } else {
  FUNC_0(VAR_1, "Read rtl819XMACPHY_Array\n");
  VAR_7 = VAR_2;
  VAR_9 = VAR_4;
 }
 for (VAR_8 = 0; VAR_8 < VAR_7; VAR_8 += 3) {
  FUNC_0(VAR_0,
    "The Rtl8190MACPHY_Array[0] is %x Rtl8190MACPHY_Array[1] is %x Rtl8190MACPHY_Array[2] is %x\n",
    VAR_9[VAR_8], VAR_9[VAR_8+1], VAR_9[VAR_8+2]);
  if (VAR_9[VAR_8] == 0x318)
   VAR_9[VAR_8+2] = 0x00000800;
  FUNC_1(VAR_6, VAR_9[VAR_8], VAR_9[VAR_8+1],
      VAR_9[VAR_8+2]);
 }
 return;

}
