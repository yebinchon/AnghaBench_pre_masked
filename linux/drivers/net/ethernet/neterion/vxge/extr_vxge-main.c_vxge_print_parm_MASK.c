
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int u64 ;
struct TYPE_7__ {int intr_type; int tx_steering_type; scalar_t__ addr_learn_en; scalar_t__ rth_steering; } ;
struct vxgedev {char* no_of_vpath; TYPE_6__* devh; TYPE_2__* ndev; TYPE_1__ config; } ;
struct TYPE_11__ {TYPE_4__* vp_config; } ;
struct TYPE_12__ {TYPE_5__ config; } ;
struct TYPE_9__ {int max_frags; } ;
struct TYPE_10__ {TYPE_3__ fifo; scalar_t__ rpa_strip_vlan_tag; int mtu; } ;
struct TYPE_8__ {int name; } ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int,int) ;
 int FUNC_1 (int ,char*,int ,...) ;
 int FUNC_2 (int ,char*,int ,int ) ;

__attribute__((used)) static void FUNC_3(struct vxgedev *VAR_3, u64 VAR_4)
{
 int VAR_5;

 FUNC_1(VAR_2,
  "%s: %d Vpath(s) opened",
  VAR_3->ndev->name, VAR_3->no_of_vpath);

 switch (VAR_3->config.intr_type) {
 case 134:
  FUNC_1(VAR_2,
   "%s: Interrupt type INTA", VAR_3->ndev->name);
  break;

 case 133:
  FUNC_1(VAR_2,
   "%s: Interrupt type MSI-X", VAR_3->ndev->name);
  break;
 }

 if (VAR_3->config.rth_steering) {
  FUNC_1(VAR_2,
   "%s: RTH steering enabled for TCP_IPV4",
   VAR_3->ndev->name);
 } else {
  FUNC_1(VAR_2,
   "%s: RTH steering disabled", VAR_3->ndev->name);
 }

 switch (VAR_3->config.tx_steering_type) {
 case 132:
  FUNC_1(VAR_2,
   "%s: Tx steering disabled", VAR_3->ndev->name);
  break;
 case 129:
  FUNC_1(VAR_2,
   "%s: Unsupported tx steering option",
   VAR_3->ndev->name);
  FUNC_1(VAR_2,
   "%s: Tx steering disabled", VAR_3->ndev->name);
  VAR_3->config.tx_steering_type = 0;
  break;
 case 128:
  FUNC_1(VAR_2,
   "%s: Unsupported tx steering option",
   VAR_3->ndev->name);
  FUNC_1(VAR_2,
   "%s: Tx steering disabled", VAR_3->ndev->name);
  VAR_3->config.tx_steering_type = 0;
  break;
 case 131:
  FUNC_1(VAR_2,
   "%s: Tx multiqueue steering enabled",
   VAR_3->ndev->name);
  break;
 case 130:
  FUNC_1(VAR_2,
   "%s: Tx port steering enabled",
   VAR_3->ndev->name);
  break;
 default:
  FUNC_1(VAR_0,
   "%s: Unsupported tx steering type",
   VAR_3->ndev->name);
  FUNC_1(VAR_2,
   "%s: Tx steering disabled", VAR_3->ndev->name);
  VAR_3->config.tx_steering_type = 0;
 }

 if (VAR_3->config.addr_learn_en)
  FUNC_1(VAR_2,
   "%s: MAC Address learning enabled", VAR_3->ndev->name);

 for (VAR_5 = 0; VAR_5 < VAR_1; VAR_5++) {
  if (!FUNC_0(VAR_4, VAR_5, 1))
   continue;
  FUNC_2(VAR_2,
   "%s: MTU size - %d", VAR_3->ndev->name,
   ((VAR_3->devh))->
    config.vp_config[VAR_5].mtu);
  FUNC_1(VAR_2,
   "%s: VLAN tag stripping %s", VAR_3->ndev->name,
   ((VAR_3->devh))->
    config.vp_config[VAR_5].rpa_strip_vlan_tag
   ? "Enabled" : "Disabled");
  FUNC_2(VAR_2,
   "%s: Max frags : %d", VAR_3->ndev->name,
   ((VAR_3->devh))->
    config.vp_config[VAR_5].fifo.max_frags);
  break;
 }
}
