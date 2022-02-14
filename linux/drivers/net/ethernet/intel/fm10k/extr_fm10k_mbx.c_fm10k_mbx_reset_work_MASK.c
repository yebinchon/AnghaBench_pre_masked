
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u16 ;
struct TYPE_2__ {scalar_t__ head; scalar_t__ tail; scalar_t__ size; } ;
struct fm10k_mbx_info {scalar_t__ pulled; scalar_t__ tail_len; TYPE_1__ rx; scalar_t__ head_len; scalar_t__ pushed; int tx_dropped; int tx; int tail; int mbx_hdr; scalar_t__ max_size; } ;


 scalar_t__ FUNC_0 (int ,int ) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (struct fm10k_mbx_info*,scalar_t__,int ) ;

__attribute__((used)) static void FUNC_4(struct fm10k_mbx_info *VAR_1)
{
 u16 VAR_2, VAR_3, VAR_4;


 VAR_1->max_size = VAR_1->rx.size - 1;


 VAR_3 = FUNC_0(VAR_1->mbx_hdr, VAR_0);
 VAR_4 = FUNC_3(VAR_1, VAR_3, VAR_1->tail);
 VAR_1->pulled += VAR_1->tail_len - VAR_4;


 while (FUNC_2(&VAR_1->tx) && VAR_1->pulled) {
  VAR_2 = FUNC_1(&VAR_1->tx);
  VAR_1->tx_dropped++;
  if (VAR_1->pulled >= VAR_2)
   VAR_1->pulled -= VAR_2;
  else
   VAR_1->pulled = 0;
 }


 VAR_1->pushed = 0;
 VAR_1->pulled = 0;
 VAR_1->tail_len = 0;
 VAR_1->head_len = 0;
 VAR_1->rx.tail = 0;
 VAR_1->rx.head = 0;
}
