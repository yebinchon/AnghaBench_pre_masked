
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct ath5k_rx_status {int rs_datalen; int rs_more; int rs_status; void* rs_phyerr; void* rs_keyix; void* rs_tstamp; void* rs_antenna; void* rs_rate; void* rs_rssi; } ;
struct ath5k_hw_rx_status {int rx_status_0; int rx_status_1; } ;
struct TYPE_6__ {int cap_has_phyerr_counters; } ;
struct ath5k_hw {TYPE_3__ ah_capabilities; } ;
struct TYPE_4__ {struct ath5k_hw_rx_status rx_stat; } ;
struct TYPE_5__ {TYPE_1__ ds_rx; } ;
struct ath5k_desc {TYPE_2__ ud; } ;


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
 int VAR_13 ;
 int VAR_14 ;
 void* FUNC_0 (int,int ) ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 void* VAR_19 ;
 int VAR_20 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct ath5k_hw*,void*) ;
 int FUNC_3 (struct ath5k_rx_status*,int ,int) ;
 scalar_t__ FUNC_4 (int) ;

__attribute__((used)) static int
FUNC_5(struct ath5k_hw *VAR_21,
    struct ath5k_desc *VAR_22,
    struct ath5k_rx_status *VAR_23)
{
 struct ath5k_hw_rx_status *VAR_24;
 u32 VAR_25, VAR_26;

 VAR_24 = &VAR_22->ud.ds_rx.rx_stat;
 VAR_26 = FUNC_1(VAR_24->rx_status_1);


 if (FUNC_4(!(VAR_26 & VAR_7)))
  return -VAR_20;

 FUNC_3(VAR_23, 0, sizeof(struct ath5k_rx_status));
 VAR_25 = FUNC_1(VAR_24->rx_status_0);




 VAR_23->rs_datalen = VAR_25 & VAR_0;
 VAR_23->rs_rssi = FUNC_0(VAR_25,
  VAR_4);
 VAR_23->rs_rate = FUNC_0(VAR_25,
  VAR_3);
 VAR_23->rs_antenna = FUNC_0(VAR_25,
  VAR_2);
 VAR_23->rs_more = !!(VAR_25 & VAR_1);
 VAR_23->rs_tstamp = FUNC_0(VAR_26,
  VAR_14);




 if (VAR_26 & VAR_10)
  VAR_23->rs_keyix = FUNC_0(VAR_26,
        VAR_9);
 else
  VAR_23->rs_keyix = VAR_19;




 if (!(VAR_26 & VAR_8)) {
  if (VAR_26 & VAR_5)
   VAR_23->rs_status |= VAR_15;

  if (VAR_26 & VAR_12) {
   VAR_23->rs_status |= VAR_18;
   VAR_23->rs_phyerr = FUNC_0(VAR_26,
    VAR_13);
   if (!VAR_21->ah_capabilities.cap_has_phyerr_counters)
    FUNC_2(VAR_21, VAR_23->rs_phyerr);
  }

  if (VAR_26 & VAR_6)
   VAR_23->rs_status |= VAR_16;

  if (VAR_26 & VAR_11)
   VAR_23->rs_status |= VAR_17;
 }
 return 0;
}
