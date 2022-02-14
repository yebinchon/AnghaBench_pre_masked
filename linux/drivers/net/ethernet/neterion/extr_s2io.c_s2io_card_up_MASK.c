
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct config_param {int rx_ring_num; scalar_t__ intr_type; scalar_t__ napi; } ;
struct mac_info {struct ring_info* rings; } ;
struct s2io_nic {int lro_max_aggr_per_sess; struct config_param config; int state; int alarm_timer; scalar_t__ all_multi_pos; scalar_t__ m_cast_flg; scalar_t__ promisc_flg; int napi; struct mac_info mac_control; struct net_device* dev; } ;
struct ring_info {int mtu; int lro; int napi; int rx_bufs_left; } ;
struct net_device {int mtu; int features; int name; } ;


 int FUNC_0 (int ,char*,int,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_1 (struct s2io_nic*,int,int ) ;
 int FUNC_2 (struct s2io_nic*,int ,int ) ;
 int FUNC_3 (struct s2io_nic*,struct ring_info*,int) ;
 int FUNC_4 (struct s2io_nic*) ;
 int FUNC_5 (struct s2io_nic*) ;
 scalar_t__ VAR_15 ;
 int VAR_16 ;
 int FUNC_6 (int *,scalar_t__) ;
 int FUNC_7 (int *) ;
 scalar_t__ FUNC_8 (struct s2io_nic*) ;
 int VAR_17 ;
 int FUNC_9 (struct s2io_nic*) ;
 int FUNC_10 (struct s2io_nic*) ;
 int FUNC_11 (struct net_device*) ;
 int FUNC_12 (int ,int *) ;
 scalar_t__ FUNC_13 (struct s2io_nic*) ;
 int FUNC_14 (int *,int ,int ) ;

__attribute__((used)) static int FUNC_15(struct s2io_nic *VAR_18)
{
 int VAR_19, VAR_20 = 0;
 struct config_param *VAR_21;
 struct mac_info *VAR_22;
 struct net_device *VAR_23 = VAR_18->dev;
 u16 VAR_24;


 VAR_20 = FUNC_5(VAR_18);
 if (VAR_20 != 0) {
  FUNC_0(VAR_5, "%s: H/W initialization failed\n",
     VAR_23->name);
  if (VAR_20 != -VAR_0)
   FUNC_10(VAR_18);
  return VAR_20;
 }





 VAR_21 = &VAR_18->config;
 VAR_22 = &VAR_18->mac_control;

 for (VAR_19 = 0; VAR_19 < VAR_21->rx_ring_num; VAR_19++) {
  struct ring_info *VAR_25 = &VAR_22->rings[VAR_19];

  VAR_25->mtu = VAR_23->mtu;
  VAR_25->lro = !!(VAR_23->features & VAR_10);
  VAR_20 = FUNC_3(VAR_18, VAR_25, 1);
  if (VAR_20) {
   FUNC_0(VAR_5, "%s: Out of memory in Open\n",
      VAR_23->name);
   FUNC_10(VAR_18);
   FUNC_4(VAR_18);
   return -VAR_4;
  }
  FUNC_0(VAR_7, "Buf in ring:%d is %d:\n", VAR_19,
     VAR_25->rx_bufs_left);
 }


 if (VAR_21->napi) {
  if (VAR_21->intr_type == VAR_9) {
   for (VAR_19 = 0; VAR_19 < VAR_18->config.rx_ring_num; VAR_19++)
    FUNC_7(&VAR_18->mac_control.rings[VAR_19].napi);
  } else {
   FUNC_7(&VAR_18->napi);
  }
 }


 if (VAR_18->promisc_flg)
  VAR_18->promisc_flg = 0;
 if (VAR_18->m_cast_flg) {
  VAR_18->m_cast_flg = 0;
  VAR_18->all_multi_pos = 0;
 }


 FUNC_11(VAR_23);

 if (VAR_23->features & VAR_10) {

  VAR_18->lro_max_aggr_per_sess = ((1<<16) - 1) / VAR_23->mtu;

  if (VAR_16 < VAR_18->lro_max_aggr_per_sess)
   VAR_18->lro_max_aggr_per_sess = VAR_16;
 }


 if (FUNC_13(VAR_18)) {
  FUNC_0(VAR_5, "%s: Starting NIC failed\n", VAR_23->name);
  FUNC_10(VAR_18);
  FUNC_4(VAR_18);
  return -VAR_3;
 }


 if (FUNC_8(VAR_18) != 0) {
  if (VAR_18->config.intr_type == VAR_9)
   FUNC_9(VAR_18);
  FUNC_10(VAR_18);
  FUNC_4(VAR_18);
  return -VAR_3;
 }

 FUNC_14(&VAR_18->alarm_timer, VAR_17, 0);
 FUNC_6(&VAR_18->alarm_timer, VAR_15 + VAR_6 / 2);

 FUNC_12(VAR_14, &VAR_18->state);


 FUNC_2(VAR_18, VAR_2, VAR_1);
 if (VAR_18->config.intr_type != VAR_8) {
  VAR_24 = VAR_13 | VAR_12;
  FUNC_1(VAR_18, VAR_24, VAR_1);
 } else {
  VAR_24 = VAR_13 | VAR_11;
  VAR_24 |= VAR_12;
  FUNC_1(VAR_18, VAR_24, VAR_1);
 }

 return 0;
}
