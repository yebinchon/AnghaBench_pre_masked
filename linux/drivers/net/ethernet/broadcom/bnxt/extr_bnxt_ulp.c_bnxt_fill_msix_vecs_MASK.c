
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct bnxt_msix_entry {int ring_idx; int db_offset; int vector; } ;
struct bnxt_en_dev {TYPE_1__* ulp_tbl; } ;
struct bnxt {TYPE_2__* irq_tbl; struct bnxt_en_dev* edev; } ;
struct TYPE_4__ {int vector; } ;
struct TYPE_3__ {int msix_requested; int msix_base; } ;


 size_t VAR_0 ;

__attribute__((used)) static void FUNC_0(struct bnxt *VAR_1, struct bnxt_msix_entry *VAR_2)
{
 struct bnxt_en_dev *VAR_3 = VAR_1->edev;
 int VAR_4, VAR_5, VAR_6;

 VAR_4 = VAR_3->ulp_tbl[VAR_0].msix_requested;
 VAR_5 = VAR_3->ulp_tbl[VAR_0].msix_base;
 for (VAR_6 = 0; VAR_6 < VAR_4; VAR_6++) {
  VAR_2[VAR_6].vector = VAR_1->irq_tbl[VAR_5 + VAR_6].vector;
  VAR_2[VAR_6].ring_idx = VAR_5 + VAR_6;
  VAR_2[VAR_6].db_offset = (VAR_5 + VAR_6) * 0x80;
 }
}
