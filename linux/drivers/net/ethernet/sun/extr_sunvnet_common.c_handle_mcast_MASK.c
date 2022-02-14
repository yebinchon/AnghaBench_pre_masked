
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vnet_port {int dummy; } ;
struct TYPE_2__ {scalar_t__ stype; int sid; int stype_env; int type; } ;
struct vio_net_mcast_info {TYPE_1__ tag; } ;
struct net_device {int name; } ;


 scalar_t__ VAR_0 ;
 struct net_device* FUNC_0 (struct vnet_port*) ;
 int FUNC_1 (char*,int ,int ,scalar_t__,int ,int ) ;

__attribute__((used)) static int FUNC_2(struct vnet_port *VAR_1, void *VAR_2)
{
 struct vio_net_mcast_info *VAR_3 = VAR_2;
 struct net_device *VAR_4 = FUNC_0(VAR_1);

 if (VAR_3->tag.stype != VAR_0)
  FUNC_1("%s: Got unexpected MCAST reply [%02x:%02x:%04x:%08x]\n",
         VAR_4->name,
         VAR_3->tag.type,
         VAR_3->tag.stype,
         VAR_3->tag.stype_env,
         VAR_3->tag.sid);

 return 0;
}
