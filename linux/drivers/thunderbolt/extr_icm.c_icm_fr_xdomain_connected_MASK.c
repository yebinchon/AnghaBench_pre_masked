
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef int u64 ;
struct tb_xdomain {scalar_t__ depth; int route; } ;
struct tb_switch {int dummy; } ;
struct tb {int dummy; } ;
struct icm_pkg_header {int dummy; } ;
struct icm_fr_event_xdomain_connected {scalar_t__ link_info; int remote_uuid; int local_uuid; int local_route_lo; int local_route_hi; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (struct tb_switch*,int ,int *,int *,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int FUNC_2 (int ,int ) ;
 scalar_t__ FUNC_3 (int ,scalar_t__) ;
 int FUNC_4 (struct tb_switch*) ;
 int FUNC_5 (struct tb_xdomain*) ;
 struct tb_switch* FUNC_6 (struct tb*,scalar_t__,scalar_t__) ;
 struct tb_switch* FUNC_7 (struct tb*,int ) ;
 int FUNC_8 (struct tb_switch*) ;
 int FUNC_9 (struct tb*,char*,scalar_t__,scalar_t__) ;
 struct tb_xdomain* FUNC_10 (struct tb*,scalar_t__,scalar_t__) ;
 struct tb_xdomain* FUNC_11 (struct tb*,int *) ;
 int FUNC_12 (struct tb_xdomain*) ;
 int FUNC_13 (struct tb_xdomain*,int ,scalar_t__) ;

__attribute__((used)) static void
FUNC_14(struct tb *VAR_5, const struct icm_pkg_header *VAR_6)
{
 const struct icm_fr_event_xdomain_connected *VAR_7 =
  (const struct icm_fr_event_xdomain_connected *)VAR_6;
 struct tb_xdomain *VAR_8;
 struct tb_switch *VAR_9;
 u8 VAR_10, VAR_11;
 u64 VAR_12;

 VAR_10 = VAR_7->link_info & VAR_2;
 VAR_11 = (VAR_7->link_info & VAR_0) >>
  VAR_1;

 if (VAR_10 > VAR_3 || VAR_11 > VAR_4) {
  FUNC_9(VAR_5, "invalid topology %u.%u, ignoring\n", VAR_10, VAR_11);
  return;
 }

 VAR_12 = FUNC_2(VAR_7->local_route_hi, VAR_7->local_route_lo);

 VAR_8 = FUNC_11(VAR_5, &VAR_7->remote_uuid);
 if (VAR_8) {
  u8 VAR_13, VAR_14;

  VAR_13 = FUNC_3(VAR_8->route, VAR_8->depth);
  VAR_14 = FUNC_3(VAR_12, VAR_11);

  if (VAR_8->depth == VAR_11 && VAR_13 == VAR_14) {
   FUNC_13(VAR_8, VAR_12, VAR_10);
   FUNC_12(VAR_8);
   return;
  }







  FUNC_5(VAR_8);
  FUNC_12(VAR_8);
 }






 VAR_8 = FUNC_10(VAR_5, VAR_10, VAR_11);
 if (!VAR_8) {
  u8 VAR_15;

  VAR_15 = FUNC_1(VAR_10);
  if (VAR_15)
   VAR_8 = FUNC_10(VAR_5, VAR_15,
          VAR_11);
 }
 if (VAR_8) {
  FUNC_5(VAR_8);
  FUNC_12(VAR_8);
 }






 VAR_9 = FUNC_7(VAR_5, VAR_12);
 if (VAR_9) {
  FUNC_4(VAR_9);
  FUNC_8(VAR_9);
 }

 VAR_9 = FUNC_6(VAR_5, VAR_10, VAR_11);
 if (!VAR_9) {
  FUNC_9(VAR_5, "no switch exists at %u.%u, ignoring\n", VAR_10,
   VAR_11);
  return;
 }

 FUNC_0(VAR_9, VAR_12, &VAR_7->local_uuid, &VAR_7->remote_uuid, VAR_10,
      VAR_11);
 FUNC_8(VAR_9);
}
