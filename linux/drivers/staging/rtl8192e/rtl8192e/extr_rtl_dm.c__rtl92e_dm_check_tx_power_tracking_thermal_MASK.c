
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct r8192_priv {int txpower_count; int txpower_tracking_wq; int btxpower_tracking; } ;
struct net_device {int dummy; } ;


 scalar_t__ FUNC_0 (struct net_device*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct net_device*,char*) ;
 int FUNC_2 (struct net_device*,int ,int,int ,int) ;
 struct r8192_priv* FUNC_3 (struct net_device*) ;
 int FUNC_4 (int *,int ) ;

__attribute__((used)) static void FUNC_5(struct net_device *VAR_2)
{
 struct r8192_priv *VAR_3 = FUNC_3(VAR_2);
 static u8 VAR_4;
 u8 VAR_5 = 0;

 if (FUNC_0(VAR_2))
  VAR_5 = 5;
 else
  VAR_5 = 2;
 if (!VAR_3->btxpower_tracking)
  return;

 if (VAR_3->txpower_count <= VAR_5) {
  VAR_3->txpower_count++;
  return;
 }

 if (!VAR_4) {
  FUNC_2(VAR_2, VAR_0, 0x02, VAR_1, 0x4d);
  FUNC_2(VAR_2, VAR_0, 0x02, VAR_1, 0x4f);
  FUNC_2(VAR_2, VAR_0, 0x02, VAR_1, 0x4d);
  FUNC_2(VAR_2, VAR_0, 0x02, VAR_1, 0x4f);
  VAR_4 = 1;
  return;
 }
 FUNC_1(VAR_2, "===============>Schedule TxPowerTrackingWorkItem\n");
 FUNC_4(&VAR_3->txpower_tracking_wq, 0);
 VAR_4 = 0;

}
