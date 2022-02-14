
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {scalar_t__ autoneg; int rmt_adv; } ;
struct tg3 {int mac_mode; TYPE_1__ link_config; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
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
 scalar_t__ FUNC_0 (struct tg3*,int*,int*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct tg3*,int,int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int) ;
 int FUNC_5 (int) ;

__attribute__((used)) static bool FUNC_6(struct tg3 *VAR_16, u32 VAR_17)
{
 bool VAR_18 = 0;

 if (!(VAR_17 & VAR_11))
  goto out;

 if (VAR_16->link_config.autoneg == VAR_4) {
  u32 VAR_19, VAR_20;
  int VAR_21;

  if (FUNC_0(VAR_16, &VAR_19, &VAR_20)) {
   u32 VAR_22 = 0, VAR_23 = 0;

   if (VAR_19 & VAR_2)
    VAR_22 |= VAR_0;
   if (VAR_19 & VAR_3)
    VAR_22 |= VAR_1;

   if (VAR_20 & VAR_15)
    VAR_23 |= VAR_5;
   if (VAR_20 & VAR_14)
    VAR_23 |= VAR_6;

   VAR_16->link_config.rmt_adv =
        FUNC_1(VAR_23);

   FUNC_2(VAR_16, VAR_22, VAR_23);

   VAR_18 = 1;
  }
  for (VAR_21 = 0; VAR_21 < 30; VAR_21++) {
   FUNC_5(20);
   FUNC_4(VAR_9,
          (VAR_13 |
    VAR_10));
   FUNC_5(40);
   if ((FUNC_3(VAR_9) &
        (VAR_13 |
         VAR_10)) == 0)
    break;
  }

  VAR_17 = FUNC_3(VAR_9);
  if (!VAR_18 &&
      (VAR_17 & VAR_11) &&
      !(VAR_17 & VAR_12))
   VAR_18 = 1;
 } else {
  FUNC_2(VAR_16, 0, 0);


  VAR_18 = 1;

  FUNC_4(VAR_7, (VAR_16->mac_mode | VAR_8));
  FUNC_5(40);

  FUNC_4(VAR_7, VAR_16->mac_mode);
  FUNC_5(40);
 }

out:
 return VAR_18;
}
