
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef int u32 ;
struct bnx2 {scalar_t__ phy_port; int phy_flags; int flags; int phy_lock; } ;


 scalar_t__ FUNC_0 (struct bnx2*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_1 (struct bnx2*) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
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
 int VAR_19 ;
 int VAR_20 ;
 int FUNC_2 (struct bnx2*,int ) ;
 int FUNC_3 (struct bnx2*,int ,int) ;
 int VAR_21 ;
 int VAR_22 ;
 int FUNC_4 (struct bnx2*) ;
 int FUNC_5 (struct bnx2*,int,int,int) ;
 int FUNC_6 (struct bnx2*) ;
 int FUNC_7 (struct bnx2*) ;
 int FUNC_8 (struct bnx2*) ;
 int FUNC_9 (struct bnx2*,int ,int ) ;
 int FUNC_10 (struct bnx2*) ;
 int FUNC_11 (int) ;
 int FUNC_12 (char*) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int) ;

__attribute__((used)) static int
FUNC_16(struct bnx2 *VAR_23, u32 VAR_24)
{
 u32 VAR_25;
 int VAR_26, VAR_27 = 0;
 u8 VAR_28;



 FUNC_10(VAR_23);


 FUNC_5(VAR_23, VAR_3 | VAR_24, 1, 1);



 FUNC_9(VAR_23, VAR_5,
        VAR_6);



 VAR_25 = FUNC_2(VAR_23, VAR_12);

 if (FUNC_0(VAR_23) == VAR_0) {
  FUNC_3(VAR_23, VAR_8, VAR_9);
  FUNC_2(VAR_23, VAR_8);
  FUNC_15(5);

  VAR_25 = VAR_17 |
        VAR_18;

  FUNC_3(VAR_23, VAR_14, VAR_25);

 } else {
  VAR_25 = VAR_16 |
        VAR_17 |
        VAR_18;


  FUNC_3(VAR_23, VAR_14, VAR_25);





  if ((FUNC_1(VAR_23) == VAR_1) ||
      (FUNC_1(VAR_23) == VAR_2))
   FUNC_11(20);


  for (VAR_26 = 0; VAR_26 < 10; VAR_26++) {
   VAR_25 = FUNC_2(VAR_23, VAR_14);
   if ((VAR_25 & (VAR_16 |
        VAR_15)) == 0)
    break;
   FUNC_15(10);
  }

  if (VAR_25 & (VAR_16 |
      VAR_15)) {
   FUNC_12("Chip reset did not complete\n");
   return -VAR_21;
  }
 }


 VAR_25 = FUNC_2(VAR_23, VAR_19);
 if (VAR_25 != 0x01020304) {
  FUNC_12("Chip not in correct endian mode\n");
  return -VAR_22;
 }


 VAR_27 = FUNC_5(VAR_23, VAR_4 | VAR_24, 1, 0);
 if (VAR_27)
  return VAR_27;

 FUNC_13(&VAR_23->phy_lock);
 VAR_28 = VAR_23->phy_port;
 FUNC_6(VAR_23);
 if ((VAR_23->phy_flags & VAR_20) &&
     VAR_28 != VAR_23->phy_port)
  FUNC_7(VAR_23);
 FUNC_14(&VAR_23->phy_lock);

 if (FUNC_1(VAR_23) == VAR_1) {


  FUNC_3(VAR_23, VAR_13, 0x000000fa);


  VAR_27 = FUNC_4(VAR_23);
 }

 if (VAR_23->flags & VAR_7) {
  FUNC_8(VAR_23);

  FUNC_3(VAR_23, VAR_10,
   VAR_11);
 }

 return VAR_27;
}
