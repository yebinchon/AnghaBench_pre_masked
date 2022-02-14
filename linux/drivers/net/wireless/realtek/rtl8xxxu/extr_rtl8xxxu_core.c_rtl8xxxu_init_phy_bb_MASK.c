
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct rtl8xxxu_priv {int tx_paths; int rx_paths; int xtalk; scalar_t__ rtl_chip; scalar_t__ has_xtalk; TYPE_1__* fops; } ;
struct TYPE_2__ {int (* init_phy_bb ) (struct rtl8xxxu_priv*) ;} ;


 int FUNC_0 (int) ;
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
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 scalar_t__ VAR_19 ;
 int FUNC_1 (struct rtl8xxxu_priv*,int ) ;
 int FUNC_2 (struct rtl8xxxu_priv*,int ,int) ;
 int FUNC_3 (struct rtl8xxxu_priv*) ;

__attribute__((used)) static int FUNC_4(struct rtl8xxxu_priv *VAR_20)
{
 u8 VAR_21;
 u32 VAR_22;

 VAR_20->fops->init_phy_bb(VAR_20);

 if (VAR_20->tx_paths == 1 && VAR_20->rx_paths == 2) {





  VAR_22 = FUNC_1(VAR_20, VAR_9);
  VAR_22 &= ~(FUNC_0(0) | FUNC_0(1));
  VAR_22 |= FUNC_0(1);
  FUNC_2(VAR_20, VAR_9, VAR_22);

  VAR_22 = FUNC_1(VAR_20, VAR_10);
  VAR_22 &= ~0x300033;
  VAR_22 |= 0x200022;
  FUNC_2(VAR_20, VAR_10, VAR_22);

  VAR_22 = FUNC_1(VAR_20, VAR_8);
  VAR_22 &= ~VAR_1;
  VAR_22 &= 0x00ffffff;
  VAR_22 |= 0x40000000;
  VAR_22 |= VAR_0;
  FUNC_2(VAR_20, VAR_8, VAR_22);

  VAR_22 = FUNC_1(VAR_20, VAR_13);
  VAR_22 &= ~(VAR_4 | VAR_6);
  VAR_22 |= (VAR_2 | VAR_3 |
     VAR_5);
  FUNC_2(VAR_20, VAR_13, VAR_22);

  VAR_22 = FUNC_1(VAR_20, VAR_12);
  VAR_22 &= ~(FUNC_0(4) | FUNC_0(5));
  VAR_22 |= FUNC_0(4);
  FUNC_2(VAR_20, VAR_12, VAR_22);

  VAR_22 = FUNC_1(VAR_20, VAR_15);
  VAR_22 &= ~(FUNC_0(27) | FUNC_0(26));
  VAR_22 |= FUNC_0(27);
  FUNC_2(VAR_20, VAR_15, VAR_22);

  VAR_22 = FUNC_1(VAR_20, VAR_14);
  VAR_22 &= ~(FUNC_0(27) | FUNC_0(26));
  VAR_22 |= FUNC_0(27);
  FUNC_2(VAR_20, VAR_14, VAR_22);

  VAR_22 = FUNC_1(VAR_20, VAR_17);
  VAR_22 &= ~(FUNC_0(27) | FUNC_0(26));
  VAR_22 |= FUNC_0(27);
  FUNC_2(VAR_20, VAR_17, VAR_22);

  VAR_22 = FUNC_1(VAR_20, VAR_16);
  VAR_22 &= ~(FUNC_0(27) | FUNC_0(26));
  VAR_22 |= FUNC_0(27);
  FUNC_2(VAR_20, VAR_16, VAR_22);

  VAR_22 = FUNC_1(VAR_20, VAR_18);
  VAR_22 &= ~(FUNC_0(27) | FUNC_0(26));
  VAR_22 |= FUNC_0(27);
  FUNC_2(VAR_20, VAR_18, VAR_22);
 }

 if (VAR_20->has_xtalk) {
  VAR_22 = FUNC_1(VAR_20, VAR_11);

  VAR_21 = VAR_20->xtalk;
  VAR_22 &= 0xff000fff;
  VAR_22 |= ((VAR_21 | (VAR_21 << 6)) << 12);

  FUNC_2(VAR_20, VAR_11, VAR_22);
 }

 if (VAR_20->rtl_chip == VAR_19)
  FUNC_2(VAR_20, VAR_7, 0x000f81fb);

 return 0;
}
