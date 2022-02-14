
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u64 ;
typedef scalar_t__ u16 ;
struct ice_tx_desc {void* cmd_type_offset_bsz; void* buf_addr; } ;
struct ice_tx_buf {struct ice_tx_desc* next_to_watch; } ;
struct ice_ring {size_t next_to_use; size_t count; int dev; int tail; struct ice_tx_buf* tx_buf; } ;
typedef int dma_addr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct ice_tx_desc* FUNC_0 (struct ice_ring*,size_t) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 void* FUNC_1 (int) ;
 int FUNC_2 (int ,int *,scalar_t__,int ) ;
 scalar_t__ FUNC_3 (int ,int) ;
 int FUNC_4 (int ,int,scalar_t__,int ) ;
 int FUNC_5 (int,int) ;
 int FUNC_6 () ;
 int FUNC_7 (size_t,int ) ;

__attribute__((used)) static int FUNC_8(struct ice_ring *VAR_9, u8 *VAR_10, u16 VAR_11)
{
 struct ice_tx_desc *VAR_12;
 struct ice_tx_buf *VAR_13;
 dma_addr_t VAR_14;
 u64 VAR_15;

 VAR_12 = FUNC_0(VAR_9, VAR_9->next_to_use);
 VAR_13 = &VAR_9->tx_buf[VAR_9->next_to_use];

 VAR_14 = FUNC_2(VAR_9->dev, VAR_10, VAR_11, VAR_0);
 if (FUNC_3(VAR_9->dev, VAR_14))
  return -VAR_1;

 VAR_12->buf_addr = FUNC_1(VAR_14);


 VAR_15 = (u64)(VAR_6 | VAR_7);
 VAR_12->cmd_type_offset_bsz =
  FUNC_1(VAR_8 |
       (VAR_15 << VAR_2) |
       ((u64)0 << VAR_4) |
       ((u64)VAR_11 << VAR_5) |
       ((u64)0 << VAR_3));

 VAR_13->next_to_watch = VAR_12;




 FUNC_6();

 VAR_9->next_to_use++;
 if (VAR_9->next_to_use >= VAR_9->count)
  VAR_9->next_to_use = 0;

 FUNC_7(VAR_9->next_to_use, VAR_9->tail);


 FUNC_5(1000, 2000);
 FUNC_4(VAR_9->dev, VAR_14, VAR_11, VAR_0);

 return 0;
}
