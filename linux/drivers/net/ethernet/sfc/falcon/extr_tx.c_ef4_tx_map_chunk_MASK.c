
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ef4_tx_queue {int insert_count; TYPE_1__* efx; } ;
struct ef4_tx_buffer {unsigned int len; unsigned int dma_addr; int flags; } ;
struct ef4_nic_type {unsigned int (* tx_limit_len ) (struct ef4_tx_queue*,unsigned int,size_t) ;} ;
typedef unsigned int dma_addr_t ;
struct TYPE_2__ {struct ef4_nic_type* type; } ;


 int VAR_0 ;
 struct ef4_tx_buffer* FUNC_0 (struct ef4_tx_queue*) ;
 unsigned int FUNC_1 (struct ef4_tx_queue*,unsigned int,size_t) ;

__attribute__((used)) static struct ef4_tx_buffer *FUNC_2(struct ef4_tx_queue *VAR_1,
           dma_addr_t VAR_2,
           size_t VAR_3)
{
 const struct ef4_nic_type *VAR_4 = VAR_1->efx->type;
 struct ef4_tx_buffer *VAR_5;
 unsigned int VAR_6;


 do {
  VAR_5 = FUNC_0(VAR_1);
  VAR_6 = VAR_4->tx_limit_len(VAR_1, VAR_2, VAR_3);

  VAR_5->len = VAR_6;
  VAR_5->dma_addr = VAR_2;
  VAR_5->flags = VAR_0;
  VAR_3 -= VAR_6;
  VAR_2 += VAR_6;
  ++VAR_1->insert_count;
 } while (VAR_3);

 return VAR_5;
}
