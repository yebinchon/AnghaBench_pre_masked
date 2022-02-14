
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ath5k_rx_status {int rs_datalen; int rs_more; int rs_antenna; int rs_status; void* rs_phyerr; void* rs_keyix; void* rs_tstamp; void* rs_rate; void* rs_rssi; } ;
struct ath5k_hw_rx_status {int rx_status_1; int rx_status_0; } ;
struct ath5k_hw {scalar_t__ ah_version; } ;
struct TYPE_3__ {struct ath5k_hw_rx_status rx_stat; } ;
struct TYPE_4__ {TYPE_1__ ds_rx; } ;
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
 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;
 void* FUNC_0 (int,int) ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 void* VAR_21 ;
 int VAR_22 ;
 int FUNC_1 (struct ath5k_rx_status*,int ,int) ;
 scalar_t__ FUNC_2 (int) ;

__attribute__((used)) static int
FUNC_3(struct ath5k_hw *VAR_23,
    struct ath5k_desc *VAR_24,
    struct ath5k_rx_status *VAR_25)
{
 struct ath5k_hw_rx_status *VAR_26;

 VAR_26 = &VAR_24->ud.ds_rx.rx_stat;


 if (FUNC_2(!(VAR_26->rx_status_1 &
   VAR_8)))
  return -VAR_22;

 FUNC_1(VAR_25, 0, sizeof(struct ath5k_rx_status));




 VAR_25->rs_datalen = VAR_26->rx_status_0 &
  VAR_0;
 VAR_25->rs_rssi = FUNC_0(VAR_26->rx_status_0,
  VAR_5);
 VAR_25->rs_rate = FUNC_0(VAR_26->rx_status_0,
  VAR_4);
 VAR_25->rs_more = !!(VAR_26->rx_status_0 &
  VAR_1);





 VAR_25->rs_tstamp = FUNC_0(VAR_26->rx_status_1,
  VAR_14);

 if (VAR_23->ah_version == VAR_16)
  VAR_25->rs_antenna = FUNC_0(VAR_26->rx_status_0,
    VAR_3);
 else
  VAR_25->rs_antenna = (VAR_26->rx_status_0 &
    VAR_2)
    ? 2 : 1;




 if (VAR_26->rx_status_1 & VAR_12)
  VAR_25->rs_keyix = FUNC_0(VAR_26->rx_status_1,
   VAR_11);
 else
  VAR_25->rs_keyix = VAR_21;




 if (!(VAR_26->rx_status_1 &
   VAR_10)) {
  if (VAR_26->rx_status_1 &
    VAR_6)
   VAR_25->rs_status |= VAR_17;


  if ((VAR_23->ah_version == VAR_15) &&
      (VAR_26->rx_status_1 &
    VAR_9))
   VAR_25->rs_status |= VAR_19;

  if (VAR_26->rx_status_1 &
    VAR_13) {
   VAR_25->rs_status |= VAR_20;
   VAR_25->rs_phyerr = FUNC_0(VAR_26->rx_status_1,
    VAR_13);
  }

  if (VAR_26->rx_status_1 &
    VAR_7)
   VAR_25->rs_status |= VAR_18;
 }

 return 0;
}
