
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct tb_xdomain {scalar_t__ route; } ;
struct tb_switch {int dummy; } ;
struct tb {int root_switch; } ;
struct icm_tr_event_xdomain_connected {int remote_uuid; int local_uuid; int local_route_lo; int local_route_hi; } ;
struct icm_pkg_header {int dummy; } ;


 int FUNC_0 (struct tb_switch*,scalar_t__,int *,int *,int ,int ) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (int ,int ) ;
 int FUNC_3 (struct tb_switch*) ;
 int FUNC_4 (struct tb_xdomain*) ;
 struct tb_switch* FUNC_5 (struct tb*,scalar_t__) ;
 int FUNC_6 (struct tb_switch*) ;
 int FUNC_7 (struct tb*,char*,scalar_t__) ;
 struct tb_xdomain* FUNC_8 (struct tb*,scalar_t__) ;
 struct tb_xdomain* FUNC_9 (struct tb*,int *) ;
 int FUNC_10 (struct tb_xdomain*) ;
 int FUNC_11 (struct tb_xdomain*,scalar_t__,int ) ;

__attribute__((used)) static void
FUNC_12(struct tb *VAR_0, const struct icm_pkg_header *VAR_1)
{
 const struct icm_tr_event_xdomain_connected *VAR_2 =
  (const struct icm_tr_event_xdomain_connected *)VAR_1;
 struct tb_xdomain *VAR_3;
 struct tb_switch *VAR_4;
 u64 VAR_5;

 if (!VAR_0->root_switch)
  return;

 VAR_5 = FUNC_2(VAR_2->local_route_hi, VAR_2->local_route_lo);

 VAR_3 = FUNC_9(VAR_0, &VAR_2->remote_uuid);
 if (VAR_3) {
  if (VAR_3->route == VAR_5) {
   FUNC_11(VAR_3, VAR_5, 0);
   FUNC_10(VAR_3);
   return;
  }

  FUNC_4(VAR_3);
  FUNC_10(VAR_3);
 }


 VAR_3 = FUNC_8(VAR_0, VAR_5);
 if (VAR_3) {
  FUNC_4(VAR_3);
  FUNC_10(VAR_3);
 }






 VAR_4 = FUNC_5(VAR_0, VAR_5);
 if (VAR_4) {
  FUNC_3(VAR_4);
  FUNC_6(VAR_4);
 }

 VAR_4 = FUNC_5(VAR_0, FUNC_1(VAR_5));
 if (!VAR_4) {
  FUNC_7(VAR_0, "no switch exists at %llx, ignoring\n", VAR_5);
  return;
 }

 FUNC_0(VAR_4, VAR_5, &VAR_2->local_uuid, &VAR_2->remote_uuid, 0, 0);
 FUNC_6(VAR_4);
}
