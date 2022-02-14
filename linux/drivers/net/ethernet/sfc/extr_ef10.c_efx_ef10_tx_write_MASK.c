
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct efx_tx_queue {unsigned int write_count; int xmit_more_available; unsigned int insert_count; unsigned int ptr_mask; unsigned int packet_write_count; int pushes; struct efx_tx_buffer* buffer; } ;
struct efx_tx_buffer {int flags; int dma_addr; int len; int option; } ;
typedef int efx_qword_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ,int ,int,int ,int ,int ,int ) ;
 int FUNC_2 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (struct efx_tx_queue*) ;
 int FUNC_4 (struct efx_tx_queue*,int *) ;
 scalar_t__ FUNC_5 (struct efx_tx_queue*,unsigned int) ;
 int * FUNC_6 (struct efx_tx_queue*,unsigned int) ;
 scalar_t__ FUNC_7 (int) ;
 int FUNC_8 () ;

__attribute__((used)) static void FUNC_9(struct efx_tx_queue *VAR_6)
{
 unsigned int VAR_7 = VAR_6->write_count;
 struct efx_tx_buffer *VAR_8;
 unsigned int VAR_9;
 efx_qword_t *VAR_10;

 VAR_6->xmit_more_available = 0;
 if (FUNC_7(VAR_6->write_count == VAR_6->insert_count))
  return;

 do {
  VAR_9 = VAR_6->write_count & VAR_6->ptr_mask;
  VAR_8 = &VAR_6->buffer[VAR_9];
  VAR_10 = FUNC_6(VAR_6, VAR_9);
  ++VAR_6->write_count;


  if (VAR_8->flags & VAR_1) {
   *VAR_10 = VAR_8->option;
   if (FUNC_2(*VAR_10, VAR_5) == 1)

    VAR_6->packet_write_count = VAR_6->write_count;
  } else {
   VAR_6->packet_write_count = VAR_6->write_count;
   FUNC_0(VAR_0 != 1);
   FUNC_1(
    *VAR_10,
    VAR_4,
    VAR_8->flags & VAR_0,
    VAR_3, VAR_8->len,
    VAR_2, VAR_8->dma_addr);
  }
 } while (VAR_6->write_count != VAR_6->insert_count);

 FUNC_8();

 if (FUNC_5(VAR_6, VAR_7)) {
  VAR_10 = FUNC_6(VAR_6,
      VAR_7 & VAR_6->ptr_mask);
  FUNC_4(VAR_6, VAR_10);
  ++VAR_6->pushes;
 } else {
  FUNC_3(VAR_6);
 }
}
