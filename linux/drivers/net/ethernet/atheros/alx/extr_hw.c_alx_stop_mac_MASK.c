
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef scalar_t__ u16 ;
struct alx_hw {int rx_ctrl; } ;


 scalar_t__ VAR_0 ;
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
 int FUNC_0 (struct alx_hw*,int ) ;
 int FUNC_1 (struct alx_hw*,int ,int) ;
 int FUNC_2 (int) ;

__attribute__((used)) static int FUNC_3(struct alx_hw *VAR_11)
{
 u32 VAR_12, VAR_13, VAR_14;
 u16 VAR_15;

 VAR_12 = FUNC_0(VAR_11, VAR_6);
 FUNC_1(VAR_11, VAR_6, VAR_12 & ~VAR_7);
 VAR_13 = FUNC_0(VAR_11, VAR_8);
 FUNC_1(VAR_11, VAR_8, VAR_13 & ~VAR_9);

 FUNC_2(40);

 VAR_11->rx_ctrl &= ~(VAR_2 | VAR_3);
 FUNC_1(VAR_11, VAR_1, VAR_11->rx_ctrl);

 for (VAR_15 = 0; VAR_15 < VAR_0; VAR_15++) {
  VAR_14 = FUNC_0(VAR_11, VAR_4);
  if (!(VAR_14 & VAR_5))
   return 0;
  FUNC_2(10);
 }

 return -VAR_10;
}
