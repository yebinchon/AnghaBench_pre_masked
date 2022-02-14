
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct bnx2 {scalar_t__ func; int phy_flags; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_0 (struct bnx2*,int ) ;

__attribute__((used)) static void
FUNC_1(struct bnx2 *VAR_8)
{
 u32 VAR_9 = FUNC_0(VAR_8, VAR_0);
 u32 VAR_10 = VAR_9 & VAR_1;
 u32 VAR_11;

 if (VAR_10 == VAR_2)
  return;
 else if (VAR_10 == VAR_3) {
  VAR_8->phy_flags |= VAR_7;
  return;
 }

 if (VAR_9 & VAR_6)
  VAR_11 = (VAR_9 & VAR_4) >> 21;
 else
  VAR_11 = (VAR_9 & VAR_5) >> 8;

 if (VAR_8->func == 0) {
  switch (VAR_11) {
  case 0x4:
  case 0x5:
  case 0x6:
   VAR_8->phy_flags |= VAR_7;
   return;
  }
 } else {
  switch (VAR_11) {
  case 0x1:
  case 0x2:
  case 0x4:
   VAR_8->phy_flags |= VAR_7;
   return;
  }
 }
}
