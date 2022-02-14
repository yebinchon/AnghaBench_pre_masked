
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef int u32 ;
struct link_params {struct bnx2x* bp; scalar_t__ port; } ;
struct bnx2x {int dummy; } ;


 int FUNC_0 (int ,char*,scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct bnx2x*,int) ;
 int FUNC_2 (struct bnx2x*,int,int) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;

__attribute__((used)) static void FUNC_3(struct link_params *VAR_9, u8 VAR_10)
{
 u8 VAR_11 = VAR_9->port;
 struct bnx2x *VAR_12 = VAR_9->bp;
 u32 VAR_13, VAR_14 = (VAR_11) ? VAR_1 : VAR_0;
 u32 VAR_15;

 if (FUNC_1(VAR_12, VAR_3) &
     VAR_2) {




  VAR_13 = FUNC_1(VAR_12, VAR_14 + VAR_8);
  FUNC_2(VAR_12, VAR_14 + VAR_8,
         (VAR_13 & ~(1<<1)));
  FUNC_2(VAR_12, VAR_14 + VAR_8,
         (VAR_13 | (1<<1)));
  FUNC_0(VAR_4, "Disable XMAC on port %x\n", VAR_11);
  VAR_15 = FUNC_1(VAR_12, VAR_14 + VAR_7);
  if (VAR_10)
   VAR_15 |= (VAR_6 | VAR_5);
  else
   VAR_15 &= ~(VAR_6 | VAR_5);
  FUNC_2(VAR_12, VAR_14 + VAR_7, VAR_15);
 }
}
