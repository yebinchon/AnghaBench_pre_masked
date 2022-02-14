
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u32 ;
struct octeon_droq {size_t max_count; size_t buffer_size; scalar_t__ pkts_credit_reg; scalar_t__ pkts_sent_reg; int desc_ring_dma; } ;
struct octeon_device {TYPE_1__* mmio; struct octeon_droq** droq; } ;
struct TYPE_2__ {scalar_t__ hw_addr; } ;


 int FUNC_0 (size_t) ;
 int FUNC_1 (size_t) ;
 scalar_t__ FUNC_2 (size_t) ;
 scalar_t__ FUNC_3 (size_t) ;
 int FUNC_4 (size_t) ;
 int VAR_0 ;
 int VAR_1 ;
 size_t FUNC_5 (struct octeon_device*,int ) ;
 int FUNC_6 (struct octeon_device*,int ,size_t) ;
 int FUNC_7 (struct octeon_device*,int ,int ) ;

void FUNC_8(struct octeon_device *VAR_2, u32 VAR_3)
{
 u32 VAR_4;
 struct octeon_droq *VAR_5 = VAR_2->droq[VAR_3];

 FUNC_7(VAR_2, FUNC_0(VAR_3),
      VAR_5->desc_ring_dma);
 FUNC_6(VAR_2, FUNC_4(VAR_3), VAR_5->max_count);

 FUNC_6(VAR_2, FUNC_1(VAR_3),
    VAR_5->buffer_size);


 VAR_5->pkts_sent_reg =
  VAR_2->mmio[0].hw_addr + FUNC_3(VAR_3);
 VAR_5->pkts_credit_reg =
  VAR_2->mmio[0].hw_addr + FUNC_2(VAR_3);


 VAR_4 = FUNC_5(VAR_2, VAR_1);
 VAR_4 |= (1 << VAR_3);
 FUNC_6(VAR_2, VAR_1, VAR_4);


 VAR_4 = FUNC_5(VAR_2, VAR_0);
 VAR_4 |= (1 << VAR_3);
 FUNC_6(VAR_2, VAR_0, VAR_4);
}
