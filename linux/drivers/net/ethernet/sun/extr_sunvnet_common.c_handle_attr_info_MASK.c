
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef scalar_t__ u64 ;
struct vnet_port {scalar_t__ rmtu; int tso; scalar_t__ tsolen; } ;
struct TYPE_2__ {int stype; int sid; } ;
struct vio_net_attr_info {int xfer_mode; scalar_t__ addr_type; scalar_t__ mtu; int cflags; scalar_t__ ipv4_lso_maxlen; TYPE_1__ tag; int options; int plnk_updt; int ack_freq; scalar_t__ addr; } ;
struct vio_driver_state {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ FUNC_0 (scalar_t__,scalar_t__) ;
 struct vnet_port* FUNC_1 (struct vio_driver_state*) ;
 int FUNC_2 (struct vio_driver_state*,struct vio_net_attr_info*,int) ;
 int FUNC_3 (struct vio_driver_state*) ;
 scalar_t__ FUNC_4 (struct vio_driver_state*,int,int) ;
 scalar_t__ FUNC_5 (struct vio_driver_state*,int,int) ;
 scalar_t__ FUNC_6 (struct vio_driver_state*,int,int) ;
 int FUNC_7 (int ,char*,...) ;

__attribute__((used)) static int FUNC_8(struct vio_driver_state *VAR_14,
       struct vio_net_attr_info *VAR_15)
{
 struct vnet_port *VAR_16 = FUNC_1(VAR_14);
 u64 VAR_17;
 u8 VAR_18;

 FUNC_7(VAR_2, "GOT NET ATTR xmode[0x%x] atype[0x%x] addr[%llx] "
        "ackfreq[%u] plnk_updt[0x%02x] opts[0x%02x] mtu[%llu] "
        " (rmtu[%llu]) cflags[0x%04x] lso_max[%u]\n",
        VAR_15->xfer_mode, VAR_15->addr_type,
        (unsigned long long)VAR_15->addr,
        VAR_15->ack_freq, VAR_15->plnk_updt, VAR_15->options,
        (unsigned long long)VAR_15->mtu, VAR_16->rmtu, VAR_15->cflags,
        VAR_15->ipv4_lso_maxlen);

 VAR_15->tag.sid = FUNC_3(VAR_14);

 VAR_18 = VAR_15->xfer_mode;

 if (FUNC_6(VAR_14, 1, 2) && VAR_18 == VAR_3)
  VAR_18 = VAR_4;







 if (FUNC_6(VAR_14, 1, 3)) {
  VAR_17 = VAR_1;
 } else if (FUNC_4(VAR_14, 1, 3)) {
  VAR_17 = VAR_16->rmtu ? VAR_16->rmtu : VAR_11;
  VAR_17 = FUNC_0(VAR_15->mtu, VAR_17);
  VAR_15->mtu = VAR_17;
 } else {
  VAR_17 = VAR_1 + VAR_8;
 }
 VAR_16->rmtu = VAR_17;


 if (FUNC_5(VAR_14, 1, 7))
  VAR_16->tso &= !!(VAR_15->cflags & VAR_10);
 else
  VAR_16->tso = 0;
 if (VAR_16->tso) {
  if (!VAR_16->tsolen)
   VAR_16->tsolen = VAR_12;
  VAR_16->tsolen = FUNC_0(VAR_16->tsolen, VAR_15->ipv4_lso_maxlen);
  if (VAR_16->tsolen < VAR_13) {
   VAR_16->tso = 0;
   VAR_16->tsolen = 0;
   VAR_15->cflags &= ~VAR_10;
  }
  VAR_15->ipv4_lso_maxlen = VAR_16->tsolen;
 } else {
  VAR_15->cflags &= ~VAR_10;
  VAR_15->ipv4_lso_maxlen = 0;
  VAR_16->tsolen = 0;
 }


 if (FUNC_5(VAR_14, 1, 6)) {
  VAR_15->xfer_mode = VAR_4;
  VAR_15->options = VAR_7;
 }

 if (!(VAR_18 | VAR_4) ||
     VAR_15->addr_type != VAR_9 ||
     VAR_15->mtu != VAR_17) {
  FUNC_7(VAR_2, "SEND NET ATTR NACK\n");

  VAR_15->tag.stype = VAR_6;

  (void)FUNC_2(VAR_14, VAR_15, sizeof(*VAR_15));

  return -VAR_0;
 }

 FUNC_7(VAR_2, "SEND NET ATTR ACK xmode[0x%x] atype[0x%x] "
        "addr[%llx] ackfreq[%u] plnk_updt[0x%02x] opts[0x%02x] "
        "mtu[%llu] (rmtu[%llu]) cflags[0x%04x] lso_max[%u]\n",
        VAR_15->xfer_mode, VAR_15->addr_type,
        (unsigned long long)VAR_15->addr,
        VAR_15->ack_freq, VAR_15->plnk_updt, VAR_15->options,
        (unsigned long long)VAR_15->mtu, VAR_16->rmtu, VAR_15->cflags,
        VAR_15->ipv4_lso_maxlen);

 VAR_15->tag.stype = VAR_5;

 return FUNC_2(VAR_14, VAR_15, sizeof(*VAR_15));
}
