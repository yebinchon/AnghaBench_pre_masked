
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct link_params {int port; struct bnx2x* bp; } ;
struct bnx2x {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int,...) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 int FUNC_1 (struct bnx2x*,scalar_t__) ;
 int FUNC_2 (struct bnx2x*,scalar_t__,int) ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;

 int VAR_14 ;
 int FUNC_3 (int,int) ;

__attribute__((used)) static int FUNC_4(struct link_params *VAR_15, u32 VAR_16,
       u32 VAR_17)
{
 struct bnx2x *VAR_18 = VAR_15->bp;
 u8 VAR_19 = VAR_15->port;
 u32 VAR_20, VAR_21;
 u32 VAR_22 = 1000;


 FUNC_2(VAR_18, VAR_5 + VAR_19*4, 0x1);


 VAR_20 = FUNC_1(VAR_18, VAR_9 + VAR_19*4);
 VAR_21 = FUNC_1(VAR_18, VAR_8 + VAR_19*8);
 FUNC_0(VAR_4, "init_crd 0x%x  crd 0x%x\n", VAR_20, VAR_21);

 while ((VAR_20 != VAR_21) && VAR_22) {
  FUNC_3(5000, 10000);
  VAR_21 = FUNC_1(VAR_18, VAR_8 + VAR_19*8);
  VAR_22--;
 }
 VAR_21 = FUNC_1(VAR_18, VAR_8 + VAR_19*8);
 if (VAR_20 != VAR_21) {
  FUNC_0(VAR_4, "BUG! init_crd 0x%x != crd 0x%x\n",
     VAR_20, VAR_21);
  return -VAR_1;
 }

 if (VAR_16 & VAR_0 ||
     VAR_17 == VAR_11 ||
     VAR_17 == VAR_12 ||
     VAR_17 == VAR_13 ||
     VAR_17 == VAR_14) {
  FUNC_2(VAR_18, VAR_10 + VAR_19*4, 1);

  FUNC_2(VAR_18, VAR_7 + VAR_19*4, 0);

  VAR_20 = 778;

 } else {
  u32 VAR_23 = (VAR_2 +
         VAR_3)/16;
  FUNC_2(VAR_18, VAR_10 + VAR_19*4, 0);

  FUNC_2(VAR_18, VAR_7 + VAR_19*4, VAR_23);

  switch (VAR_17) {
  case 128:
   VAR_20 = VAR_23 + 553 - 22;
   break;
  default:
   FUNC_0(VAR_4, "Invalid line_speed 0x%x\n",
      VAR_17);
   return -VAR_1;
  }
 }
 FUNC_2(VAR_18, VAR_9 + VAR_19*4, VAR_20);
 FUNC_0(VAR_4, "PBF updated to speed %d credit %d\n",
   VAR_17, VAR_20);


 FUNC_2(VAR_18, VAR_6 + VAR_19*4, 0x1);
 FUNC_3(5000, 10000);
 FUNC_2(VAR_18, VAR_6 + VAR_19*4, 0x0);


 FUNC_2(VAR_18, VAR_5 + VAR_19*4, 0x0);
 return 0;
}
