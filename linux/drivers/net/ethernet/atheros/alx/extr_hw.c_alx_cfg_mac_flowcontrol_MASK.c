
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct alx_hw {int rx_ctrl; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct alx_hw*,int ,int ) ;

void FUNC_1(struct alx_hw *VAR_5, u8 VAR_6)
{
 if (VAR_6 & VAR_0)
  VAR_5->rx_ctrl |= VAR_3;
 else
  VAR_5->rx_ctrl &= ~VAR_3;

 if (VAR_6 & VAR_1)
  VAR_5->rx_ctrl |= VAR_4;
 else
  VAR_5->rx_ctrl &= ~VAR_4;

 FUNC_0(VAR_5, VAR_2, VAR_5->rx_ctrl);
}
