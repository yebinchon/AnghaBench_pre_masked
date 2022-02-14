
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct TYPE_2__ {scalar_t__ phy_corenum; } ;
struct brcms_phy {TYPE_1__ pubpi; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 int FUNC_0 (struct brcms_phy*,int ,int ,scalar_t__) ;

__attribute__((used)) static void
FUNC_1(struct brcms_phy *VAR_12, u8 VAR_13, u8 *VAR_14)
{
 u8 VAR_15;

 for (VAR_15 = 0; VAR_15 < VAR_12->pubpi.phy_corenum; VAR_15++) {
  if (VAR_13 == VAR_0) {
   if (VAR_15 == VAR_1) {
    FUNC_0(VAR_12,
           VAR_2,
           VAR_6,
           VAR_14[2 *
            VAR_15] <<
           VAR_7);
    FUNC_0(VAR_12,
           VAR_3,
           VAR_8,
           VAR_14[2 * VAR_15 +
            1] <<
           VAR_9);
   } else {
    FUNC_0(VAR_12,
           VAR_4,
           VAR_6,
           VAR_14[2 *
            VAR_15] <<
           VAR_7);
    FUNC_0(VAR_12,
           VAR_5,
           VAR_8,
           VAR_14[2 * VAR_15 +
            1] <<
           VAR_9);
   }
  } else {
   if (VAR_15 == VAR_1)
    FUNC_0(VAR_12,
           VAR_3,
           VAR_10,
           VAR_14[2 *
            VAR_15] <<
           VAR_11);
   else
    FUNC_0(VAR_12,
           VAR_5,
           VAR_10,
           VAR_14[2 *
            VAR_15] <<
           VAR_11);
  }
 }
}
