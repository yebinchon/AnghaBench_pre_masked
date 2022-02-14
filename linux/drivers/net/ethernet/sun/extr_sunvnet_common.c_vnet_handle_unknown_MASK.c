
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int lp; } ;
struct vnet_port {TYPE_1__ vio; } ;
struct vio_msg_tag {int sid; int stype_env; int stype; int type; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (char*,...) ;

__attribute__((used)) static int FUNC_2(struct vnet_port *VAR_1, void *VAR_2)
{
 struct vio_msg_tag *VAR_3 = VAR_2;

 FUNC_1("Received unknown msg [%02x:%02x:%04x:%08x]\n",
        VAR_3->type, VAR_3->stype, VAR_3->stype_env, VAR_3->sid);
 FUNC_1("Resetting connection\n");

 FUNC_0(VAR_1->vio.lp);

 return -VAR_0;
}
