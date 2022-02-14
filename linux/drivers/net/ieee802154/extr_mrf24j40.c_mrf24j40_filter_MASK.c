
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct mrf24j40 {int regmap_short; } ;
struct ieee802154_hw_addr_filt {char* short_addr; char* pan_id; scalar_t__ pan_coord; int ieee_addr; } ;
struct ieee802154_hw {struct mrf24j40* priv; } ;


 int VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 unsigned long VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 int FUNC_0 (int ,char*,...) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int*,int *,int) ;
 int FUNC_3 (char*,...) ;
 int FUNC_4 (struct mrf24j40*) ;
 int FUNC_5 (int ,int ,int,int) ;
 int FUNC_6 (int ,scalar_t__,int) ;

__attribute__((used)) static int FUNC_7(struct ieee802154_hw *VAR_11,
      struct ieee802154_hw_addr_filt *VAR_12,
      unsigned long VAR_13)
{
 struct mrf24j40 *VAR_14 = VAR_11->priv;

 FUNC_0(FUNC_4(VAR_14), "filter\n");

 if (VAR_13 & VAR_4) {

  u8 VAR_15, VAR_16;

  VAR_15 = FUNC_1(VAR_12->short_addr) >> 8 & 0xff;
  VAR_16 = FUNC_1(VAR_12->short_addr) & 0xff;

  FUNC_6(VAR_14->regmap_short, VAR_9, VAR_15);
  FUNC_6(VAR_14->regmap_short, VAR_10, VAR_16);
  FUNC_0(FUNC_4(VAR_14),
   "Set short addr to %04hx\n", VAR_12->short_addr);
 }

 if (VAR_13 & VAR_1) {

  u8 VAR_17, VAR_18[8];

  FUNC_2(VAR_18, &VAR_12->ieee_addr, 8);
  for (VAR_17 = 0; VAR_17 < 8; VAR_17++)
   FUNC_6(VAR_14->regmap_short, VAR_5 + VAR_17,
         VAR_18[VAR_17]);







 }

 if (VAR_13 & VAR_3) {

  u8 VAR_19, VAR_20;

  VAR_20 = FUNC_1(VAR_12->pan_id) >> 8 & 0xff;
  VAR_19 = FUNC_1(VAR_12->pan_id) & 0xff;
  FUNC_6(VAR_14->regmap_short, VAR_6, VAR_20);
  FUNC_6(VAR_14->regmap_short, VAR_7, VAR_19);

  FUNC_0(FUNC_4(VAR_14), "Set PANID to %04hx\n", VAR_12->pan_id);
 }

 if (VAR_13 & VAR_2) {

  u8 VAR_21;
  int VAR_22;

  if (VAR_12->pan_coord)
   VAR_21 = VAR_0;
  else
   VAR_21 = 0;
  VAR_22 = FUNC_5(VAR_14->regmap_short, VAR_8,
      VAR_0, VAR_21);
  if (VAR_22)
   return VAR_22;





  FUNC_0(FUNC_4(VAR_14), "Set Pan Coord to %s\n",
   VAR_12->pan_coord ? "on" : "off");
 }

 return 0;
}
