
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef size_t u32 ;
struct octeon_droq {int * pkts_credit_reg; int * pkts_sent_reg; int buffer_size; int max_count; int desc_ring_dma; } ;
struct octeon_device {TYPE_1__* mmio; struct octeon_droq** droq; } ;
struct TYPE_2__ {scalar_t__ hw_addr; } ;


 int FUNC_0 (size_t) ;
 int FUNC_1 (size_t) ;
 int FUNC_2 (size_t) ;
 int FUNC_3 (size_t) ;
 int FUNC_4 (size_t) ;
 int FUNC_5 (struct octeon_device*,int ,int ) ;
 int FUNC_6 (struct octeon_device*,int ,int ) ;

__attribute__((used)) static void FUNC_7(struct octeon_device *VAR_0, u32 VAR_1)
{
 struct octeon_droq *VAR_2 = VAR_0->droq[VAR_1];

 FUNC_6(VAR_0, FUNC_0(VAR_1),
      VAR_2->desc_ring_dma);
 FUNC_5(VAR_0, FUNC_4(VAR_1), VAR_2->max_count);

 FUNC_5(VAR_0, FUNC_1(VAR_1),
    VAR_2->buffer_size);


 VAR_2->pkts_sent_reg =
     (u8 *)VAR_0->mmio[0].hw_addr + FUNC_3(VAR_1);
 VAR_2->pkts_credit_reg =
     (u8 *)VAR_0->mmio[0].hw_addr + FUNC_2(VAR_1);
}
