
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct bnx2 {int phy_flags; int phy_addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct bnx2*,int ) ;
 int FUNC_1 (struct bnx2*,int ,int) ;
 int VAR_7 ;
 int FUNC_2 (int) ;

__attribute__((used)) static int
FUNC_3(struct bnx2 *VAR_8, u32 VAR_9, u32 VAR_10)
{
 u32 VAR_11;
 int VAR_12, VAR_13;

 if (VAR_8->phy_flags & VAR_6) {
  VAR_11 = FUNC_0(VAR_8, VAR_4);
  VAR_11 &= ~VAR_5;

  FUNC_1(VAR_8, VAR_4, VAR_11);
  FUNC_0(VAR_8, VAR_4);

  FUNC_2(40);
 }

 VAR_11 = (VAR_8->phy_addr << 21) | (VAR_9 << 16) | VAR_10 |
  VAR_1 |
  VAR_3 | VAR_2;
 FUNC_1(VAR_8, VAR_0, VAR_11);

 for (VAR_12 = 0; VAR_12 < 50; VAR_12++) {
  FUNC_2(10);

  VAR_11 = FUNC_0(VAR_8, VAR_0);
  if (!(VAR_11 & VAR_3)) {
   FUNC_2(5);
   break;
  }
 }

 if (VAR_11 & VAR_3)
         VAR_13 = -VAR_7;
 else
  VAR_13 = 0;

 if (VAR_8->phy_flags & VAR_6) {
  VAR_11 = FUNC_0(VAR_8, VAR_4);
  VAR_11 |= VAR_5;

  FUNC_1(VAR_8, VAR_4, VAR_11);
  FUNC_0(VAR_8, VAR_4);

  FUNC_2(40);
 }

 return VAR_13;
}
