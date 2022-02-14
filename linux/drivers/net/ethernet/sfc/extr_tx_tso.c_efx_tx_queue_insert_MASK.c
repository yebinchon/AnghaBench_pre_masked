
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct efx_tx_queue {scalar_t__ insert_count; scalar_t__ read_count; TYPE_2__* efx; } ;
struct efx_tx_buffer {unsigned int dma_addr; unsigned int len; int flags; } ;
typedef unsigned int dma_addr_t ;
struct TYPE_4__ {scalar_t__ txq_entries; TYPE_1__* type; } ;
struct TYPE_3__ {unsigned int (* tx_limit_len ) (struct efx_tx_queue*,unsigned int,unsigned int) ;} ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 struct efx_tx_buffer* FUNC_1 (struct efx_tx_queue*) ;
 unsigned int FUNC_2 (struct efx_tx_queue*,unsigned int,unsigned int) ;

__attribute__((used)) static void FUNC_3(struct efx_tx_queue *VAR_1,
    dma_addr_t VAR_2, unsigned int VAR_3,
    struct efx_tx_buffer **VAR_4)
{
 struct efx_tx_buffer *VAR_5;
 unsigned int VAR_6;

 FUNC_0(VAR_3 <= 0);

 while (1) {
  VAR_5 = FUNC_1(VAR_1);
  ++VAR_1->insert_count;

  FUNC_0(VAR_1->insert_count -
       VAR_1->read_count >=
       VAR_1->efx->txq_entries);

  VAR_5->dma_addr = VAR_2;

  VAR_6 = VAR_1->efx->type->tx_limit_len(VAR_1,
    VAR_2, VAR_3);


  if (VAR_6 >= VAR_3)
   break;

  VAR_5->len = VAR_6;
  VAR_5->flags = VAR_0;
  VAR_2 += VAR_6;
  VAR_3 -= VAR_6;
 }

 FUNC_0(!VAR_3);
 VAR_5->len = VAR_3;
 *VAR_4 = VAR_5;
}
