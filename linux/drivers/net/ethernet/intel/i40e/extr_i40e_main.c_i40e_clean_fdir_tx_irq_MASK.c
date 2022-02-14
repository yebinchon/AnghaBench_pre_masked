
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t u16 ;
struct i40e_vsi {TYPE_1__* back; } ;
struct i40e_tx_desc {int cmd_type_offset_bsz; scalar_t__ buffer_addr; } ;
struct i40e_tx_buffer {int tx_flags; struct i40e_tx_desc* next_to_watch; int * raw_buf; } ;
struct i40e_ring {size_t next_to_clean; TYPE_2__* q_vector; scalar_t__ count; struct i40e_tx_buffer* tx_bi; int dev; struct i40e_vsi* vsi; } ;
struct TYPE_4__ {int v_idx; } ;
struct TYPE_3__ {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct i40e_tx_desc* FUNC_0 (struct i40e_ring*,size_t) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ) ;
 int VAR_4 ;
 int FUNC_2 (struct i40e_tx_buffer*,int ) ;
 int FUNC_3 (struct i40e_tx_buffer*,int ) ;
 int FUNC_4 (struct i40e_tx_buffer*,int ,int ) ;
 int FUNC_5 (int ,int ,int ,int ) ;
 int FUNC_6 (struct i40e_vsi*,int ) ;
 int FUNC_7 (int *) ;
 int VAR_5 ;
 scalar_t__ FUNC_8 (int) ;
 int FUNC_9 () ;
 scalar_t__ FUNC_10 (int) ;

__attribute__((used)) static bool FUNC_11(struct i40e_ring *VAR_6, int VAR_7)
{
 struct i40e_vsi *VAR_8 = VAR_6->vsi;
 u16 VAR_9 = VAR_6->next_to_clean;
 struct i40e_tx_buffer *VAR_10;
 struct i40e_tx_desc *VAR_11;

 VAR_10 = &VAR_6->tx_bi[VAR_9];
 VAR_11 = FUNC_0(VAR_6, VAR_9);
 VAR_9 -= VAR_6->count;

 do {
  struct i40e_tx_desc *VAR_12 = VAR_10->next_to_watch;


  if (!VAR_12)
   break;


  FUNC_9();


  if (!(VAR_12->cmd_type_offset_bsz &
        FUNC_1(VAR_2)))
   break;


  VAR_10->next_to_watch = ((void*)0);

  VAR_11->buffer_addr = 0;
  VAR_11->cmd_type_offset_bsz = 0;

  VAR_10++;
  VAR_11++;
  VAR_9++;
  if (FUNC_10(!VAR_9)) {
   VAR_9 -= VAR_6->count;
   VAR_10 = VAR_6->tx_bi;
   VAR_11 = FUNC_0(VAR_6, 0);
  }

  FUNC_5(VAR_6->dev,
     FUNC_2(VAR_10, VAR_4),
     FUNC_3(VAR_10, VAR_5),
     VAR_0);
  if (VAR_10->tx_flags & VAR_3)
   FUNC_7(VAR_10->raw_buf);

  VAR_10->raw_buf = ((void*)0);
  VAR_10->tx_flags = 0;
  VAR_10->next_to_watch = ((void*)0);
  FUNC_4(VAR_10, VAR_5, 0);
  VAR_11->buffer_addr = 0;
  VAR_11->cmd_type_offset_bsz = 0;


  VAR_10++;
  VAR_11++;
  VAR_9++;
  if (FUNC_10(!VAR_9)) {
   VAR_9 -= VAR_6->count;
   VAR_10 = VAR_6->tx_bi;
   VAR_11 = FUNC_0(VAR_6, 0);
  }


  VAR_7--;
 } while (FUNC_8(VAR_7));

 VAR_9 += VAR_6->count;
 VAR_6->next_to_clean = VAR_9;

 if (VAR_8->back->flags & VAR_1)
  FUNC_6(VAR_8, VAR_6->q_vector->v_idx);

 return VAR_7 > 0;
}
