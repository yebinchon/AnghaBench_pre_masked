
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct lan743x_rx {int ring_size; int vector_flags; int last_tail; int last_head; int napi; int channel_number; int head_dma_ptr; int ring_dma_ptr; scalar_t__ frame_count; struct lan743x_adapter* adapter; } ;
struct TYPE_2__ {int flags; } ;
struct lan743x_adapter {TYPE_1__ csr; int netdev; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int VAR_3 ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int) ;
 int FUNC_7 (int) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (int ) ;
 int VAR_12 ;
 int FUNC_14 (int) ;
 int FUNC_15 (int) ;
 int VAR_13 ;
 int FUNC_16 (int) ;
 int FUNC_17 (int ) ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int FUNC_18 (int ) ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int FUNC_19 (int ) ;
 int VAR_24 ;
 int FUNC_20 (int ) ;
 int FUNC_21 (int ) ;
 int FUNC_22 (int ) ;
 void* FUNC_23 (struct lan743x_adapter*,int ) ;
 int FUNC_24 (struct lan743x_adapter*,int ,int,int ,int,int,int) ;
 int FUNC_25 (struct lan743x_adapter*,int ,int) ;
 int FUNC_26 (struct lan743x_adapter*,int) ;
 int VAR_25 ;
 int FUNC_27 (struct lan743x_rx*) ;
 int FUNC_28 (struct lan743x_rx*) ;
 int FUNC_29 (int *) ;
 int FUNC_30 (int ,int *,int ,int) ;
 int FUNC_31 (int *) ;

__attribute__((used)) static int FUNC_32(struct lan743x_rx *VAR_26)
{
 struct lan743x_adapter *VAR_27 = VAR_26->adapter;
 u32 VAR_28 = 0;
 int VAR_29;

 VAR_26->frame_count = 0;
 VAR_29 = FUNC_28(VAR_26);
 if (VAR_29)
  goto return_error;

 FUNC_30(VAR_27->netdev,
         &VAR_26->napi, VAR_25,
         VAR_26->ring_size - 1);

 FUNC_25(VAR_27, VAR_0,
     FUNC_0(VAR_26->channel_number));
 FUNC_24(VAR_27, VAR_0,
     FUNC_0(VAR_26->channel_number),
     0, 1000, 20000, 100);


 FUNC_25(VAR_27,
     FUNC_11(VAR_26->channel_number),
     FUNC_3(VAR_26->ring_dma_ptr));
 FUNC_25(VAR_27,
     FUNC_12(VAR_26->channel_number),
     FUNC_4(VAR_26->ring_dma_ptr));


 FUNC_25(VAR_27,
     FUNC_20(VAR_26->channel_number),
     FUNC_3(VAR_26->head_dma_ptr));
 FUNC_25(VAR_27,
     FUNC_21(VAR_26->channel_number),
     FUNC_4(VAR_26->head_dma_ptr));
 VAR_28 = VAR_12;
 if (!(VAR_27->csr.flags & VAR_7)) {
  VAR_28 |= (VAR_13 |
   FUNC_16(0x7) |
   FUNC_15(16) |
   FUNC_14(4));
 }


 FUNC_25(VAR_27,
     FUNC_13(VAR_26->channel_number), VAR_28);


 VAR_28 = FUNC_23(VAR_27, FUNC_17(VAR_26->channel_number));
 VAR_28 &= ~VAR_17;
 if (!VAR_24)
  VAR_28 |= VAR_15;
 else
  VAR_28 |= VAR_16;
 VAR_28 &= ~VAR_18;
 VAR_28 |= ((VAR_26->ring_size) & VAR_18);
 VAR_28 |= VAR_19;
 if (!(VAR_27->csr.flags & VAR_7))
  VAR_28 |= VAR_14;

 FUNC_25(VAR_27, FUNC_17(VAR_26->channel_number), VAR_28);
 VAR_26->vector_flags = FUNC_26(VAR_27,
        FUNC_10
        (VAR_26->channel_number));


 VAR_28 = 0;
 if (VAR_26->vector_flags & VAR_8)
  VAR_28 |= VAR_23;
 if (VAR_26->vector_flags & VAR_10)
  VAR_28 |= VAR_20;
 if (VAR_26->vector_flags & VAR_11)
  VAR_28 |= VAR_22;
 if (VAR_26->vector_flags & VAR_9)
  VAR_28 |= VAR_21;
 FUNC_25(VAR_27, FUNC_18(VAR_26->channel_number), VAR_28);

 VAR_26->last_tail = ((u32)(VAR_26->ring_size - 1));
 FUNC_25(VAR_27, FUNC_22(VAR_26->channel_number),
     VAR_26->last_tail);
 VAR_26->last_head = FUNC_23(VAR_27, FUNC_19(VAR_26->channel_number));
 if (VAR_26->last_head) {
  VAR_29 = -VAR_3;
  goto napi_delete;
 }

 FUNC_29(&VAR_26->napi);

 FUNC_25(VAR_27, VAR_6,
     FUNC_10(VAR_26->channel_number));
 FUNC_25(VAR_27, VAR_2,
     FUNC_2(VAR_26->channel_number));
 FUNC_25(VAR_27, VAR_1,
     FUNC_2(VAR_26->channel_number));
 FUNC_25(VAR_27, VAR_0,
     FUNC_1(VAR_26->channel_number));


 FUNC_25(VAR_27, VAR_5,
     FUNC_9(VAR_26->channel_number));
 FUNC_24(VAR_27, VAR_5,
     FUNC_9(VAR_26->channel_number),
     0, 1000, 20000, 100);
 FUNC_25(VAR_27, FUNC_5(VAR_26->channel_number),
     VAR_4 |
     FUNC_7(0x2A) |
     FUNC_6(0xA));


 FUNC_25(VAR_27, VAR_5,
     FUNC_8(VAR_26->channel_number));
 return 0;

napi_delete:
 FUNC_31(&VAR_26->napi);
 FUNC_27(VAR_26);

return_error:
 return VAR_29;
}
