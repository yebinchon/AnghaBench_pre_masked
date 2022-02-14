
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct tb_xdomain {int dummy; } ;
struct tb {int dummy; } ;
struct icm_tr_event_xdomain_disconnected {int route_lo; int route_hi; } ;
struct icm_pkg_header {int dummy; } ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (struct tb_xdomain*) ;
 struct tb_xdomain* FUNC_2 (struct tb*,int ) ;
 int FUNC_3 (struct tb_xdomain*) ;

__attribute__((used)) static void
FUNC_4(struct tb *VAR_0, const struct icm_pkg_header *VAR_1)
{
 const struct icm_tr_event_xdomain_disconnected *VAR_2 =
  (const struct icm_tr_event_xdomain_disconnected *)VAR_1;
 struct tb_xdomain *VAR_3;
 u64 VAR_4;

 VAR_4 = FUNC_0(VAR_2->route_hi, VAR_2->route_lo);

 VAR_3 = FUNC_2(VAR_0, VAR_4);
 if (VAR_3) {
  FUNC_1(VAR_3);
  FUNC_3(VAR_3);
 }
}
