
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct ixgb_hw {scalar_t__ phy_type; scalar_t__ lastLFC; scalar_t__ lastRFC; } ;


 scalar_t__ FUNC_0 (struct ixgb_hw*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (char*) ;

bool FUNC_2(struct ixgb_hw *VAR_3)
{
 u32 VAR_4, VAR_5;
 bool VAR_6 = 0;

 if (VAR_3->phy_type == VAR_2) {
  VAR_4 = FUNC_0(VAR_3, VAR_0);
  VAR_5 = FUNC_0(VAR_3, VAR_1);
  if ((VAR_3->lastLFC + 250 < VAR_4)
      || (VAR_3->lastRFC + 250 < VAR_5)) {
   FUNC_1("BAD LINK! too many LFC/RFC since last check\n");
   VAR_6 = 1;
  }
  VAR_3->lastLFC = VAR_4;
  VAR_3->lastRFC = VAR_5;
 }

 return VAR_6;
}
