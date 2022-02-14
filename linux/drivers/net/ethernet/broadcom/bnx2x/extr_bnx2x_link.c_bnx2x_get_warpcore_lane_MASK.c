
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct link_params {int port; struct bnx2x* bp; } ;
struct bnx2x_phy {int dummy; } ;
struct bnx2x {int dummy; } ;


 int FUNC_0 (struct bnx2x*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (struct bnx2x*,int ) ;
 scalar_t__ FUNC_2 (struct bnx2x*) ;

__attribute__((used)) static u8 FUNC_3(struct bnx2x_phy *VAR_6,
      struct link_params *VAR_7)
{
 u8 VAR_8 = 0;
 struct bnx2x *VAR_9 = VAR_7->bp;
 u32 VAR_10, VAR_11;
 u8 VAR_12, VAR_13;

 VAR_12 = FUNC_0(VAR_9);
 VAR_13 = VAR_7->port;

 if (FUNC_2(VAR_9)) {
  u32 VAR_14, VAR_15;


  VAR_11 = FUNC_1(VAR_9, VAR_1);
  if (VAR_11 & 0x1)
   VAR_10 = (VAR_11 & 0x2);
  else
   VAR_10 = FUNC_1(VAR_9, VAR_0);

  if (VAR_10)
   VAR_12 = VAR_12 ^ 1;


  VAR_15 = FUNC_1(VAR_9, VAR_3);
  if (VAR_15 & 0x1)
   VAR_14 = (VAR_15 & 0x2);
  else
   VAR_14 = FUNC_1(VAR_9, VAR_2);

  if (VAR_14)
   VAR_13 = VAR_13 ^ 1;

  VAR_8 = (VAR_13<<1) + VAR_12;
 } else {


  VAR_11 =
   FUNC_1(VAR_9, VAR_5);
  if (VAR_11 & 0x1) {
   VAR_10 = (VAR_11 & 0x2);
  } else {
   VAR_10 =
    FUNC_1(VAR_9, VAR_4);
  }
  if (VAR_10)
   VAR_12 = VAR_12 ^ 1;

  VAR_8 = VAR_12 << 1 ;
 }
 return VAR_8;
}
