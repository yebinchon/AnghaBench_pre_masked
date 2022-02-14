
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct htc_packet {unsigned long buf_len; int endpoint; int * buf_start; int * buf; void* pkt_cntxt; } ;
typedef enum htc_endpoint_id { ____Placeholder_htc_endpoint_id } htc_endpoint_id ;



__attribute__((used)) static inline void FUNC_0(struct htc_packet *VAR_0, void *VAR_1,
          u8 *VAR_2, unsigned long VAR_3,
          enum htc_endpoint_id VAR_4)
{
 VAR_0->pkt_cntxt = VAR_1;
 VAR_0->buf = VAR_2;
 VAR_0->buf_start = VAR_2;
 VAR_0->buf_len = VAR_3;
 VAR_0->endpoint = VAR_4;
}
