
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {scalar_t__ autoneg; } ;
struct tg3 {int phy_flags; TYPE_1__ link_config; scalar_t__ link_up; scalar_t__ serdes_counter; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (struct tg3*,int ,int*) ;
 int FUNC_1 (struct tg3*,int ,int) ;

__attribute__((used)) static void FUNC_2(struct tg3 *VAR_10)
{
 if (VAR_10->serdes_counter) {

  VAR_10->serdes_counter--;
  return;
 }

 if (!VAR_10->link_up &&
     (VAR_10->link_config.autoneg == VAR_0)) {
  u32 VAR_11;

  FUNC_0(VAR_10, VAR_4, &VAR_11);
  if (VAR_11 & VAR_1) {
   u32 VAR_12, VAR_13;


   FUNC_1(VAR_10, VAR_8, 0x7c00);
   FUNC_0(VAR_10, VAR_8, &VAR_12);


   FUNC_1(VAR_10, VAR_5,
      VAR_6);
   FUNC_0(VAR_10, VAR_7, &VAR_13);
   FUNC_0(VAR_10, VAR_7, &VAR_13);

   if ((VAR_12 & 0x10) && !(VAR_13 & 0x20)) {





    VAR_11 &= ~VAR_1;
    VAR_11 |= VAR_3 | VAR_2;
    FUNC_1(VAR_10, VAR_4, VAR_11);
    VAR_10->phy_flags |= VAR_9;
   }
  }
 } else if (VAR_10->link_up &&
     (VAR_10->link_config.autoneg == VAR_0) &&
     (VAR_10->phy_flags & VAR_9)) {
  u32 VAR_14;


  FUNC_1(VAR_10, VAR_5,
     VAR_6);
  FUNC_0(VAR_10, VAR_7, &VAR_14);
  if (VAR_14 & 0x20) {
   u32 VAR_15;


   FUNC_0(VAR_10, VAR_4, &VAR_15);
   FUNC_1(VAR_10, VAR_4, VAR_15 | VAR_1);

   VAR_10->phy_flags &= ~VAR_9;

  }
 }
}
