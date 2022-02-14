
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct vnet_port {int rmtu; scalar_t__ tsolen; scalar_t__ tso; } ;
struct TYPE_2__ {int sid; int stype_env; int stype; int type; } ;
struct vio_net_attr_info {int addr; int mtu; scalar_t__ ipv4_lso_maxlen; int cflags; int options; int plnk_updt; scalar_t__ ack_freq; int addr_type; int xfer_mode; TYPE_1__ tag; } ;
struct vio_driver_state {int dummy; } ;
struct net_device {scalar_t__* dev_addr; } ;
typedef int pkt ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 scalar_t__ VAR_13 ;
 struct net_device* FUNC_0 (struct vnet_port*) ;
 int FUNC_1 (struct vio_net_attr_info*,int ,int) ;
 int FUNC_2 (int,int) ;
 struct vnet_port* FUNC_3 (struct vio_driver_state*) ;
 int FUNC_4 (struct vio_driver_state*,struct vio_net_attr_info*,int) ;
 int FUNC_5 (struct vio_driver_state*) ;
 scalar_t__ FUNC_6 (struct vio_driver_state*,int,int) ;
 scalar_t__ FUNC_7 (struct vio_driver_state*,int,int) ;
 scalar_t__ FUNC_8 (struct vio_driver_state*,int,int) ;
 int FUNC_9 (int ,char*,int ,int ,unsigned long long,scalar_t__,int ,int ,unsigned long long,int ,scalar_t__) ;
 int FUNC_10 (struct vnet_port*) ;

int FUNC_11(struct vio_driver_state *VAR_14)
{
 struct vnet_port *VAR_15 = FUNC_3(VAR_14);
 struct net_device *VAR_16 = FUNC_0(VAR_15);
 struct vio_net_attr_info VAR_17;
 int VAR_18 = VAR_0;
 int VAR_19, VAR_20;

 VAR_20 = FUNC_10(FUNC_3(VAR_14));
 if (VAR_20)
  return VAR_20;

 FUNC_1(&VAR_17, 0, sizeof(VAR_17));
 VAR_17.tag.type = VAR_8;
 VAR_17.tag.stype = VAR_6;
 VAR_17.tag.stype_env = VAR_3;
 VAR_17.tag.sid = FUNC_5(VAR_14);
 if (FUNC_8(VAR_14, 1, 2))
  VAR_17.xfer_mode = VAR_4;
 else
  VAR_17.xfer_mode = VAR_5;
 VAR_17.addr_type = VAR_10;
 VAR_17.ack_freq = 0;
 for (VAR_19 = 0; VAR_19 < 6; VAR_19++)
  VAR_17.addr |= (u64)VAR_16->dev_addr[VAR_19] << ((5 - VAR_19) * 8);
 if (FUNC_6(VAR_14, 1, 3)) {
  if (VAR_15->rmtu) {
   VAR_15->rmtu = FUNC_2(VAR_12, VAR_15->rmtu);
   VAR_17.mtu = VAR_15->rmtu;
  } else {
   VAR_15->rmtu = VAR_12;
   VAR_17.mtu = VAR_15->rmtu;
  }
  if (FUNC_7(VAR_14, 1, 6))
   VAR_17.options = VAR_7;
 } else if (FUNC_8(VAR_14, 1, 3)) {
  VAR_17.mtu = VAR_18;
 } else {
  VAR_17.mtu = VAR_18 + VAR_9;
 }

 VAR_17.cflags = 0;
 if (FUNC_7(VAR_14, 1, 7) && VAR_15->tso) {
  VAR_17.cflags |= VAR_11;
  if (!VAR_15->tsolen)
   VAR_15->tsolen = VAR_13;
  VAR_17.ipv4_lso_maxlen = VAR_15->tsolen;
 }

 VAR_17.plnk_updt = VAR_2;

 FUNC_9(VAR_1, "SEND NET ATTR xmode[0x%x] atype[0x%x] addr[%llx] "
        "ackfreq[%u] plnk_updt[0x%02x] opts[0x%02x] mtu[%llu] "
        "cflags[0x%04x] lso_max[%u]\n",
        VAR_17.xfer_mode, VAR_17.addr_type,
        (unsigned long long)VAR_17.addr,
        VAR_17.ack_freq, VAR_17.plnk_updt, VAR_17.options,
        (unsigned long long)VAR_17.mtu, VAR_17.cflags, VAR_17.ipv4_lso_maxlen);

 return FUNC_4(VAR_14, &VAR_17, sizeof(VAR_17));
}
