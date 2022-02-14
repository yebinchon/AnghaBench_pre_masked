
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct lan743x_tx {int ring_size; int vector_flags; int channel_number; int napi; scalar_t__ last_tail; void* last_head; int head_dma_ptr; int ring_dma_ptr; struct lan743x_adapter* adapter; } ;
struct TYPE_2__ {int flags; } ;
struct lan743x_adapter {int netdev; TYPE_1__ csr; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_1 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int VAR_2 ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ) ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_11 (int) ;
 int FUNC_12 (int) ;
 int FUNC_13 (int) ;
 int VAR_12 ;
 int FUNC_14 (int ) ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_15 (int ) ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int FUNC_16 (int ) ;
 int FUNC_17 (int ) ;
 int FUNC_18 (int ) ;
 int FUNC_19 (int ) ;
 void* FUNC_20 (struct lan743x_adapter*,int ) ;
 int FUNC_21 (struct lan743x_adapter*,int ,int,int ,int,int,int) ;
 int FUNC_22 (struct lan743x_adapter*,int ,int) ;
 int FUNC_23 (struct lan743x_adapter*,int) ;
 int VAR_19 ;
 int FUNC_24 (struct lan743x_tx*) ;
 int FUNC_25 (int *) ;
 int FUNC_26 (int ,int *,int ,int) ;

__attribute__((used)) static int FUNC_27(struct lan743x_tx *VAR_20)
{
 struct lan743x_adapter *VAR_21 = ((void*)0);
 u32 VAR_22 = 0;
 int VAR_23;

 VAR_21 = VAR_20->adapter;
 VAR_23 = FUNC_24(VAR_20);
 if (VAR_23)
  return VAR_23;


 FUNC_22(VAR_21, VAR_2,
     FUNC_6(VAR_20->channel_number));
 FUNC_21(VAR_21, VAR_2,
     FUNC_6(VAR_20->channel_number),
     0, 1000, 20000, 100);


 FUNC_22(VAR_21, VAR_2,
     FUNC_5(VAR_20->channel_number));


 FUNC_22(VAR_21, VAR_0,
     FUNC_1(VAR_20->channel_number));
 FUNC_21(VAR_21, VAR_0,
     FUNC_1(VAR_20->channel_number),
     0, 1000, 20000, 100);


 FUNC_22(VAR_21,
     FUNC_8(VAR_20->channel_number),
     FUNC_3(VAR_20->ring_dma_ptr));
 FUNC_22(VAR_21,
     FUNC_9(VAR_20->channel_number),
     FUNC_4(VAR_20->ring_dma_ptr));


 VAR_22 = FUNC_20(VAR_21, FUNC_14(VAR_20->channel_number));
 VAR_22 &= ~VAR_14;
 VAR_22 |= ((VAR_20->ring_size) & VAR_14);
 if (!(VAR_21->csr.flags & VAR_4))
  VAR_22 |= VAR_13;
 FUNC_22(VAR_21, FUNC_14(VAR_20->channel_number), VAR_22);


 VAR_22 = VAR_12 | VAR_10;
 if (!(VAR_21->csr.flags & VAR_4)) {
  VAR_22 |= VAR_11;
  VAR_22 |= FUNC_13(0x10);
  VAR_22 |= FUNC_12(0x04);
  VAR_22 |= FUNC_11(0x07);
 }
 FUNC_22(VAR_21, FUNC_10(VAR_20->channel_number), VAR_22);


 FUNC_22(VAR_21,
     FUNC_17(VAR_20->channel_number),
     FUNC_3(VAR_20->head_dma_ptr));
 FUNC_22(VAR_21,
     FUNC_18(VAR_20->channel_number),
     FUNC_4(VAR_20->head_dma_ptr));


 VAR_20->last_head = FUNC_20(VAR_21, FUNC_16(VAR_20->channel_number));


 VAR_20->last_tail = 0;
 FUNC_22(VAR_21, FUNC_19(VAR_20->channel_number),
     (u32)(VAR_20->last_tail));
 VAR_20->vector_flags = FUNC_23(VAR_21,
        FUNC_7
        (VAR_20->channel_number));
 FUNC_26(VAR_21->netdev,
     &VAR_20->napi, VAR_19,
     VAR_20->ring_size - 1);
 FUNC_25(&VAR_20->napi);

 VAR_22 = 0;
 if (VAR_20->vector_flags & VAR_5)
  VAR_22 |= VAR_18;
 if (VAR_20->vector_flags & VAR_8)
  VAR_22 |= VAR_15;
 if (VAR_20->vector_flags & VAR_9)
  VAR_22 |= VAR_17;
 if (VAR_20->vector_flags & VAR_7)
  VAR_22 |= VAR_16;
 FUNC_22(VAR_21, FUNC_15(VAR_20->channel_number), VAR_22);

 if (!(VAR_20->vector_flags & VAR_6))
  FUNC_22(VAR_21, VAR_3,
      FUNC_7(VAR_20->channel_number));
 FUNC_22(VAR_21, VAR_1,
     FUNC_2(VAR_20->channel_number));


 FUNC_22(VAR_21, VAR_0,
     FUNC_0(VAR_20->channel_number));
 return 0;
}
