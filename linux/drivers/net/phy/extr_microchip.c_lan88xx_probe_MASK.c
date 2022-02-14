
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct device {int of_node; } ;
struct TYPE_2__ {struct device dev; } ;
struct phy_device {struct lan88xx_priv* priv; TYPE_1__ mdio; } ;
struct lan88xx_priv {void* chip_rev; void* chip_id; scalar_t__ wolopts; } ;


 int FUNC_0 (int*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 struct lan88xx_priv* FUNC_1 (struct device*,int,int ) ;
 int FUNC_2 (int ,char*,int*,int ,int) ;
 void* FUNC_3 (struct phy_device*,int,int ) ;
 int FUNC_4 (struct phy_device*,int ,int) ;

__attribute__((used)) static int FUNC_5(struct phy_device *VAR_8)
{
 struct device *VAR_9 = &VAR_8->mdio.dev;
 struct lan88xx_priv *VAR_10;
 u32 VAR_11[4];
 int VAR_12;

 VAR_10 = FUNC_1(VAR_9, sizeof(*VAR_10), VAR_3);
 if (!VAR_10)
  return -VAR_1;

 VAR_10->wolopts = 0;

 VAR_12 = FUNC_2(VAR_9->of_node,
        "microchip,led-modes",
        VAR_11,
        0,
        FUNC_0(VAR_11));
 if (VAR_12 >= 0) {
  u32 VAR_13 = 0;
  int VAR_14;

  for (VAR_14 = 0; VAR_14 < VAR_12; VAR_14++) {
   if (VAR_11[VAR_14] > 15)
    return -VAR_0;
   VAR_13 |= VAR_11[VAR_14] << (VAR_14 * 4);
  }
  for (; VAR_14 < FUNC_0(VAR_11); VAR_14++)
   VAR_13 |= VAR_4 << (VAR_14 * 4);
  (void)FUNC_4(VAR_8, VAR_5, VAR_13);
 } else if (VAR_12 == -VAR_2) {
  return -VAR_0;
 }


 VAR_10->chip_id = FUNC_3(VAR_8, 3, VAR_6);
 VAR_10->chip_rev = FUNC_3(VAR_8, 3, VAR_7);

 VAR_8->priv = VAR_10;

 return 0;
}
