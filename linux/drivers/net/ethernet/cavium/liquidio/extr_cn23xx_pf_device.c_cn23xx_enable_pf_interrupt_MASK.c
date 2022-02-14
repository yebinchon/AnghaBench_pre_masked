
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u64 ;
struct TYPE_2__ {scalar_t__ max_vfs; } ;
struct octeon_device {scalar_t__ rev_id; TYPE_1__ sriov_info; scalar_t__ chip; } ;
struct octeon_cn23xx_pf {int intr_enb_reg64; int intr_mask64; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;

__attribute__((used)) static void FUNC_2(struct octeon_device *VAR_6, u8 VAR_7)
{
 struct octeon_cn23xx_pf *VAR_8 = (struct octeon_cn23xx_pf *)VAR_6->chip;
 u64 VAR_9 = 0;



 if (VAR_7 == VAR_2) {
  FUNC_1(VAR_8->intr_mask64, VAR_8->intr_enb_reg64);
 } else if (VAR_7 & VAR_5) {
  VAR_9 = FUNC_0(VAR_8->intr_enb_reg64);
  VAR_9 |= VAR_0;
  FUNC_1(VAR_9, VAR_8->intr_enb_reg64);
 } else if ((VAR_7 & VAR_4) &&
     (VAR_6->sriov_info.max_vfs > 0)) {
  if (VAR_6->rev_id >= VAR_3) {
   VAR_9 = FUNC_0(VAR_8->intr_enb_reg64);
   VAR_9 |= VAR_1;
   FUNC_1(VAR_9, VAR_8->intr_enb_reg64);
  }
 }
}
