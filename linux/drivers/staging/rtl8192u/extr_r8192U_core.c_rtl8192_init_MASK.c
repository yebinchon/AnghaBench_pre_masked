
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct r8192_priv {int watch_dog_timer; int * txqueue_to_outpipemap; int stats; } ;
struct net_device {int dummy; } ;
struct Stats {int dummy; } ;


 int FUNC_0 (char*) ;
 short VAR_0 ;
 struct r8192_priv* FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct net_device*) ;
 int FUNC_3 (int *,int*,int) ;
 int FUNC_4 (int *,int ,int) ;
 int FUNC_5 (struct net_device*) ;
 int FUNC_6 (struct net_device*) ;
 int FUNC_7 (struct r8192_priv*) ;
 int FUNC_8 (struct net_device*) ;
 int FUNC_9 (struct net_device*) ;
 int FUNC_10 (struct net_device*) ;
 scalar_t__ FUNC_11 (struct net_device*) ;
 int FUNC_12 (int *,int ,int ) ;
 int VAR_1 ;

__attribute__((used)) static short FUNC_13(struct net_device *VAR_2)
{
 struct r8192_priv *VAR_3 = FUNC_1(VAR_2);
 int VAR_4;

 FUNC_4(&(VAR_3->stats), 0, sizeof(struct Stats));
 FUNC_4(VAR_3->txqueue_to_outpipemap, 0, 9);
 {
  u8 VAR_5[] = {3, 2, 1, 0, 4, 4, 0, 4, 4};

  FUNC_3(VAR_3->txqueue_to_outpipemap, VAR_5, 9);
 }

 VAR_4 = FUNC_9(VAR_2);
 if (VAR_4)
  return VAR_4;

 FUNC_7(VAR_3);
 FUNC_8(VAR_2);
 FUNC_6(VAR_2);
 VAR_4 = FUNC_10(VAR_2);
 if (VAR_4) {
  FUNC_0("Reading EEPROM info failed");
  return VAR_4;
 }
 FUNC_5(VAR_2);
 FUNC_2(VAR_2);
 FUNC_12(&VAR_3->watch_dog_timer, VAR_1, 0);
 if (FUNC_11(VAR_2) != 0) {
  FUNC_0("Endopoints initialization failed");
  return -VAR_0;
 }

 return 0;
}
