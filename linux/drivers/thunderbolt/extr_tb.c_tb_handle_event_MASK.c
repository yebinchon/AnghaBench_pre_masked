
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct tb {int ctl; } ;
struct cfg_event_pkg {int unplug; int port; int header; } ;
typedef enum tb_cfg_pkg_type { ____Placeholder_tb_cfg_pkg_type } tb_cfg_pkg_type ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ,int ,int ,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct tb*,int ,int ,int ) ;
 int FUNC_3 (struct tb*,char*,int,...) ;

__attribute__((used)) static void FUNC_4(struct tb *VAR_2, enum tb_cfg_pkg_type VAR_3,
       const void *VAR_4, size_t VAR_5)
{
 const struct cfg_event_pkg *VAR_6 = VAR_4;
 u64 VAR_7;

 if (VAR_3 != VAR_1) {
  FUNC_3(VAR_2, "unexpected event %#x, ignoring\n", VAR_3);
  return;
 }

 VAR_7 = FUNC_1(&VAR_6->header);

 if (FUNC_0(VAR_2->ctl, VAR_7, VAR_6->port,
    VAR_0)) {
  FUNC_3(VAR_2, "could not ack plug event on %llx:%x\n", VAR_7,
   VAR_6->port);
 }

 FUNC_2(VAR_2, VAR_7, VAR_6->port, VAR_6->unplug);
}
