
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef size_t u8 ;
struct TYPE_8__ {size_t antswlut; } ;
struct TYPE_7__ {size_t antswlut; } ;
struct TYPE_9__ {TYPE_3__ ghz2; TYPE_2__ ghz5; } ;
struct ssb_sprom {TYPE_4__ fem; } ;
struct TYPE_10__ {scalar_t__ do_full_init; } ;
struct b43_wldev {TYPE_5__ phy; int wl; TYPE_1__* dev; } ;
struct TYPE_6__ {struct ssb_sprom* bus_sprom; } ;


 size_t FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
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
 int FUNC_1 (int) ;
 scalar_t__ VAR_15 ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (struct b43_wldev*) ;
 int * VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int FUNC_4 (struct b43_wldev*,int ,int ) ;

__attribute__((used)) static void FUNC_5(struct b43_wldev *VAR_31)
{
 struct ssb_sprom *VAR_32 = VAR_31->dev->bus_sprom;
 u8 VAR_33;

 if (FUNC_2(VAR_31->wl) == VAR_15)
  VAR_33 = VAR_32->fem.ghz5.antswlut;
 else
  VAR_33 = VAR_32->fem.ghz2.antswlut;


 if (VAR_31->phy.do_full_init) {
  FUNC_4(VAR_31, VAR_3, VAR_19);
  FUNC_4(VAR_31, VAR_8, VAR_23);
  FUNC_4(VAR_31, VAR_14, VAR_30);
  FUNC_4(VAR_31, VAR_4, VAR_20);
  FUNC_4(VAR_31, VAR_13, VAR_29);
  FUNC_4(VAR_31, VAR_6, VAR_22);
  FUNC_4(VAR_31, VAR_5, VAR_21);
  FUNC_4(VAR_31, VAR_9, VAR_25);
  FUNC_4(VAR_31, VAR_10, VAR_26);
  FUNC_4(VAR_31, VAR_11, VAR_27);
  FUNC_4(VAR_31, VAR_12, VAR_28);
  FUNC_4(VAR_31, VAR_7, VAR_24);
  FUNC_4(VAR_31, VAR_1, VAR_17);
  FUNC_4(VAR_31, VAR_2, VAR_18);
  FUNC_3(VAR_31);
 }


 if (VAR_33 < FUNC_0(VAR_16))
  FUNC_4(VAR_31, VAR_0,
       VAR_16[VAR_33]);
 else
  FUNC_1(1);
}
