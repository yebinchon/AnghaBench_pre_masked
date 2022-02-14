
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
typedef scalar_t__ u32 ;
struct link_vars {int eee_status; scalar_t__ phy_flags; scalar_t__ link_up; scalar_t__ link_status; } ;
struct link_params {int port; int num_phys; TYPE_1__* phy; int chip_id; struct bnx2x* bp; } ;
struct bnx2x {int dummy; } ;
struct TYPE_4__ {int flags; int (* link_reset ) (TYPE_1__*,struct link_params*) ;} ;


 int FUNC_0 (struct bnx2x*) ;
 int FUNC_1 (int ,char*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 size_t VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 scalar_t__ VAR_17 ;
 scalar_t__ VAR_18 ;
 scalar_t__ VAR_19 ;
 scalar_t__ VAR_20 ;
 scalar_t__ VAR_21 ;
 scalar_t__ VAR_22 ;
 scalar_t__ VAR_23 ;
 scalar_t__ VAR_24 ;
 int FUNC_2 (struct bnx2x*,int ) ;
 int FUNC_3 (struct bnx2x*,scalar_t__,int) ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 scalar_t__ VAR_28 ;
 int FUNC_4 (struct bnx2x*,scalar_t__,int) ;
 int FUNC_5 (struct link_params*,int) ;
 int FUNC_6 (struct bnx2x*,int,int ) ;
 int FUNC_7 (struct link_params*,TYPE_1__*) ;
 int FUNC_8 (struct bnx2x*,int ,int,int ) ;
 int FUNC_9 (struct link_params*,struct link_vars*,int ,int ) ;
 int FUNC_10 (struct bnx2x*,struct link_params*) ;
 int FUNC_11 (struct link_params*,int ) ;
 int FUNC_12 (struct link_params*,int ) ;
 int FUNC_13 (struct link_params*,int ,int ) ;
 int FUNC_14 (struct link_params*,scalar_t__) ;
 int FUNC_15 (struct link_params*,int) ;
 int FUNC_16 (TYPE_1__*,struct link_params*) ;
 int FUNC_17 (TYPE_1__*,struct link_params*) ;
 int FUNC_18 (int,int) ;

int FUNC_19(struct link_params *VAR_29, struct link_vars *VAR_30,
       u8 VAR_31)
{
 struct bnx2x *VAR_32 = VAR_29->bp;
 u8 VAR_33, VAR_34 = VAR_29->port, VAR_35 = 0;
 FUNC_1(VAR_11, "Resetting the link of port %d\n", VAR_34);

 VAR_30->link_status = 0;
 FUNC_5(VAR_29, 1);
 FUNC_14(VAR_29, VAR_30->link_status);
 VAR_30->eee_status &= ~(VAR_26 |
         VAR_25);
 FUNC_15(VAR_29, VAR_30->eee_status);
 FUNC_4(VAR_32, VAR_23 + VAR_34*4,
         (VAR_16 |
   VAR_15 |
   VAR_14 |
   VAR_13));


 FUNC_3(VAR_32, VAR_19 + VAR_34*4, 1);


 if (!FUNC_0(VAR_32)) {
  FUNC_3(VAR_32, VAR_18 + VAR_34*4, 0);
  FUNC_3(VAR_32, VAR_20 + VAR_34*4, 0);
 }

 if (!FUNC_0(VAR_32)) {
  FUNC_8(VAR_32, VAR_29->chip_id, VAR_34, 0);
 } else {
  FUNC_12(VAR_29, 0);
  FUNC_11(VAR_29, 0);
 }

 if (!FUNC_0(VAR_32))
  FUNC_3(VAR_32, VAR_24 + VAR_34*4, 0);

 FUNC_18(10000, 20000);




 FUNC_10(VAR_32, VAR_29);
 FUNC_9(VAR_29, VAR_30, VAR_6, 0);

 if (VAR_31) {
  for (VAR_33 = VAR_0; VAR_33 < VAR_29->num_phys;
        VAR_33++) {
   if (VAR_29->phy[VAR_33].link_reset) {
    FUNC_7(VAR_29,
        &VAR_29->phy[VAR_33]);
    VAR_29->phy[VAR_33].link_reset(
     &VAR_29->phy[VAR_33],
     VAR_29);
   }
   if (VAR_29->phy[VAR_33].flags &
       VAR_1)
    VAR_35 = 1;
  }
 }

 if (VAR_35) {

  FUNC_6(VAR_32, VAR_34, 0);
  FUNC_4(VAR_32, VAR_22 + VAR_34*4,
          1 << VAR_12);
 }
 if (VAR_29->phy[VAR_5].link_reset)
  VAR_29->phy[VAR_5].link_reset(
   &VAR_29->phy[VAR_5], VAR_29);


 if (!FUNC_0(VAR_32)) {

  FUNC_3(VAR_32, VAR_2 + VAR_7,
         (VAR_8 << VAR_34));
  FUNC_3(VAR_32, VAR_17 + VAR_34*4, 0);
  FUNC_3(VAR_32, VAR_21 + VAR_34*4, 0);
 } else {
  u32 VAR_36 = (VAR_29->port) ? VAR_4 : VAR_3;
  FUNC_13(VAR_29, 0, 0);
  if (FUNC_2(VAR_32, VAR_10) &
      VAR_9)
   FUNC_3(VAR_32, VAR_36 + VAR_28,
          VAR_27);
 }
 VAR_30->link_up = 0;
 VAR_30->phy_flags = 0;
 return 0;
}
