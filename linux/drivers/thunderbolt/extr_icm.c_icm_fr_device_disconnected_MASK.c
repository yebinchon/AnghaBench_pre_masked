
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct tb_switch {int dummy; } ;
struct tb {int dummy; } ;
struct icm_pkg_header {int dummy; } ;
struct icm_fr_event_device_disconnected {int link_info; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct tb_switch*) ;
 struct tb_switch* FUNC_1 (struct tb*,int,int) ;
 int FUNC_2 (struct tb_switch*) ;
 int FUNC_3 (struct tb*,char*,int,int) ;

__attribute__((used)) static void
FUNC_4(struct tb *VAR_5, const struct icm_pkg_header *VAR_6)
{
 const struct icm_fr_event_device_disconnected *VAR_7 =
  (const struct icm_fr_event_device_disconnected *)VAR_6;
 struct tb_switch *VAR_8;
 u8 VAR_9, VAR_10;

 VAR_9 = VAR_7->link_info & VAR_2;
 VAR_10 = (VAR_7->link_info & VAR_0) >>
  VAR_1;

 if (VAR_9 > VAR_3 || VAR_10 > VAR_4) {
  FUNC_3(VAR_5, "invalid topology %u.%u, ignoring\n", VAR_9, VAR_10);
  return;
 }

 VAR_8 = FUNC_1(VAR_5, VAR_9, VAR_10);
 if (!VAR_8) {
  FUNC_3(VAR_5, "no switch exists at %u.%u, ignoring\n", VAR_9,
   VAR_10);
  return;
 }

 FUNC_0(VAR_8);
 FUNC_2(VAR_8);
}
