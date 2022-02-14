
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct bnx2 {int link_up; void* duplex; int mii_lpa; int mii_adv; int mii_bmcr; int line_speed; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 void* VAR_4 ;
 void* VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct bnx2*,int ,int*) ;

__attribute__((used)) static int
FUNC_1(struct bnx2 *VAR_7)
{
 u32 VAR_8, VAR_9, VAR_10, VAR_11;

 VAR_7->link_up = 1;
 VAR_7->line_speed = VAR_6;

 FUNC_0(VAR_7, VAR_7->mii_bmcr, &VAR_8);
 if (VAR_8 & VAR_3) {
  VAR_7->duplex = VAR_4;
 }
 else {
  VAR_7->duplex = VAR_5;
 }

 if (!(VAR_8 & VAR_2)) {
  return 0;
 }

 FUNC_0(VAR_7, VAR_7->mii_adv, &VAR_9);
 FUNC_0(VAR_7, VAR_7->mii_lpa, &VAR_10);

 VAR_11 = VAR_9 & VAR_10;
 if (VAR_11 & (VAR_1 | VAR_0)) {

  if (VAR_11 & VAR_0) {
   VAR_7->duplex = VAR_4;
  }
  else {
   VAR_7->duplex = VAR_5;
  }
 }

 return 0;
}
