
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
struct e1000_tx_desc {int dummy; } ;
struct e1000_hw {int mac_type; scalar_t__ media_type; scalar_t__ bus_type; } ;
struct e1000_adapter {int num_tx_queues; int tx_int_delay; int tx_abs_int_delay; int txd_cmd; int pcix_82544; TYPE_1__* tx_ring; struct e1000_hw hw; } ;
struct TYPE_2__ {int dma; int count; int tdt; int tdh; } ;


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
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;


 int VAR_33 ;
 int VAR_34 ;
 scalar_t__ VAR_35 ;
 int FUNC_0 (struct e1000_hw*) ;
 scalar_t__ VAR_36 ;
 scalar_t__ VAR_37 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int) ;

__attribute__((used)) static void FUNC_3(struct e1000_adapter *VAR_38)
{
 u64 VAR_39;
 struct e1000_hw *VAR_40 = &VAR_38->hw;
 u32 VAR_41, VAR_42, VAR_43;
 u32 VAR_44, VAR_45;



 switch (VAR_38->num_tx_queues) {
 case 1:
 default:
  VAR_39 = VAR_38->tx_ring[0].dma;
  VAR_41 = VAR_38->tx_ring[0].count *
   sizeof(struct e1000_tx_desc);
  FUNC_2(VAR_28, VAR_41);
  FUNC_2(VAR_25, (VAR_39 >> 32));
  FUNC_2(VAR_26, (VAR_39 & 0x00000000ffffffffULL));
  FUNC_2(VAR_29, 0);
  FUNC_2(VAR_27, 0);
  VAR_38->tx_ring[0].tdh = ((VAR_40->mac_type >= VAR_33) ?
        VAR_14 : VAR_7);
  VAR_38->tx_ring[0].tdt = ((VAR_40->mac_type >= VAR_33) ?
        VAR_15 : VAR_8);
  break;
 }


 if ((VAR_40->media_type == VAR_36 ||
      VAR_40->media_type == VAR_37))
  VAR_43 = VAR_6;
 else
  VAR_43 = VAR_5;

 switch (VAR_40->mac_type) {
 case 129:
 case 128:
  VAR_43 = VAR_2;
  VAR_44 = VAR_0;
  VAR_45 = VAR_1;
  break;
 default:
  VAR_44 = VAR_3;
  VAR_45 = VAR_4;
  break;
 }
 VAR_43 |= VAR_44 << VAR_16;
 VAR_43 |= VAR_45 << VAR_17;
 FUNC_2(VAR_31, VAR_43);



 FUNC_2(VAR_30, VAR_38->tx_int_delay);
 if (VAR_40->mac_type >= VAR_32)
  FUNC_2(VAR_23, VAR_38->tx_abs_int_delay);



 VAR_42 = FUNC_1(VAR_24);
 VAR_42 &= ~VAR_11;
 VAR_42 |= VAR_12 | VAR_13 |
  (VAR_9 << VAR_10);

 FUNC_0(VAR_40);


 VAR_38->txd_cmd = VAR_18 | VAR_20;


 if (VAR_38->tx_int_delay)
  VAR_38->txd_cmd |= VAR_19;

 if (VAR_40->mac_type < VAR_33)
  VAR_38->txd_cmd |= VAR_21;
 else
  VAR_38->txd_cmd |= VAR_22;




 if (VAR_40->mac_type == VAR_34 &&
     VAR_40->bus_type == VAR_35)
  VAR_38->pcix_82544 = 1;

 FUNC_2(VAR_24, VAR_42);

}
