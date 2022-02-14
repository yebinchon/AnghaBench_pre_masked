
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct emac_priv {void* mac_hash2; void* mac_hash1; int * multicast_hash_cnt; TYPE_1__* ndev; } ;
struct device {int dummy; } ;
struct TYPE_2__ {struct device dev; } ;



 void* VAR_0 ;

 int VAR_1 ;
 int VAR_2 ;


 int VAR_3 ;
 int FUNC_0 (struct device*,char*,int) ;
 int FUNC_1 (struct emac_priv*,int *) ;
 int FUNC_2 (struct emac_priv*,int *) ;
 int FUNC_3 (int ,void*) ;
 int FUNC_4 (int *,int ,int) ;
 int FUNC_5 (struct emac_priv*) ;

__attribute__((used)) static void FUNC_6(struct emac_priv *VAR_4, u32 VAR_5, u8 *VAR_6)
{
 struct device *VAR_7 = &VAR_4->ndev->dev;
 int VAR_8 = -1;

 switch (VAR_5) {
 case 129:
  VAR_8 = FUNC_1(VAR_4, VAR_6);
  break;
 case 128:
  VAR_8 = FUNC_2(VAR_4, VAR_6);
  break;
 case 130:
  VAR_8 = 1;
  VAR_4->mac_hash1 = VAR_0;
  VAR_4->mac_hash2 = VAR_0;
  break;
 case 131:
  VAR_8 = 1;
  VAR_4->mac_hash1 = 0;
  VAR_4->mac_hash2 = 0;
  FUNC_4(&(VAR_4->multicast_hash_cnt[0]), 0,
  sizeof(VAR_4->multicast_hash_cnt[0]) *
         VAR_3);
  break;
 default:
  if (FUNC_5(VAR_4))
   FUNC_0(VAR_7, "DaVinci EMAC: add_mcast" ": bad operation %d", VAR_5);

  break;
 }


 if (VAR_8 > 0) {
  FUNC_3(VAR_1, VAR_4->mac_hash1);
  FUNC_3(VAR_2, VAR_4->mac_hash2);
 }
}
