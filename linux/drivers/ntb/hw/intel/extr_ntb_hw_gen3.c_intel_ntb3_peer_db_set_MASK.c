
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct ntb_dev {int dummy; } ;
struct intel_ntb_dev {int db_valid_mask; TYPE_1__* peer_reg; scalar_t__ peer_mmio; } ;
struct TYPE_2__ {scalar_t__ db_bell; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int,scalar_t__) ;
 struct intel_ntb_dev* FUNC_2 (struct ntb_dev*) ;

__attribute__((used)) static int FUNC_3(struct ntb_dev *VAR_1, u64 VAR_2)
{
 struct intel_ntb_dev *VAR_3 = FUNC_2(VAR_1);
 int VAR_4;

 if (VAR_2 & ~VAR_3->db_valid_mask)
  return -VAR_0;

 while (VAR_2) {
  VAR_4 = FUNC_0(VAR_2);
  FUNC_1(1, VAR_3->peer_mmio +
    VAR_3->peer_reg->db_bell + (VAR_4 * 4));
  VAR_2 &= VAR_2 - 1;
 }

 return 0;
}
