
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct atl1c_tpd_ring {int dma; int count; } ;
struct atl1c_rrd_ring {int dma; int count; } ;
struct atl1c_rfd_ring {int dma; int count; } ;
struct atl1c_hw {scalar_t__ nic_type; } ;
struct atl1c_adapter {int rx_buffer_len; scalar_t__ tpd_ring; struct atl1c_rrd_ring rrd_ring; struct atl1c_rfd_ring rfd_ring; struct atl1c_hw hw; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct atl1c_hw*,int ,int) ;
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
 scalar_t__ VAR_25 ;
 size_t VAR_26 ;
 size_t VAR_27 ;

__attribute__((used)) static void FUNC_1(struct atl1c_adapter *VAR_28)
{
 struct atl1c_hw *VAR_29 = &VAR_28->hw;
 struct atl1c_rfd_ring *VAR_30 = &VAR_28->rfd_ring;
 struct atl1c_rrd_ring *VAR_31 = &VAR_28->rrd_ring;
 struct atl1c_tpd_ring *VAR_32 = (struct atl1c_tpd_ring *)
    VAR_28->tpd_ring;


 FUNC_0(VAR_29, VAR_20,
   (u32)((VAR_32[VAR_27].dma &
    VAR_0) >> 32));

 FUNC_0(VAR_29, VAR_16,
   (u32)(VAR_32[VAR_27].dma &
    VAR_1));
 FUNC_0(VAR_29, VAR_17,
   (u32)(VAR_32[VAR_26].dma &
    VAR_1));
 FUNC_0(VAR_29, VAR_18,
   (u32)(VAR_32[0].count & VAR_24));



 FUNC_0(VAR_29, VAR_8,
   (u32)((VAR_30->dma & VAR_0) >> 32));
 FUNC_0(VAR_29, VAR_3,
   (u32)(VAR_30->dma & VAR_1));

 FUNC_0(VAR_29, VAR_4,
   VAR_30->count & VAR_21);
 FUNC_0(VAR_29, VAR_9,
   VAR_28->rx_buffer_len & VAR_23);


 FUNC_0(VAR_29, VAR_5,
   (u32)(VAR_31->dma & VAR_1));
 FUNC_0(VAR_29, VAR_6,
   (VAR_31->count & VAR_22));

 if (VAR_29->nic_type == VAR_25) {
  FUNC_0(VAR_29, VAR_12, 0x02a0L);
  FUNC_0(VAR_29, VAR_15, 0x0100L);
  FUNC_0(VAR_29, VAR_11, 0x029f0000L);
  FUNC_0(VAR_29, VAR_10, 0x02bf02a0L);
  FUNC_0(VAR_29, VAR_14, 0x03bf02c0L);
  FUNC_0(VAR_29, VAR_13, 0x03df03c0L);
  FUNC_0(VAR_29, VAR_19, 0);
  FUNC_0(VAR_29, VAR_7, 0);
 }

 FUNC_0(VAR_29, VAR_2, 1);
}
