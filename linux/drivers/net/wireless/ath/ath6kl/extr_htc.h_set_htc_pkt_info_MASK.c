
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct TYPE_3__ {int tag; } ;
struct TYPE_4__ {TYPE_1__ tx; } ;
struct htc_packet {unsigned int act_len; int endpoint; TYPE_2__ info; int * buf; void* pkt_cntxt; } ;
typedef enum htc_endpoint_id { ____Placeholder_htc_endpoint_id } htc_endpoint_id ;



__attribute__((used)) static inline void FUNC_0(struct htc_packet *VAR_0, void *VAR_1,
        u8 *VAR_2, unsigned int VAR_3,
        enum htc_endpoint_id VAR_4, u16 VAR_5)
{
 VAR_0->pkt_cntxt = VAR_1;
 VAR_0->buf = VAR_2;
 VAR_0->act_len = VAR_3;
 VAR_0->endpoint = VAR_4;
 VAR_0->info.tx.tag = VAR_5;
}
