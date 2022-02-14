
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef int u64 ;
struct tb_xdomain {int dummy; } ;
struct TYPE_4__ {int parent; } ;
struct tb_switch {scalar_t__ link; scalar_t__ depth; int authorized; TYPE_2__ dev; } ;
struct tb {int dummy; } ;
struct icm_pkg_header {int dummy; } ;
struct TYPE_3__ {int flags; } ;
struct icm_fr_event_device_connected {scalar_t__ link_info; int connection_key; int connection_id; scalar_t__ ep_name; int ep_uuid; TYPE_1__ hdr; } ;
struct icm {int (* get_route ) (struct tb*,scalar_t__,scalar_t__,int *) ;} ;
typedef enum tb_security_level { ____Placeholder_tb_security_level } tb_security_level ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct tb_switch*,int ,int *,scalar_t__ const*,int,int ,int ,scalar_t__,scalar_t__,int,int,int) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int FUNC_2 (struct tb*) ;
 int FUNC_3 (struct tb_switch*) ;
 int FUNC_4 (struct tb_xdomain*) ;
 int FUNC_5 (struct tb*,scalar_t__,scalar_t__,int *) ;
 int FUNC_6 (struct tb*,scalar_t__,scalar_t__,int *) ;
 int FUNC_7 (struct tb*,char*,scalar_t__,scalar_t__) ;
 int FUNC_8 (struct tb*,char*,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_9 (scalar_t__) ;
 struct icm* FUNC_10 (struct tb*) ;
 int FUNC_11 (struct tb_switch*) ;
 struct tb_switch* FUNC_12 (struct tb*,scalar_t__,scalar_t__) ;
 struct tb_switch* FUNC_13 (struct tb*,int *) ;
 int FUNC_14 (struct tb_switch*) ;
 struct tb_switch* FUNC_15 (int ) ;
 struct tb_xdomain* FUNC_16 (struct tb*,scalar_t__,scalar_t__) ;
 int FUNC_17 (struct tb_xdomain*) ;
 int FUNC_18 (struct tb_switch*,struct tb_switch*,int ,int ,int ,scalar_t__,scalar_t__,int) ;

__attribute__((used)) static void
FUNC_19(struct tb *VAR_8, const struct icm_pkg_header *VAR_9)
{
 const struct icm_fr_event_device_connected *VAR_10 =
  (const struct icm_fr_event_device_connected *)VAR_9;
 enum tb_security_level VAR_11;
 struct tb_switch *VAR_12, *VAR_13;
 struct icm *VAR_14 = FUNC_10(VAR_8);
 bool VAR_15 = 0;
 struct tb_xdomain *VAR_16;
 u8 VAR_17, VAR_18;
 bool VAR_19;
 u64 VAR_20;
 int VAR_21;

 FUNC_2(VAR_8);

 VAR_17 = VAR_10->link_info & VAR_6;
 VAR_18 = (VAR_10->link_info & VAR_4) >>
  VAR_5;
 VAR_15 = VAR_10->link_info & VAR_2;
 VAR_11 = (VAR_10->hdr.flags & VAR_0) >>
    VAR_1;
 VAR_19 = VAR_10->link_info & VAR_3;

 if (VAR_10->link_info & VAR_7) {
  FUNC_8(VAR_8, "switch at %u.%u was rejected by ICM firmware because topology limit exceeded\n",
   VAR_17, VAR_18);
  return;
 }

 VAR_12 = FUNC_13(VAR_8, &VAR_10->ep_uuid);
 if (VAR_12) {
  u8 VAR_22, VAR_23;

  VAR_13 = FUNC_15(VAR_12->dev.parent);
  VAR_23 = FUNC_9(VAR_12->link);
  VAR_22 = FUNC_9(VAR_17);
  if (VAR_12->depth == VAR_18 && VAR_23 == VAR_22 &&
      !!VAR_12->authorized == VAR_15) {




   if (VAR_12->link != VAR_17) {
    VAR_21 = VAR_14->get_route(VAR_8, VAR_17, VAR_18, &VAR_20);
    if (VAR_21) {
     FUNC_7(VAR_8, "failed to update route string for switch at %u.%u\n",
            VAR_17, VAR_18);
     FUNC_14(VAR_12);
     return;
    }
   } else {
    VAR_20 = FUNC_11(VAR_12);
   }

   FUNC_18(VAR_13, VAR_12, VAR_20, VAR_10->connection_id,
          VAR_10->connection_key, VAR_17, VAR_18, VAR_19);
   FUNC_14(VAR_12);
   return;
  }






  FUNC_3(VAR_12);
  FUNC_14(VAR_12);
 }







 VAR_12 = FUNC_12(VAR_8, VAR_17, VAR_18);
 if (!VAR_12) {
  u8 VAR_24;

  VAR_24 = FUNC_1(VAR_17);
  if (VAR_24)
   VAR_12 = FUNC_12(VAR_8, VAR_24, VAR_18);
 }
 if (VAR_12) {
  FUNC_3(VAR_12);
  FUNC_14(VAR_12);
 }


 VAR_16 = FUNC_16(VAR_8, VAR_17, VAR_18);
 if (VAR_16) {
  FUNC_4(VAR_16);
  FUNC_17(VAR_16);
 }

 VAR_13 = FUNC_12(VAR_8, VAR_17, VAR_18 - 1);
 if (!VAR_13) {
  FUNC_7(VAR_8, "failed to find parent switch for %u.%u\n",
         VAR_17, VAR_18);
  return;
 }

 VAR_21 = VAR_14->get_route(VAR_8, VAR_17, VAR_18, &VAR_20);
 if (VAR_21) {
  FUNC_7(VAR_8, "failed to find route string for switch at %u.%u\n",
         VAR_17, VAR_18);
  FUNC_14(VAR_13);
  return;
 }

 FUNC_0(VAR_13, VAR_20, &VAR_10->ep_uuid, (const u8 *)VAR_10->ep_name,
     sizeof(VAR_10->ep_name), VAR_10->connection_id,
     VAR_10->connection_key, VAR_17, VAR_18, VAR_11,
     VAR_15, VAR_19);

 FUNC_14(VAR_13);
}
