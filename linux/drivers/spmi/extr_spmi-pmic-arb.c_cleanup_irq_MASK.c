
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
typedef size_t u16 ;
struct spmi_pmic_arb {TYPE_3__* spmic; TYPE_2__* ver_ops; TYPE_1__* apid_data; } ;
struct TYPE_6__ {int dev; } ;
struct TYPE_5__ {int (* irq_clear ) (struct spmi_pmic_arb*,size_t) ;} ;
struct TYPE_4__ {size_t ppid; } ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *,char*,int,size_t) ;
 scalar_t__ FUNC_2 (TYPE_3__*,int ,int,scalar_t__,int*,int) ;
 int FUNC_3 (struct spmi_pmic_arb*,size_t) ;
 int FUNC_4 (int,int ) ;

__attribute__((used)) static void FUNC_5(struct spmi_pmic_arb *VAR_3, u16 VAR_4, int VAR_5)
{
 u16 VAR_6 = VAR_3->apid_data[VAR_4].ppid;
 u8 VAR_7 = VAR_6 >> 8;
 u8 VAR_8 = VAR_6 & 0xFF;
 u8 VAR_9 = FUNC_0(VAR_5);

 FUNC_4(VAR_9, VAR_3->ver_ops->irq_clear(VAR_3, VAR_4));

 if (FUNC_2(VAR_3->spmic, VAR_2, VAR_7,
   (VAR_8 << 8) + VAR_1, &VAR_9, 1))
  FUNC_1(&VAR_3->spmic->dev, "failed to ack irq_mask = 0x%x for ppid = %x\n",
    VAR_9, VAR_6);

 if (FUNC_2(VAR_3->spmic, VAR_2, VAR_7,
          (VAR_8 << 8) + VAR_0, &VAR_9, 1))
  FUNC_1(&VAR_3->spmic->dev, "failed to ack irq_mask = 0x%x for ppid = %x\n",
    VAR_9, VAR_6);
}
