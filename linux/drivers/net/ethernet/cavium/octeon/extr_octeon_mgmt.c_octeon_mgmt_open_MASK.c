
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_9__ ;
typedef struct TYPE_21__ TYPE_8__ ;
typedef struct TYPE_20__ TYPE_7__ ;
typedef struct TYPE_19__ TYPE_6__ ;
typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;
typedef struct TYPE_13__ TYPE_11__ ;
typedef struct TYPE_12__ TYPE_10__ ;


struct TYPE_16__ {int obase; void* osize; } ;
union cvmx_mixx_oring1 {int u64; TYPE_3__ s; } ;
struct TYPE_21__ {scalar_t__ orhwm; } ;
union cvmx_mixx_orhwm {int u64; TYPE_8__ s; } ;
struct TYPE_17__ {int ibase; void* isize; } ;
union cvmx_mixx_iring1 {int u64; TYPE_4__ s; } ;
struct TYPE_20__ {scalar_t__ irhwm; } ;
union cvmx_mixx_irhwm {int u64; TYPE_7__ s; } ;
struct TYPE_22__ {int ithena; int othena; } ;
union cvmx_mixx_intena {int u64; TYPE_9__ s; } ;
struct TYPE_18__ {int crc_strip; int en; int mrq_hwm; int lendian; scalar_t__ nbtarb; scalar_t__ reset; } ;
union cvmx_mixx_ctl {int u64; TYPE_5__ s; } ;
struct TYPE_19__ {int mode; int enable; int comp; scalar_t__ drv_byp; scalar_t__ clktx_byp; scalar_t__ dllrst; scalar_t__ clkrst; } ;
union cvmx_agl_prtx_ctl {int u64; TYPE_6__ s; } ;
struct TYPE_12__ {int ptp_mode; int pre_align; int pad_len; int vlan_len; int pre_free; int ctl_mcst; int ctl_bck; int ctl_drp; int pre_strp; int pre_chk; scalar_t__ ctl_smac; } ;
union cvmx_agl_gmx_rxx_frm_ctl {int u64; TYPE_10__ s; } ;
struct TYPE_14__ {int en; } ;
union cvmx_agl_gmx_inf_mode {int u64; TYPE_1__ s; } ;
struct TYPE_15__ {int byp_en1; int nctl1; int pctl1; int byp_en; int nctl; int pctl; } ;
union cvmx_agl_gmx_drv_ctl {int u64; TYPE_2__ s; } ;
struct sockaddr {int sa_data; } ;
struct octeon_mgmt {int tx_ring_handle; int rx_ring_handle; void* tx_ring; int dev; void* rx_ring; int napi; scalar_t__ last_speed; scalar_t__ last_link; scalar_t__ agl; scalar_t__ has_rx_tstamp; scalar_t__ mix; scalar_t__ irq; scalar_t__ agl_prt_ctl; scalar_t__ port; scalar_t__ rx_current_fill; scalar_t__ rx_next_fill; scalar_t__ rx_next; scalar_t__ tx_current_fill; scalar_t__ tx_next_clean; scalar_t__ tx_next; } ;
struct net_device {TYPE_11__* phydev; int name; int mtu; int dev_addr; } ;
struct TYPE_13__ {int supported; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 scalar_t__ VAR_16 ;
 scalar_t__ VAR_17 ;
 scalar_t__ VAR_18 ;
 scalar_t__ VAR_19 ;
 scalar_t__ VAR_20 ;
 scalar_t__ VAR_21 ;
 scalar_t__ VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 scalar_t__ FUNC_0 (int ) ;
 void* VAR_28 ;
 void* VAR_29 ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__,int) ;
 int FUNC_3 (int ,char*,scalar_t__) ;
 void* FUNC_4 (int ,void*,int ,int ) ;
 int FUNC_5 (int ,int,int ,int ) ;
 int FUNC_6 (void*) ;
 void* FUNC_7 (int ,int ) ;
 int FUNC_8 (int ,int ) ;
 int FUNC_9 (int ,int ,int ) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int) ;
 struct octeon_mgmt* FUNC_12 (struct net_device*) ;
 int FUNC_13 (struct net_device*) ;
 int FUNC_14 (struct net_device*) ;
 int FUNC_15 (struct net_device*,int ) ;
 int FUNC_16 (struct octeon_mgmt*) ;
 int FUNC_17 (struct octeon_mgmt*) ;
 scalar_t__ FUNC_18 (struct net_device*) ;
 int VAR_30 ;
 int FUNC_19 (struct octeon_mgmt*) ;
 int FUNC_20 (struct net_device*) ;
 int FUNC_21 (struct net_device*,struct sockaddr*) ;
 int FUNC_22 (struct octeon_mgmt*) ;
 int FUNC_23 (TYPE_11__*) ;
 scalar_t__ FUNC_24 (scalar_t__,int ,int ,int ,struct net_device*) ;
 int FUNC_25 (void*) ;

__attribute__((used)) static int FUNC_26(struct net_device *VAR_31)
{
 struct octeon_mgmt *VAR_32 = FUNC_12(VAR_31);
 union cvmx_mixx_ctl VAR_33;
 union cvmx_agl_gmx_inf_mode VAR_34;
 union cvmx_mixx_oring1 VAR_35;
 union cvmx_mixx_iring1 VAR_36;
 union cvmx_agl_gmx_rxx_frm_ctl VAR_37;
 union cvmx_mixx_irhwm VAR_38;
 union cvmx_mixx_orhwm VAR_39;
 union cvmx_mixx_intena VAR_40;
 struct sockaddr VAR_41;


 VAR_32->tx_ring = FUNC_7(FUNC_25(VAR_29),
        VAR_15);
 if (!VAR_32->tx_ring)
  return -VAR_11;
 VAR_32->tx_ring_handle =
  FUNC_4(VAR_32->dev, VAR_32->tx_ring,
          FUNC_25(VAR_29),
          VAR_10);
 VAR_32->tx_next = 0;
 VAR_32->tx_next_clean = 0;
 VAR_32->tx_current_fill = 0;


 VAR_32->rx_ring = FUNC_7(FUNC_25(VAR_28),
        VAR_15);
 if (!VAR_32->rx_ring)
  goto err_nomem;
 VAR_32->rx_ring_handle =
  FUNC_4(VAR_32->dev, VAR_32->rx_ring,
          FUNC_25(VAR_28),
          VAR_10);

 VAR_32->rx_next = 0;
 VAR_32->rx_next_fill = 0;
 VAR_32->rx_current_fill = 0;

 FUNC_19(VAR_32);

 VAR_33.u64 = FUNC_1(VAR_32->mix + VAR_16);


 if (VAR_33.s.reset) {
  VAR_33.s.reset = 0;
  FUNC_2(VAR_32->mix + VAR_16, VAR_33.u64);
  do {
   VAR_33.u64 = FUNC_1(VAR_32->mix + VAR_16);
  } while (VAR_33.s.reset);
 }

 if (FUNC_0(VAR_26)) {
  VAR_34.u64 = 0;
  VAR_34.s.en = 1;
  FUNC_2(VAR_8, VAR_34.u64);
 }
 if (FUNC_0(VAR_25)
  || FUNC_0(VAR_24)) {



  union cvmx_agl_gmx_drv_ctl VAR_42;

  VAR_42.u64 = FUNC_1(VAR_7);
  if (VAR_32->port) {
   VAR_42.s.byp_en1 = 1;
   VAR_42.s.nctl1 = 6;
   VAR_42.s.pctl1 = 6;
  } else {
   VAR_42.s.byp_en = 1;
   VAR_42.s.nctl = 6;
   VAR_42.s.pctl = 6;
  }
  FUNC_2(VAR_7, VAR_42.u64);
 }

 VAR_35 = 0;
 VAR_35 = VAR_32->tx_ring_handle >> 3;
 VAR_35 = VAR_29;
 FUNC_2(VAR_32->mix + VAR_22, VAR_35);

 VAR_36 = 0;
 VAR_36 = VAR_32->rx_ring_handle >> 3;
 VAR_36 = VAR_28;
 FUNC_2(VAR_32->mix + VAR_19, VAR_36);

 FUNC_9(VAR_41.sa_data, VAR_31->dev_addr, VAR_14);
 FUNC_21(VAR_31, &VAR_41);

 FUNC_15(VAR_31, VAR_31->mtu);




 VAR_33.u64 = 0;
 VAR_33.s.crc_strip = 1;
 VAR_33.s.en = 1;
 VAR_33.s.nbtarb = 0;

 VAR_33.s.mrq_hwm = 1;



 FUNC_2(VAR_32->mix + VAR_16, VAR_33.u64);


 if (FUNC_18(VAR_31)) {
  FUNC_3(VAR_32->dev, "Cannot initialize PHY on MIX%d.\n", VAR_32->port);
  goto err_noirq;
 }


 if (FUNC_0(VAR_27) && VAR_31->phydev) {
  union cvmx_agl_prtx_ctl VAR_43;
  int VAR_44 =
   (FUNC_8(VAR_13,
        VAR_31->phydev->supported) |
    FUNC_8(VAR_12,
        VAR_31->phydev->supported)) != 0;

  VAR_43.u64 = FUNC_1(VAR_32->agl_prt_ctl);
  VAR_43.s.mode = VAR_44 ? 0 : 1;
  FUNC_2(VAR_32->agl_prt_ctl, VAR_43.u64);
  VAR_43.u64 = FUNC_1(VAR_32->agl_prt_ctl);
  VAR_43.s.clkrst = 0;
  if (VAR_44) {
   VAR_43.s.dllrst = 0;
   VAR_43.s.clktx_byp = 0;
  }
  FUNC_2(VAR_32->agl_prt_ctl, VAR_43.u64);
  FUNC_1(VAR_32->agl_prt_ctl);




  FUNC_11(256 * 8);


  VAR_43.u64 = FUNC_1(VAR_32->agl_prt_ctl);
  VAR_43.s.enable = 1;
  FUNC_2(VAR_32->agl_prt_ctl, VAR_43.u64);


  VAR_43.u64 = FUNC_1(VAR_32->agl_prt_ctl);


  VAR_43.s.comp = 1;
  VAR_43.s.drv_byp = 0;
  FUNC_2(VAR_32->agl_prt_ctl, VAR_43.u64);

  FUNC_1(VAR_32->agl_prt_ctl);


  FUNC_11(1040 * 8);







  FUNC_2(VAR_9, 0xae);
 }

 FUNC_20(VAR_31);



 FUNC_2(VAR_32->agl + VAR_1, 1);
 FUNC_2(VAR_32->agl + VAR_3, 0);
 FUNC_2(VAR_32->agl + VAR_2, 0);

 FUNC_2(VAR_32->agl + VAR_6, 1);
 FUNC_2(VAR_32->agl + VAR_4, 0);
 FUNC_2(VAR_32->agl + VAR_5, 0);


 FUNC_2(VAR_32->mix + VAR_20, FUNC_1(VAR_32->mix + VAR_20));

 if (FUNC_24(VAR_32->irq, VAR_30, 0, VAR_31->name,
   VAR_31)) {
  FUNC_3(VAR_32->dev, "request_irq(%d) failed.\n", VAR_32->irq);
  goto err_noirq;
 }


 VAR_38.u64 = 0;
 VAR_38.s.irhwm = 0;
 FUNC_2(VAR_32->mix + VAR_18, VAR_38.u64);


 VAR_39.u64 = 0;
 VAR_39.s.orhwm = 0;
 FUNC_2(VAR_32->mix + VAR_21, VAR_39.u64);


 VAR_40.u64 = 0;
 VAR_40.s.ithena = 1;
 VAR_40.s.othena = 1;
 FUNC_2(VAR_32->mix + VAR_17, VAR_40.u64);



 VAR_37.u64 = 0;
 VAR_37.s.ptp_mode = VAR_32->has_rx_tstamp ? 1 : 0;
 VAR_37.s.pre_align = 1;



 VAR_37.s.pad_len = 1;

 VAR_37.s.vlan_len = 1;

 VAR_37.s.pre_free = 1;

 VAR_37.s.ctl_smac = 0;

 VAR_37.s.ctl_mcst = 1;

 VAR_37.s.ctl_bck = 1;

 VAR_37.s.ctl_drp = 1;

 VAR_37.s.pre_strp = 1;



 VAR_37.s.pre_chk = 1;
 FUNC_2(VAR_32->agl + VAR_0, VAR_37.u64);


 FUNC_16(VAR_32);
 if (VAR_31->phydev)
  FUNC_22(VAR_32);
 FUNC_17(VAR_32);

 VAR_32->last_link = 0;
 VAR_32->last_speed = 0;



 if (VAR_31->phydev) {
  FUNC_13(VAR_31);
  FUNC_23(VAR_31->phydev);
 }

 FUNC_14(VAR_31);
 FUNC_10(&VAR_32->napi);

 return 0;
err_noirq:
 FUNC_19(VAR_32);
 FUNC_5(VAR_32->dev, VAR_32->rx_ring_handle,
    FUNC_25(VAR_28),
    VAR_10);
 FUNC_6(VAR_32->rx_ring);
err_nomem:
 FUNC_5(VAR_32->dev, VAR_32->tx_ring_handle,
    FUNC_25(VAR_29),
    VAR_10);
 FUNC_6(VAR_32->tx_ring);
 return -VAR_11;
}
