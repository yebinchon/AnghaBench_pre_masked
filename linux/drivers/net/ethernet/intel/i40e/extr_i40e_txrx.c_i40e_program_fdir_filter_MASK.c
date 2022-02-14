
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef size_t u16 ;
struct i40e_vsi {struct i40e_ring** tx_rings; } ;
struct i40e_tx_desc {int cmd_type_offset_bsz; int buffer_addr; } ;
struct i40e_tx_buffer {struct i40e_tx_desc* next_to_watch; void* raw_buf; int tx_flags; } ;
struct i40e_ring {size_t next_to_use; size_t count; int tail; struct i40e_tx_buffer* tx_bi; struct device* dev; } ;
struct i40e_pf {int dummy; } ;
struct i40e_fdir_filter {int dummy; } ;
struct device {int dummy; } ;
typedef int dma_addr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct i40e_ring*) ;
 int VAR_3 ;
 size_t VAR_4 ;
 int VAR_5 ;
 struct i40e_tx_desc* FUNC_1 (struct i40e_ring*,size_t) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_2 (int,int ,int ,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct device*,int *,int ,int ) ;
 scalar_t__ FUNC_5 (struct device*,int ) ;
 int FUNC_6 (struct i40e_tx_buffer*,int ,int ) ;
 int FUNC_7 (struct i40e_tx_buffer*,int ,int ) ;
 int FUNC_8 (struct i40e_ring*,struct i40e_fdir_filter*,int) ;
 struct i40e_vsi* FUNC_9 (struct i40e_pf*,int ) ;
 int VAR_9 ;
 int FUNC_10 (struct i40e_tx_buffer*,int ,int) ;
 int FUNC_11 (int) ;
 int FUNC_12 () ;
 int FUNC_13 (size_t,int ) ;

__attribute__((used)) static int FUNC_14(struct i40e_fdir_filter *VAR_10,
        u8 *VAR_11, struct i40e_pf *VAR_12,
        bool VAR_13)
{
 struct i40e_tx_buffer *VAR_14, *VAR_15;
 struct i40e_tx_desc *VAR_16;
 struct i40e_ring *VAR_17;
 struct i40e_vsi *VAR_18;
 struct device *VAR_19;
 dma_addr_t VAR_20;
 u32 VAR_21 = 0;
 u16 VAR_22;


 VAR_18 = FUNC_9(VAR_12, VAR_8);
 if (!VAR_18)
  return -VAR_2;

 VAR_17 = VAR_18->tx_rings[0];
 VAR_19 = VAR_17->dev;


 for (VAR_22 = VAR_4; FUNC_0(VAR_17) < 2; VAR_22--) {
  if (!VAR_22)
   return -VAR_1;
  FUNC_11(1);
 }

 VAR_20 = FUNC_4(VAR_19, VAR_11,
        VAR_3, VAR_0);
 if (FUNC_5(VAR_19, VAR_20))
  goto dma_fail;


 VAR_22 = VAR_17->next_to_use;
 VAR_15 = &VAR_17->tx_bi[VAR_22];
 FUNC_8(VAR_17, VAR_10, VAR_13);


 VAR_22 = VAR_17->next_to_use;
 VAR_16 = FUNC_1(VAR_17, VAR_22);
 VAR_14 = &VAR_17->tx_bi[VAR_22];

 VAR_17->next_to_use = ((VAR_22 + 1) < VAR_17->count) ? VAR_22 + 1 : 0;

 FUNC_10(VAR_14, 0, sizeof(struct i40e_tx_buffer));


 FUNC_7(VAR_14, VAR_9, VAR_3);
 FUNC_6(VAR_14, VAR_20, VAR_20);

 VAR_16->buffer_addr = FUNC_3(VAR_20);
 VAR_21 = VAR_5 | VAR_6;

 VAR_14->tx_flags = VAR_7;
 VAR_14->raw_buf = (void *)VAR_11;

 VAR_16->cmd_type_offset_bsz =
  FUNC_2(VAR_21, 0, VAR_3, 0);




 FUNC_12();


 VAR_15->next_to_watch = VAR_16;

 FUNC_13(VAR_17->next_to_use, VAR_17->tail);
 return 0;

dma_fail:
 return -1;
}
