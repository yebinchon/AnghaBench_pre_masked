
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
struct scatterlist {int dummy; } ;
struct qla2_sgx {scalar_t__ num_bytes; scalar_t__ tot_bytes; scalar_t__ tot_partial; scalar_t__ dma_addr; scalar_t__ bytes_consumed; scalar_t__ dma_len; struct scatterlist* cur_sg; int num_sg; } ;
typedef scalar_t__ dma_addr_t ;


 scalar_t__ FUNC_0 (struct scatterlist*) ;
 scalar_t__ FUNC_1 (struct scatterlist*) ;
 struct scatterlist* FUNC_2 (struct scatterlist*) ;

int
FUNC_3(uint32_t VAR_0, struct qla2_sgx *VAR_1,
 uint32_t *VAR_2)
{
 struct scatterlist *VAR_3;
 uint32_t VAR_4, VAR_5;
 dma_addr_t VAR_6;

 if (VAR_1->num_bytes == VAR_1->tot_bytes)
  return 0;

 VAR_3 = VAR_1->cur_sg;
 VAR_4 = VAR_1->tot_partial;

 VAR_6 = FUNC_0(VAR_3);
 VAR_5 = FUNC_1(VAR_3);

 VAR_1->dma_addr = VAR_6 + VAR_1->bytes_consumed;

 if ((VAR_4 + (VAR_5 - VAR_1->bytes_consumed)) >= VAR_0) {
  VAR_1->dma_len = (VAR_0 - VAR_4);
  VAR_1->tot_partial = 0;
  VAR_1->num_bytes += VAR_0;
  *VAR_2 = 0;
 } else {
  VAR_1->dma_len = VAR_5 - VAR_1->bytes_consumed;
  VAR_1->tot_partial += VAR_1->dma_len;
  *VAR_2 = 1;
 }

 VAR_1->bytes_consumed += VAR_1->dma_len;

 if (VAR_5 == VAR_1->bytes_consumed) {
  VAR_3 = FUNC_2(VAR_3);
  VAR_1->num_sg++;
  VAR_1->cur_sg = VAR_3;
  VAR_1->bytes_consumed = 0;
 }

 return 1;
}
