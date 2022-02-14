
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_5__ {int _peer_sid; int _local_sid; struct vio_dring_state* drings; } ;
struct vnet_port {int start_cons; int q_index; TYPE_2__ vio; } ;
struct TYPE_6__ {scalar_t__ state; } ;
struct vio_net_desc {TYPE_3__ hdr; } ;
struct vio_dring_state {int cons; } ;
struct TYPE_4__ {scalar_t__ stype_env; } ;
struct vio_dring_data {int end_idx; TYPE_1__ tag; } ;
struct netdev_queue {int dummy; } ;
struct net_device {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 size_t VAR_2 ;
 struct net_device* FUNC_0 (struct vnet_port*) ;
 scalar_t__ FUNC_1 (struct vio_dring_state*) ;
 scalar_t__ FUNC_2 (struct vnet_port*,int ) ;
 int FUNC_3 (struct vio_dring_state*,int ) ;
 struct netdev_queue* FUNC_4 (struct net_device*,int ) ;
 int FUNC_5 (struct net_device*) ;
 scalar_t__ FUNC_6 (struct netdev_queue*) ;
 int FUNC_7 (struct net_device*) ;
 int FUNC_8 (int ,int ,int ) ;
 scalar_t__ FUNC_9 (int) ;
 struct vio_net_desc* FUNC_10 (struct vio_dring_state*,int ) ;
 int FUNC_11 (struct vio_dring_state*,int ) ;
 scalar_t__ FUNC_12 (struct vio_dring_state*) ;

__attribute__((used)) static int FUNC_13(struct vnet_port *VAR_3, void *VAR_4)
{
 struct vio_dring_state *VAR_5 = &VAR_3->vio.drings[VAR_2];
 struct vio_dring_data *VAR_6 = VAR_4;
 struct net_device *VAR_7;
 u32 VAR_8;
 struct vio_net_desc *VAR_9;
 struct netdev_queue *VAR_10;

 if (FUNC_9(VAR_6->tag.stype_env != VAR_1))
  return 0;

 VAR_8 = VAR_6->end_idx;
 VAR_7 = FUNC_0(VAR_3);
 FUNC_5(VAR_7);
 if (FUNC_9(!FUNC_3(VAR_5, VAR_8))) {
  FUNC_7(VAR_7);
  return 0;
 }




 FUNC_8(VAR_3->vio._local_sid,
      VAR_3->vio._peer_sid, VAR_8);
 VAR_5->cons = FUNC_11(VAR_5, VAR_8);
 VAR_9 = FUNC_10(VAR_5, VAR_5->cons);
 if (VAR_9->hdr.state == VAR_0 && !VAR_3->start_cons) {




  if (FUNC_2(VAR_3, VAR_5->cons) > 0)
   VAR_3->start_cons = 0;
  else
   VAR_3->start_cons = 1;
 } else {
  VAR_3->start_cons = 1;
 }
 FUNC_7(VAR_7);

 VAR_10 = FUNC_4(VAR_7, VAR_3->q_index);
 if (FUNC_9(FUNC_6(VAR_10) &&
       FUNC_12(VAR_5) >= FUNC_1(VAR_5)))
  return 1;

 return 0;
}
