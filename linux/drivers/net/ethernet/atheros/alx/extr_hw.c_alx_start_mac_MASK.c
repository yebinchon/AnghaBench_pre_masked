
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct alx_hw {int rx_ctrl; scalar_t__ duplex; scalar_t__ link_speed; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int,int ,int ) ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 int FUNC_1 (struct alx_hw*,int ) ;
 int FUNC_2 (struct alx_hw*,int ,int) ;

void FUNC_3(struct alx_hw *VAR_13)
{
 u32 VAR_14, VAR_15, VAR_16;

 VAR_16 = FUNC_1(VAR_13, VAR_7);
 FUNC_2(VAR_13, VAR_7, VAR_16 | VAR_8);
 VAR_15 = FUNC_1(VAR_13, VAR_9);
 FUNC_2(VAR_13, VAR_9, VAR_15 | VAR_10);

 VAR_14 = VAR_13->rx_ctrl;
 if (VAR_13->duplex == VAR_11)
  VAR_14 |= VAR_1;
 else
  VAR_14 &= ~VAR_1;
 FUNC_0(VAR_14, VAR_3,
        VAR_13->link_speed == VAR_12 ? VAR_4 :
           VAR_5);
 VAR_14 |= VAR_6 | VAR_2;
 VAR_13->rx_ctrl = VAR_14;
 FUNC_2(VAR_13, VAR_0, VAR_14);
}
