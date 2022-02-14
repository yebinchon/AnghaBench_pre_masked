
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct vio_driver_state {int _peer_sid; int _local_sid; } ;
struct vnet_port {struct vio_driver_state vio; } ;
struct TYPE_4__ {scalar_t__ state; int ack; } ;
struct vio_net_desc {TYPE_2__ hdr; TYPE_1__* cookies; int ncookies; int size; } ;
struct vio_dring_state {int dummy; } ;
struct TYPE_3__ {int cookie_size; int cookie_addr; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (struct vio_net_desc*) ;
 int FUNC_2 (struct vio_net_desc*) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_3 () ;
 struct vio_net_desc* FUNC_4 (struct vnet_port*,struct vio_dring_state*,int ) ;
 int FUNC_5 (struct vnet_port*,struct vio_dring_state*,struct vio_net_desc*,int ) ;
 int FUNC_6 (int ,int ,int ,int) ;
 int FUNC_7 (int ,char*,scalar_t__,int,int ,int ,int ,int ) ;
 int FUNC_8 (struct vnet_port*,struct vio_net_desc*) ;

__attribute__((used)) static int FUNC_9(struct vnet_port *VAR_4,
       struct vio_dring_state *VAR_5,
       u32 VAR_6, int *VAR_7)
{
 struct vio_net_desc *VAR_8 = FUNC_4(VAR_4, VAR_5, VAR_6);
 struct vio_driver_state *VAR_9 = &VAR_4->vio;
 int VAR_10;

 FUNC_0(!VAR_8);
 if (FUNC_1(VAR_8))
  return FUNC_2(VAR_8);

 if (VAR_8->hdr.state != VAR_3)
  return 1;

 FUNC_3();

 FUNC_7(VAR_0, "vio_walk_rx_one desc[%02x:%02x:%08x:%08x:%llx:%llx]\n",
        VAR_8->hdr.state, VAR_8->hdr.ack,
        VAR_8->size, VAR_8->ncookies,
        VAR_8->cookies[0].cookie_addr,
        VAR_8->cookies[0].cookie_size);

 VAR_10 = FUNC_8(VAR_4, VAR_8);
 if (VAR_10 == -VAR_1)
  return VAR_10;
 FUNC_6(VAR_4->vio._local_sid, VAR_4->vio._peer_sid,
     VAR_6, VAR_8->hdr.ack);
 VAR_8->hdr.state = VAR_2;
 VAR_10 = FUNC_5(VAR_4, VAR_5, VAR_8, VAR_6);
 if (VAR_10 < 0)
  return VAR_10;
 *VAR_7 = VAR_8->hdr.ack;
 return 0;
}
