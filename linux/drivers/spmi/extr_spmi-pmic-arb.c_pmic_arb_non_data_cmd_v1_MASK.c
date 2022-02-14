
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct spmi_pmic_arb {int lock; int wr_base; TYPE_1__* ver_ops; } ;
struct spmi_controller {int dummy; } ;
struct TYPE_2__ {int (* offset ) (struct spmi_pmic_arb*,int,int ,int ) ;} ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct spmi_pmic_arb*,scalar_t__,int) ;
 int FUNC_1 (struct spmi_controller*,int ,int,int ,int ) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 struct spmi_pmic_arb* FUNC_4 (struct spmi_controller*) ;
 int FUNC_5 (struct spmi_pmic_arb*,int,int ,int ) ;

__attribute__((used)) static int
FUNC_6(struct spmi_controller *VAR_2, u8 VAR_3, u8 VAR_4)
{
 struct spmi_pmic_arb *VAR_5 = FUNC_4(VAR_2);
 unsigned long VAR_6;
 u32 VAR_7;
 int VAR_8;
 u32 VAR_9;

 VAR_8 = VAR_5->ver_ops->offset(VAR_5, VAR_4, 0, VAR_0);
 if (VAR_8 < 0)
  return VAR_8;

 VAR_9 = VAR_8;
 VAR_7 = ((VAR_3 | 0x40) << 27) | ((VAR_4 & 0xf) << 20);

 FUNC_2(&VAR_5->lock, VAR_6);
 FUNC_0(VAR_5, VAR_9 + VAR_1, VAR_7);
 VAR_8 = FUNC_1(VAR_2, VAR_5->wr_base, VAR_4, 0,
        VAR_0);
 FUNC_3(&VAR_5->lock, VAR_6);

 return VAR_8;
}
