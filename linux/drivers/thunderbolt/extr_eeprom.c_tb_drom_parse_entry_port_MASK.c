
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {size_t max_port_number; } ;
struct tb_switch {struct tb_port* ports; int dev; TYPE_1__ config; } ;
struct tb_port {TYPE_2__* sw; int * dual_link_port; int link_nr; scalar_t__ disabled; } ;
struct tb_drom_entry_port {size_t dual_link_port_nr; scalar_t__ has_dual_link_port; int link_nr; } ;
struct tb_drom_entry_header {size_t index; int len; scalar_t__ port_disabled; } ;
typedef enum tb_port_type { ____Placeholder_tb_port_type } tb_port_type ;
struct TYPE_4__ {int * ports; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (struct tb_port*,int*,int ,int,int) ;
 int FUNC_2 (struct tb_switch*,char*,int,int) ;

__attribute__((used)) static int FUNC_3(struct tb_switch *VAR_3,
        struct tb_drom_entry_header *VAR_4)
{
 struct tb_port *VAR_5;
 int VAR_6;
 enum tb_port_type VAR_7;





 if (VAR_4->index > VAR_3->config.max_port_number) {
  FUNC_0(&VAR_3->dev, "ignoring unnecessary extra entries in DROM\n");
  return 0;
 }

 VAR_5 = &VAR_3->ports[VAR_4->index];
 VAR_5->disabled = VAR_4->port_disabled;
 if (VAR_5->disabled)
  return 0;

 VAR_6 = FUNC_1(VAR_5, &VAR_7, VAR_1, 2, 1);
 if (VAR_6)
  return VAR_6;
 VAR_7 &= 0xffffff;

 if (VAR_7 == VAR_2) {
  struct tb_drom_entry_port *VAR_8 = (void *) VAR_4;
  if (VAR_4->len != sizeof(*VAR_8)) {
   FUNC_2(VAR_3,
    "port entry has size %#x (expected %#zx)\n",
    VAR_4->len, sizeof(struct tb_drom_entry_port));
   return -VAR_0;
  }
  VAR_5->link_nr = VAR_8->link_nr;
  if (VAR_8->has_dual_link_port)
   VAR_5->dual_link_port =
    &VAR_5->sw->ports[VAR_8->dual_link_port_nr];
 }
 return 0;
}
