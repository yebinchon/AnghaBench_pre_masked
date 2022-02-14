
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct link_vars {int dummy; } ;
struct link_params {scalar_t__* req_line_speed; scalar_t__ loopback_mode; int num_phys; struct bnx2x_phy* phy; struct bnx2x* bp; } ;
struct bnx2x_phy {int (* read_status ) (struct bnx2x_phy*,struct link_params*,struct link_vars*) ;int media_type; } ;
struct bnx2x {int dummy; } ;


 scalar_t__ FUNC_0 (struct bnx2x*) ;
 int FUNC_1 (struct bnx2x*,struct bnx2x_phy*,int ,int ,int*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 size_t FUNC_2 (size_t) ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 scalar_t__ VAR_13 ;
 int FUNC_3 (struct bnx2x*,struct bnx2x_phy*,int ,int,int*) ;
 int FUNC_4 (struct bnx2x_phy*,struct link_params*) ;
 int FUNC_5 (struct bnx2x_phy*,struct link_params*,struct link_vars*) ;
 int FUNC_6 (struct bnx2x_phy*,struct link_params*,struct link_vars*) ;

int FUNC_7(struct link_params *VAR_14, struct link_vars *VAR_15,
      u8 VAR_16)
{
 struct bnx2x *VAR_17 = VAR_14->bp;
 u16 VAR_18 = 0, VAR_19 = 0;
 u8 VAR_20 = 0, VAR_21;
 struct link_vars VAR_22;
 struct bnx2x_phy *VAR_23 = &VAR_14->phy[VAR_6];

 if (FUNC_0(VAR_17)) {
  u16 VAR_24;
  if (VAR_14->req_line_speed[FUNC_2(VAR_6)]
      > VAR_13) {

   FUNC_3(VAR_17, VAR_23, VAR_11,
     1, &VAR_24);
   FUNC_3(VAR_17, VAR_23, VAR_11,
     1, &VAR_24);
   VAR_24 &= (1<<2);
  } else {

   u8 VAR_25 = FUNC_4(VAR_23, VAR_14);
   FUNC_3(VAR_17, VAR_23, VAR_11,
     VAR_12,
     &VAR_18);
   VAR_18 = ((VAR_18 >> 8) & 0xf) |
    ((VAR_18 >> 12) & 0xf);
   VAR_24 = VAR_18 & (1 << VAR_25);
  }
  if (!VAR_24)
   return -VAR_0;
 } else {
  FUNC_1(VAR_17, VAR_23,
     VAR_10,
     VAR_8,
     &VAR_18);

  if (!(VAR_18 & VAR_9))
   return -VAR_0;
 }

 if (VAR_14->loopback_mode == VAR_7)
  return 0;

 switch (VAR_14->num_phys) {
 case 1:

  return 0;
 case 2:
  VAR_20 = VAR_14->phy[VAR_5].read_status(
   &VAR_14->phy[VAR_5],
   VAR_14, &VAR_22);
  break;
 case 3:
  for (VAR_19 = VAR_5; VAR_19 < VAR_14->num_phys;
        VAR_19++) {
   VAR_21 = ((VAR_14->phy[VAR_19].media_type ==
         VAR_2) ||
        (VAR_14->phy[VAR_19].media_type ==
         VAR_3) ||
        (VAR_14->phy[VAR_19].media_type ==
         VAR_4) ||
        (VAR_14->phy[VAR_19].media_type ==
         VAR_1));

   if (VAR_16 != VAR_21)
    continue;
   if (VAR_14->phy[VAR_19].read_status) {
    VAR_20 |=
     VAR_14->phy[VAR_19].read_status(
      &VAR_14->phy[VAR_19],
      VAR_14, &VAR_22);
   }
  }
  break;
 }
 if (VAR_20)
  return 0;
 return -VAR_0;
}
