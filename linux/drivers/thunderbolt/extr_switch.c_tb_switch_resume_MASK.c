
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ u64 ;
typedef int u32 ;
struct TYPE_6__ {int max_port_number; } ;
struct tb_switch {scalar_t__ uid; struct tb_port* ports; TYPE_2__ config; TYPE_1__* tb; } ;
struct tb_port {TYPE_4__* remote; TYPE_3__* xdomain; } ;
struct TYPE_8__ {struct tb_switch* sw; } ;
struct TYPE_7__ {int is_unplugged; } ;
struct TYPE_5__ {int ctl; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,scalar_t__) ;
 int FUNC_1 (struct tb_switch*,scalar_t__*) ;
 int FUNC_2 (struct tb_switch*) ;
 int FUNC_3 (struct tb_switch*,int) ;
 scalar_t__ FUNC_4 (struct tb_port*) ;
 int FUNC_5 (struct tb_port*,char*) ;
 scalar_t__ FUNC_6 (struct tb_switch*) ;
 int FUNC_7 (struct tb_switch*,char*) ;
 int FUNC_8 (struct tb_switch*,char*,...) ;
 int FUNC_9 (struct tb_switch*) ;
 int FUNC_10 (struct tb_switch*,char*) ;
 int FUNC_11 (struct tb_switch*,int *,int ,int,int) ;
 scalar_t__ FUNC_12 (struct tb_port*,int) ;

int FUNC_13(struct tb_switch *VAR_2)
{
 int VAR_3, VAR_4;
 FUNC_7(VAR_2, "resuming switch\n");





 if (FUNC_6(VAR_2)) {
  u64 VAR_5;






  VAR_4 = FUNC_0(VAR_2->tb->ctl, FUNC_6(VAR_2));
  if (VAR_4 < 0) {
   FUNC_8(VAR_2, "switch not present anymore\n");
   return VAR_4;
  }

  VAR_4 = FUNC_1(VAR_2, &VAR_5);
  if (VAR_4) {
   FUNC_10(VAR_2, "uid read failed\n");
   return VAR_4;
  }
  if (VAR_2->uid != VAR_5) {
   FUNC_8(VAR_2,
    "changed while suspended (uid %#llx -> %#llx)\n",
    VAR_2->uid, VAR_5);
   return -VAR_0;
  }
 }


 VAR_4 = FUNC_11(VAR_2, 1 + (u32 *) &VAR_2->config, VAR_1, 1, 3);
 if (VAR_4)
  return VAR_4;

 VAR_4 = FUNC_2(VAR_2);
 if (VAR_4)
  return VAR_4;

 VAR_4 = FUNC_3(VAR_2, 1);
 if (VAR_4)
  return VAR_4;


 for (VAR_3 = 1; VAR_3 <= VAR_2->config.max_port_number; VAR_3++) {
  struct tb_port *VAR_6 = &VAR_2->ports[VAR_3];

  if (!FUNC_4(VAR_6) && !VAR_6->xdomain)
   continue;

  if (FUNC_12(VAR_6, 1) <= 0) {
   FUNC_5(VAR_6,
         "lost during suspend, disconnecting\n");
   if (FUNC_4(VAR_6))
    FUNC_9(VAR_6->remote->sw);
   else if (VAR_6->xdomain)
    VAR_6->xdomain->is_unplugged = 1;
  } else if (FUNC_4(VAR_6)) {
   if (FUNC_13(VAR_6->remote->sw)) {
    FUNC_5(VAR_6,
          "lost during suspend, disconnecting\n");
    FUNC_9(VAR_6->remote->sw);
   }
  }
 }
 return 0;
}
