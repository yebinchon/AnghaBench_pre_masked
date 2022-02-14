
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct net_device {int dummy; } ;
struct encx24j600_priv {scalar_t__ speed; int full_duplex; int autoneg; struct net_device* ndev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 int FUNC_0 () ;
 int VAR_15 ;
 int FUNC_1 (struct encx24j600_priv*,int ,int ) ;
 int FUNC_2 (struct encx24j600_priv*,int ) ;
 int FUNC_3 (struct encx24j600_priv*,int ) ;
 int FUNC_4 (struct encx24j600_priv*,int ,int ) ;
 int FUNC_5 (struct encx24j600_priv*) ;
 int FUNC_6 (struct encx24j600_priv*,int ,int) ;
 unsigned long VAR_16 ;
 unsigned long FUNC_7 (int) ;
 int FUNC_8 (struct encx24j600_priv*,int ,struct net_device*,char*,...) ;
 scalar_t__ FUNC_9 (unsigned long,unsigned long) ;

__attribute__((used)) static int FUNC_10(struct encx24j600_priv *VAR_17)
{
 struct net_device *VAR_18 = VAR_17->ndev;
 unsigned long VAR_19 = VAR_16 + FUNC_7(2000);
 u16 VAR_20;
 u16 VAR_21;
 int VAR_22 = 0;

 VAR_20 = FUNC_2(VAR_17, VAR_8);
 while ((VAR_20 & VAR_0) == 0) {
  if (FUNC_9(VAR_16, VAR_19)) {
   u16 VAR_23;

   FUNC_8(VAR_17, VAR_15, VAR_18, "timeout waiting for autoneg done\n");

   VAR_17->autoneg = VAR_1;
   VAR_23 = FUNC_2(VAR_17, VAR_9);
   VAR_17->speed = (VAR_23 & VAR_11)
          ? VAR_14 : VAR_13;
   VAR_17->full_duplex = (VAR_23 & VAR_10) ? 1 : 0;
   FUNC_5(VAR_17);
   FUNC_8(VAR_17, VAR_15, VAR_18, "Using parallel detection: %s/%s",
         VAR_17->speed == VAR_14 ? "100" : "10",
         VAR_17->full_duplex ? "Full" : "Half");

   return -VAR_3;
  }
  FUNC_0();
  VAR_20 = FUNC_2(VAR_17, VAR_8);
 }

 VAR_21 = FUNC_3(VAR_17, VAR_2);
 if (VAR_21 & VAR_12) {
  FUNC_4(VAR_17, VAR_7, VAR_4);
  FUNC_6(VAR_17, VAR_5, 0x15);
 } else {
  FUNC_1(VAR_17, VAR_7, VAR_4);
  FUNC_6(VAR_17, VAR_5, 0x12);

  FUNC_6(VAR_17, VAR_6, 0x370f);
 }

 return VAR_22;
}
