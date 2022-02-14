
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_2__ {int rx_dropped; } ;
struct net_device {TYPE_1__ stats; } ;
struct encx24j600_priv {int lock; struct net_device* ndev; } ;
typedef int irqreturn_t ;


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
 int FUNC_0 (struct encx24j600_priv*,int ,int) ;
 int FUNC_1 (struct encx24j600_priv*,int ) ;
 int FUNC_2 (struct encx24j600_priv*) ;
 int FUNC_3 (struct encx24j600_priv*,int ) ;
 int FUNC_4 (struct encx24j600_priv*,int) ;
 int FUNC_5 (struct encx24j600_priv*,int) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (struct encx24j600_priv*,int ,struct net_device*,char*) ;
 int VAR_11 ;

__attribute__((used)) static irqreturn_t FUNC_9(int VAR_12, void *VAR_13)
{
 struct encx24j600_priv *VAR_14 = VAR_13;
 struct net_device *VAR_15 = VAR_14->ndev;
 int VAR_16;


 FUNC_1(VAR_14, VAR_0);

 VAR_16 = FUNC_3(VAR_14, VAR_1);

 if (VAR_16 & VAR_4)
  FUNC_2(VAR_14);

 if (VAR_16 & VAR_10)
  FUNC_5(VAR_14, 0);

 if (VAR_16 & VAR_9)
  FUNC_5(VAR_14, 1);

 if (VAR_16 & VAR_7) {
  if (VAR_16 & VAR_5) {

   FUNC_8(VAR_14, VAR_11, VAR_15, "Packet counter full\n");
  }
  VAR_15->stats.rx_dropped++;
  FUNC_0(VAR_14, VAR_1, VAR_7);
 }

 if (VAR_16 & VAR_6) {
  u8 VAR_17;

  FUNC_6(&VAR_14->lock);

  VAR_17 = FUNC_3(VAR_14, VAR_2) & 0xff;
  while (VAR_17) {
   FUNC_4(VAR_14, VAR_17);
   VAR_17 = FUNC_3(VAR_14, VAR_2) & 0xff;
  }

  FUNC_7(&VAR_14->lock);
 }


 FUNC_1(VAR_14, VAR_8);

 return VAR_3;
}
