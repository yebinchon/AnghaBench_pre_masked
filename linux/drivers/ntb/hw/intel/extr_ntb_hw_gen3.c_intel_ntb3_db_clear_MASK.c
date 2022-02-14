
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct ntb_dev {int dummy; } ;
struct intel_ntb_dev {TYPE_1__* self_reg; scalar_t__ self_mmio; } ;
struct TYPE_2__ {scalar_t__ db_clear; } ;


 int FUNC_0 (struct intel_ntb_dev*,int ,scalar_t__) ;
 struct intel_ntb_dev* FUNC_1 (struct ntb_dev*) ;

__attribute__((used)) static int FUNC_2(struct ntb_dev *VAR_0, u64 VAR_1)
{
 struct intel_ntb_dev *VAR_2 = FUNC_1(VAR_0);

 return FUNC_0(VAR_2, VAR_1,
        VAR_2->self_mmio +
        VAR_2->self_reg->db_clear);
}
