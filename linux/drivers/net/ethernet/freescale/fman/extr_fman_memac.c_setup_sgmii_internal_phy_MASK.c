
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct fman_mac {int pcsphy; } ;
struct fixed_phy_status {int speed; int duplex; } ;


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
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int ,int,int) ;

__attribute__((used)) static void FUNC_2(struct fman_mac *VAR_15,
         struct fixed_phy_status *VAR_16)
{
 u16 VAR_17;

 if (FUNC_0(!VAR_15->pcsphy))
  return;


 VAR_17 = VAR_1;
 if (!VAR_16)

  VAR_17 |= VAR_4;
 else {
  switch (VAR_16->speed) {
  case 10:

  break;
  case 100:
   VAR_17 |= VAR_2;
  break;
  case 1000:
  default:
   VAR_17 |= VAR_3;
  break;
  }
  if (!VAR_16->duplex)
   VAR_17 |= VAR_0;
 }
 FUNC_1(VAR_15->pcsphy, VAR_9, VAR_17);


 VAR_17 = VAR_8;
 FUNC_1(VAR_15->pcsphy, VAR_7, VAR_17);
 FUNC_1(VAR_15->pcsphy, VAR_10, VAR_5);
 FUNC_1(VAR_15->pcsphy, VAR_11, VAR_6);

 if (!VAR_16)

  VAR_17 = VAR_13 | VAR_14;
 else

  VAR_17 = VAR_13 & ~VAR_12;
 FUNC_1(VAR_15->pcsphy, 0x0, VAR_17);
}
