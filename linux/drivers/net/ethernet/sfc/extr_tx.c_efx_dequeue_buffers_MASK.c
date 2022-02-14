
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct efx_tx_queue {unsigned int ptr_mask; unsigned int read_count; int queue; struct efx_tx_buffer* buffer; struct efx_nic* efx; } ;
struct efx_tx_buffer {int flags; scalar_t__ len; } ;
struct efx_nic {int net_dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct efx_tx_queue*,struct efx_tx_buffer*,unsigned int*,unsigned int*) ;
 int FUNC_1 (struct efx_nic*,int ) ;
 int FUNC_2 (struct efx_nic*,int ,int ,char*,int ,unsigned int) ;
 int VAR_2 ;
 scalar_t__ FUNC_3 (int) ;

__attribute__((used)) static void FUNC_4(struct efx_tx_queue *VAR_3,
    unsigned int VAR_4,
    unsigned int *VAR_5,
    unsigned int *VAR_6)
{
 struct efx_nic *VAR_7 = VAR_3->efx;
 unsigned int VAR_8, VAR_9;

 VAR_8 = (VAR_4 + 1) & VAR_3->ptr_mask;
 VAR_9 = VAR_3->read_count & VAR_3->ptr_mask;

 while (VAR_9 != VAR_8) {
  struct efx_tx_buffer *VAR_10 = &VAR_3->buffer[VAR_9];

  if (!(VAR_10->flags & VAR_0) &&
      FUNC_3(VAR_10->len == 0)) {
   FUNC_2(VAR_7, VAR_2, VAR_7->net_dev,
      "TX queue %d spurious TX completion id %x\n",
      VAR_3->queue, VAR_9);
   FUNC_1(VAR_7, VAR_1);
   return;
  }

  FUNC_0(VAR_3, VAR_10, VAR_5, VAR_6);

  ++VAR_3->read_count;
  VAR_9 = VAR_3->read_count & VAR_3->ptr_mask;
 }
}
