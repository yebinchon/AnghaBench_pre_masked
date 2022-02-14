
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u16 ;
struct TYPE_6__ {int pdev; } ;
struct intel_ntb_dev {scalar_t__ lnk_sta; TYPE_3__ ntb; TYPE_2__* self_reg; scalar_t__ self_mmio; int db_link_mask; TYPE_1__* reg; } ;
struct TYPE_5__ {scalar_t__ db_bell; } ;
struct TYPE_4__ {int (* db_iowrite ) (int ,scalar_t__) ;} ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,scalar_t__*) ;
 int FUNC_1 (int ,scalar_t__) ;

__attribute__((used)) static int FUNC_2(struct intel_ntb_dev *VAR_1)
{
 u16 VAR_2;
 int VAR_3;

 VAR_1->reg->db_iowrite(VAR_1->db_link_mask,
         VAR_1->self_mmio +
         VAR_1->self_reg->db_bell);

 VAR_3 = FUNC_0(VAR_1->ntb.pdev,
      VAR_0, &VAR_2);
 if (VAR_3)
  return 0;

 if (VAR_2 == VAR_1->lnk_sta)
  return 0;

 VAR_1->lnk_sta = VAR_2;

 return 1;
}
