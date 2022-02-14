
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct TYPE_2__ {scalar_t__ produce_idx; scalar_t__ consume_idx; scalar_t__ count; } ;
struct emac_tx_queue {TYPE_1__ tpd; } ;



__attribute__((used)) static unsigned int FUNC_0(struct emac_tx_queue *VAR_0)
{
 u32 VAR_1 = VAR_0->tpd.produce_idx;
 u32 VAR_2 = VAR_0->tpd.consume_idx;

 return (VAR_2 > VAR_1) ?
  (VAR_2 - VAR_1 - 1) :
  (VAR_0->tpd.count + VAR_2 - VAR_1 - 1);
}
