
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef size_t u32 ;
struct emac_priv {scalar_t__* multicast_hash_cnt; size_t mac_hash1; size_t mac_hash2; TYPE_1__* ndev; } ;
struct device {int dummy; } ;
struct TYPE_2__ {struct device dev; } ;


 size_t FUNC_0 (size_t) ;
 size_t VAR_0 ;
 int FUNC_1 (struct device*,char*,size_t,size_t) ;
 size_t FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (struct emac_priv*) ;

__attribute__((used)) static int FUNC_4(struct emac_priv *VAR_1, u8 *VAR_2)
{
 struct device *VAR_3 = &VAR_1->ndev->dev;
 u32 VAR_4 = 0;
 u32 VAR_5;
 u32 VAR_6 = FUNC_2(VAR_2);

 if (VAR_6 >= VAR_0) {
  if (FUNC_3(VAR_1)) {
   FUNC_1(VAR_3, "DaVinci EMAC: emac_hash_add(): Invalid " "Hash %08x, should not be greater than %08x",

    VAR_6, (VAR_0 - 1));
  }
  return -1;
 }


 if (VAR_1->multicast_hash_cnt[VAR_6] == 0) {
  VAR_4 = 1;
  if (VAR_6 < 32) {
   VAR_5 = FUNC_0(VAR_6);
   VAR_1->mac_hash1 |= VAR_5;
  } else {
   VAR_5 = FUNC_0((VAR_6 - 32));
   VAR_1->mac_hash2 |= VAR_5;
  }
 }


 ++VAR_1->multicast_hash_cnt[VAR_6];

 return VAR_4;
}
