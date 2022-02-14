
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct link_params {struct bnx2x* bp; } ;
struct bnx2x {int dummy; } ;


 scalar_t__ FUNC_0 (struct bnx2x*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int ,char*) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 int FUNC_2 (struct bnx2x*,int ) ;
 int FUNC_3 (struct bnx2x*,scalar_t__,int) ;
 scalar_t__ VAR_12 ;
 scalar_t__ FUNC_4 (struct bnx2x*) ;
 int FUNC_5 (int,int) ;

__attribute__((used)) static void FUNC_6(struct link_params *VAR_13, u32 VAR_14)
{
 struct bnx2x *VAR_15 = VAR_13->bp;
 u32 VAR_16 = FUNC_4(VAR_15);







 if (((FUNC_0(VAR_15) == VAR_1) ||
      (FUNC_0(VAR_15) == VAR_0) ||
      (FUNC_0(VAR_15) == VAR_2)) &&
     VAR_16 &&
     (FUNC_2(VAR_15, VAR_8) &
      VAR_6)) {
  FUNC_1(VAR_11,
     "XMAC already out of reset in 4-port mode\n");
  return;
 }


 FUNC_3(VAR_15, VAR_3 + VAR_4,
        VAR_6);
 FUNC_5(1000, 2000);

 FUNC_3(VAR_15, VAR_3 + VAR_5,
        VAR_6);
 if (VAR_16) {
  FUNC_1(VAR_11, "Init XMAC to 2 ports x 10G per path\n");


  FUNC_3(VAR_15, VAR_9, 1);


  FUNC_3(VAR_15, VAR_10, 3);
 } else {

  FUNC_3(VAR_15, VAR_9, 0);
  if (VAR_14 == VAR_12) {
   FUNC_1(VAR_11,
      "Init XMAC to 10G x 1 port per path\n");

   FUNC_3(VAR_15, VAR_10, 3);
  } else {
   FUNC_1(VAR_11,
      "Init XMAC to 20G x 2 ports per path\n");

   FUNC_3(VAR_15, VAR_10, 1);
  }
 }

 FUNC_3(VAR_15, VAR_3 + VAR_4,
        VAR_7);
 FUNC_5(1000, 2000);

 FUNC_3(VAR_15, VAR_3 + VAR_5,
        VAR_7);

}
