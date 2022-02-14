
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct phy_device {int speed; scalar_t__ duplex; int link; } ;
struct TYPE_4__ {int desc_split; } ;
struct ag71xx {int* fifodata; TYPE_2__ tx_ring; TYPE_1__* ndev; } ;
struct TYPE_3__ {struct phy_device* phydev; } ;


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



 int FUNC_0 (int,char*,int) ;
 int FUNC_1 (struct ag71xx*) ;
 int FUNC_2 (struct ag71xx*) ;
 int FUNC_3 (struct ag71xx*) ;
 int FUNC_4 (struct ag71xx*,int ) ;
 int FUNC_5 (struct ag71xx*,int ) ;
 int FUNC_6 (struct ag71xx*,int ,int) ;
 int FUNC_7 (struct phy_device*) ;

__attribute__((used)) static void FUNC_8(struct ag71xx *VAR_11, bool VAR_12)
{
 struct phy_device *VAR_13 = VAR_11->ndev->phydev;
 u32 VAR_14;
 u32 VAR_15;
 u32 VAR_16;

 if (!VAR_13->link && VAR_12) {
  FUNC_3(VAR_11);
  return;
 }

 if (!FUNC_4(VAR_11, VAR_4) && !FUNC_4(VAR_11, VAR_5))
  FUNC_1(VAR_11);

 VAR_14 = FUNC_5(VAR_11, VAR_2);
 VAR_14 &= ~(VAR_8 | VAR_9 | VAR_7);
 VAR_14 |= (VAR_13->duplex) ? VAR_7 : 0;

 VAR_15 = FUNC_5(VAR_11, VAR_3);
 VAR_15 &= ~(VAR_10);

 VAR_16 = FUNC_5(VAR_11, VAR_1);
 VAR_16 &= ~VAR_6;

 switch (VAR_13->speed) {
 case 128:
  VAR_14 |= VAR_8;
  VAR_16 |= VAR_6;
  break;
 case 129:
  VAR_14 |= VAR_9;
  VAR_15 |= VAR_10;
  break;
 case 130:
  VAR_14 |= VAR_9;
  break;
 default:
  FUNC_0(1, "not supported speed %i\n", VAR_13->speed);
  return;
 }

 if (VAR_11->tx_ring.desc_split) {
  VAR_11->fifodata[2] &= 0xffff;
  VAR_11->fifodata[2] |= ((2048 - VAR_11->tx_ring.desc_split) / 4) << 16;
 }

 FUNC_6(VAR_11, VAR_0, VAR_11->fifodata[2]);

 FUNC_6(VAR_11, VAR_2, VAR_14);
 FUNC_6(VAR_11, VAR_1, VAR_16);
 FUNC_6(VAR_11, VAR_3, VAR_15);

 FUNC_2(VAR_11);

 if (VAR_12)
  FUNC_7(VAR_13);
}
