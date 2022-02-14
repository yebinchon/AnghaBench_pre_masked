
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tb_xdomain {int dummy; } ;
struct tb {int dummy; } ;
struct icm_pkg_header {int dummy; } ;
struct icm_fr_event_xdomain_disconnected {int remote_uuid; } ;


 int FUNC_0 (struct tb_xdomain*) ;
 struct tb_xdomain* FUNC_1 (struct tb*,int *) ;
 int FUNC_2 (struct tb_xdomain*) ;

__attribute__((used)) static void
FUNC_3(struct tb *VAR_0, const struct icm_pkg_header *VAR_1)
{
 const struct icm_fr_event_xdomain_disconnected *VAR_2 =
  (const struct icm_fr_event_xdomain_disconnected *)VAR_1;
 struct tb_xdomain *VAR_3;






 VAR_3 = FUNC_1(VAR_0, &VAR_2->remote_uuid);
 if (VAR_3) {
  FUNC_0(VAR_3);
  FUNC_2(VAR_3);
 }
}
