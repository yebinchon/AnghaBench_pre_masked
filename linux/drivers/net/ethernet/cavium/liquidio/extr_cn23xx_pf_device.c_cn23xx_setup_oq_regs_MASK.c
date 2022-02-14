
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u64 ;
typedef size_t u32 ;
struct octeon_droq {int desc_ring_dma; size_t max_count; size_t buffer_size; int * pkts_credit_reg; int * pkts_sent_reg; } ;
struct TYPE_3__ {scalar_t__ pf_srn; } ;
struct octeon_device {int msix_on; TYPE_2__* mmio; TYPE_1__ sriov_info; scalar_t__ chip; struct octeon_droq** droq; } ;
struct octeon_cn23xx_pf {int conf; } ;
struct TYPE_4__ {scalar_t__ hw_addr; } ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 size_t VAR_0 ;
 size_t VAR_1 ;
 int FUNC_2 (size_t) ;
 int FUNC_3 (size_t) ;
 int FUNC_4 (size_t) ;
 int FUNC_5 (size_t) ;
 int FUNC_6 (size_t) ;
 int FUNC_7 (size_t) ;
 int FUNC_8 (size_t) ;
 int FUNC_9 (struct octeon_device*,size_t) ;
 size_t FUNC_10 (struct octeon_device*,int ) ;
 int FUNC_11 (struct octeon_device*,int ,size_t) ;
 int FUNC_12 (struct octeon_device*,int ,int) ;

__attribute__((used)) static void FUNC_13(struct octeon_device *VAR_2, u32 VAR_3)
{
 u32 VAR_4;
 struct octeon_droq *VAR_5 = VAR_2->droq[VAR_3];
 struct octeon_cn23xx_pf *VAR_6 = (struct octeon_cn23xx_pf *)VAR_2->chip;
 u64 VAR_7;
 u64 VAR_8;

 VAR_3 += VAR_2->sriov_info.pf_srn;

 FUNC_12(VAR_2, FUNC_2(VAR_3),
      VAR_5->desc_ring_dma);
 FUNC_11(VAR_2, FUNC_8(VAR_3), VAR_5->max_count);

 FUNC_11(VAR_2, FUNC_3(VAR_3),
    VAR_5->buffer_size);


 VAR_5->pkts_sent_reg =
     (u8 *)VAR_2->mmio[0].hw_addr + FUNC_5(VAR_3);
 VAR_5->pkts_credit_reg =
     (u8 *)VAR_2->mmio[0].hw_addr + FUNC_4(VAR_3);

 if (!VAR_2->msix_on) {


  VAR_4 =
      FUNC_10(VAR_2, FUNC_6(VAR_3));
  VAR_4 |= VAR_1;
  FUNC_11(VAR_2, FUNC_6(VAR_3),
     VAR_4);



  VAR_4 =
      FUNC_10(VAR_2, FUNC_6(VAR_3));
  VAR_4 |= VAR_0;
  FUNC_11(VAR_2, FUNC_6(VAR_3),
     VAR_4);
 } else {
  VAR_7 = FUNC_9(
      VAR_2, (u32)FUNC_1(VAR_6->conf));
  VAR_8 = (u32)FUNC_0(VAR_6->conf);

  FUNC_12(
      VAR_2, FUNC_7(VAR_3),
      ((VAR_7 << 32 | VAR_8)));
 }
}
