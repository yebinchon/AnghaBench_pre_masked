
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef scalar_t__ u64 ;
struct tb_xdomain {int dummy; } ;
struct TYPE_4__ {int parent; } ;
struct tb_switch {int rpm; TYPE_2__ dev; int authorized; } ;
struct tb {int dummy; } ;
struct TYPE_3__ {int flags; scalar_t__ packet_id; } ;
struct icm_tr_event_device_connected {int link_info; int connection_id; scalar_t__ ep_name; int ep_uuid; TYPE_1__ hdr; int route_lo; int route_hi; } ;
struct icm_pkg_header {int dummy; } ;
typedef enum tb_security_level { ____Placeholder_tb_security_level } tb_security_level ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct tb_switch*) ;
 struct tb_switch* FUNC_1 (struct tb_switch*,scalar_t__,int *,int const*,int,int ,int ,int ,int ,int,int,int) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (int ,int ) ;
 int FUNC_4 (struct tb*) ;
 int FUNC_5 (struct tb_switch*) ;
 int FUNC_6 (struct tb_xdomain*) ;
 int FUNC_7 (struct tb*,char*,scalar_t__) ;
 int FUNC_8 (struct tb*,char*,scalar_t__) ;
 scalar_t__ FUNC_9 (struct tb_switch*) ;
 struct tb_switch* FUNC_10 (struct tb*,scalar_t__) ;
 struct tb_switch* FUNC_11 (struct tb*,int *) ;
 int FUNC_12 (struct tb_switch*) ;
 struct tb_switch* FUNC_13 (int ) ;
 struct tb_xdomain* FUNC_14 (struct tb*,scalar_t__) ;
 int FUNC_15 (struct tb_xdomain*) ;
 int FUNC_16 (struct tb_switch*,struct tb_switch*,scalar_t__,int ,int ,int ,int ,int) ;

__attribute__((used)) static void
FUNC_17(struct tb *VAR_5, const struct icm_pkg_header *VAR_6,
     bool VAR_7)
{
 const struct icm_tr_event_device_connected *VAR_8 =
  (const struct icm_tr_event_device_connected *)VAR_6;
 enum tb_security_level VAR_9;
 struct tb_switch *VAR_10, *VAR_11;
 struct tb_xdomain *VAR_12;
 bool VAR_13, VAR_14;
 u64 VAR_15;

 FUNC_4(VAR_5);






 if (VAR_8->hdr.packet_id)
  return;

 VAR_15 = FUNC_3(VAR_8->route_hi, VAR_8->route_lo);
 VAR_13 = VAR_8->link_info & VAR_2;
 VAR_9 = (VAR_8->hdr.flags & VAR_0) >>
    VAR_1;
 VAR_14 = VAR_8->link_info & VAR_3;

 if (VAR_8->link_info & VAR_4) {
  FUNC_8(VAR_5, "switch at %llx was rejected by ICM firmware because topology limit exceeded\n",
   VAR_15);
  return;
 }

 VAR_10 = FUNC_11(VAR_5, &VAR_8->ep_uuid);
 if (VAR_10) {

  if (FUNC_9(VAR_10) == VAR_15 && !!VAR_10->authorized == VAR_13) {
   VAR_11 = FUNC_13(VAR_10->dev.parent);
   FUNC_16(VAR_11, VAR_10, VAR_15, VAR_8->connection_id,
          0, 0, 0, VAR_14);
   FUNC_12(VAR_10);
   return;
  }

  FUNC_5(VAR_10);
  FUNC_12(VAR_10);
 }


 VAR_10 = FUNC_10(VAR_5, VAR_15);
 if (VAR_10) {
  FUNC_5(VAR_10);
  FUNC_12(VAR_10);
 }


 VAR_12 = FUNC_14(VAR_5, VAR_15);
 if (VAR_12) {
  FUNC_6(VAR_12);
  FUNC_15(VAR_12);
 }

 VAR_11 = FUNC_10(VAR_5, FUNC_2(VAR_15));
 if (!VAR_11) {
  FUNC_7(VAR_5, "failed to find parent switch for %llx\n", VAR_15);
  return;
 }

 VAR_10 = FUNC_1(VAR_11, VAR_15, &VAR_8->ep_uuid, (const u8 *)VAR_8->ep_name,
   sizeof(VAR_8->ep_name), VAR_8->connection_id, 0, 0, 0,
   VAR_9, VAR_13, VAR_14);
 if (!FUNC_0(VAR_10) && VAR_7)
  VAR_10->rpm = 1;

 FUNC_12(VAR_11);
}
