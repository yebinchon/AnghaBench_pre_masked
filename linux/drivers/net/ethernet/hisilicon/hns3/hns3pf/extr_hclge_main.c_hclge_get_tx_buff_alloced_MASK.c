
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u32 ;
struct hclge_pkt_buf_alloc {TYPE_1__* priv_buf; } ;
struct TYPE_2__ {scalar_t__ tx_buf_size; } ;


 size_t VAR_0 ;

__attribute__((used)) static u32 FUNC_0(struct hclge_pkt_buf_alloc *VAR_1)
{
 u32 VAR_2, VAR_3 = 0;

 for (VAR_2 = 0; VAR_2 < VAR_0; VAR_2++)
  VAR_3 += VAR_1->priv_buf[VAR_2].tx_buf_size;

 return VAR_3;
}
