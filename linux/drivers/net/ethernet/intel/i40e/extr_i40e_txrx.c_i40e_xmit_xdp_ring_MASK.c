
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
typedef size_t u16 ;
struct xdp_frame {int len; void* data; } ;
struct i40e_tx_desc {int cmd_type_offset_bsz; int buffer_addr; } ;
struct i40e_tx_buffer {int gso_segs; struct i40e_tx_desc* next_to_watch; struct xdp_frame* xdpf; int bytecount; } ;
struct TYPE_2__ {int tx_busy; } ;
struct i40e_ring {size_t next_to_use; size_t count; struct i40e_tx_buffer* tx_bi; int dev; TYPE_1__ tx_stats; } ;
typedef int dma_addr_t ;


 int VAR_0 ;
 int FUNC_0 (struct i40e_ring*) ;
 int VAR_1 ;
 struct i40e_tx_desc* FUNC_1 (struct i40e_ring*,size_t) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int,int ,int ,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,void*,int ,int ) ;
 scalar_t__ FUNC_5 (int ,int ) ;
 int FUNC_6 (struct i40e_tx_buffer*,int ,int ) ;
 int FUNC_7 (struct i40e_tx_buffer*,int ,int ) ;
 int VAR_5 ;
 int FUNC_8 () ;
 int FUNC_9 (int ) ;

__attribute__((used)) static int FUNC_10(struct xdp_frame *VAR_6,
         struct i40e_ring *VAR_7)
{
 u16 VAR_8 = VAR_7->next_to_use;
 struct i40e_tx_buffer *VAR_9;
 struct i40e_tx_desc *VAR_10;
 void *VAR_11 = VAR_6->data;
 u32 VAR_12 = VAR_6->len;
 dma_addr_t VAR_13;

 if (!FUNC_9(FUNC_0(VAR_7))) {
  VAR_7->tx_stats.tx_busy++;
  return VAR_3;
 }
 VAR_13 = FUNC_4(VAR_7->dev, VAR_11, VAR_12, VAR_0);
 if (FUNC_5(VAR_7->dev, VAR_13))
  return VAR_3;

 VAR_9 = &VAR_7->tx_bi[VAR_8];
 VAR_9->bytecount = VAR_12;
 VAR_9->gso_segs = 1;
 VAR_9->xdpf = VAR_6;


 FUNC_7(VAR_9, VAR_5, VAR_12);
 FUNC_6(VAR_9, VAR_13, VAR_13);

 VAR_10 = FUNC_1(VAR_7, VAR_8);
 VAR_10->buffer_addr = FUNC_3(VAR_13);
 VAR_10->cmd_type_offset_bsz = FUNC_2(VAR_2
        | VAR_1,
        0, VAR_12, 0);




 FUNC_8();

 VAR_8++;
 if (VAR_8 == VAR_7->count)
  VAR_8 = 0;

 VAR_9->next_to_watch = VAR_10;
 VAR_7->next_to_use = VAR_8;

 return VAR_4;
}
