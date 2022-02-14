
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct xdp_desc {int len; int addr; } ;
struct i40e_tx_desc {int cmd_type_offset_bsz; int buffer_addr; } ;
struct i40e_tx_buffer {int bytecount; } ;
struct TYPE_2__ {int tx_busy; } ;
struct i40e_ring {size_t next_to_use; size_t count; int xsk_umem; struct i40e_tx_buffer* tx_bi; int dev; TYPE_1__ tx_stats; } ;
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
 int FUNC_4 (int ,int ,int ,int ) ;
 int FUNC_5 (struct i40e_ring*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (int ,struct xdp_desc*) ;
 int FUNC_9 (int ) ;

__attribute__((used)) static bool FUNC_10(struct i40e_ring *VAR_5, unsigned int VAR_6)
{
 struct i40e_tx_desc *VAR_7 = ((void*)0);
 struct i40e_tx_buffer *VAR_8;
 bool VAR_9 = 1;
 struct xdp_desc VAR_10;
 dma_addr_t VAR_11;

 while (VAR_6-- > 0) {
  if (!FUNC_6(FUNC_0(VAR_5))) {
   VAR_5->tx_stats.tx_busy++;
   VAR_9 = 0;
   break;
  }

  if (!FUNC_8(VAR_5->xsk_umem, &VAR_10))
   break;

  VAR_11 = FUNC_7(VAR_5->xsk_umem, VAR_10.addr);

  FUNC_4(VAR_5->dev, VAR_11, VAR_10.len,
        VAR_0);

  VAR_8 = &VAR_5->tx_bi[VAR_5->next_to_use];
  VAR_8->bytecount = VAR_10.len;

  VAR_7 = FUNC_1(VAR_5, VAR_5->next_to_use);
  VAR_7->buffer_addr = FUNC_3(VAR_11);
  VAR_7->cmd_type_offset_bsz =
   FUNC_2(VAR_3
       | VAR_2,
       0, VAR_10.len, 0);

  VAR_5->next_to_use++;
  if (VAR_5->next_to_use == VAR_5->count)
   VAR_5->next_to_use = 0;
 }

 if (VAR_7) {

  VAR_7->cmd_type_offset_bsz |= (VAR_4 <<
       VAR_1);
  FUNC_5(VAR_5);

  FUNC_9(VAR_5->xsk_umem);
 }

 return !!VAR_6 && VAR_9;
}
