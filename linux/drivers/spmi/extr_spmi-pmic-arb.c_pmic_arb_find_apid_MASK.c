
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
typedef size_t u16 ;
struct spmi_pmic_arb {size_t last_apid; scalar_t__ core_size; scalar_t__ cnfg; scalar_t__ core; size_t* ppid_to_apid; TYPE_1__* ver_ops; struct apid_data* apid_data; } ;
struct apid_data {size_t ppid; int irq_ee; int write_ee; } ;
struct TYPE_2__ {scalar_t__ (* apid_map_offset ) (size_t) ;} ;


 size_t VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (size_t) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (size_t) ;

__attribute__((used)) static u16 FUNC_4(struct spmi_pmic_arb *VAR_2, u16 VAR_3)
{
 struct apid_data *VAR_4 = &VAR_2->apid_data[VAR_2->last_apid];
 u32 VAR_5, VAR_6;
 u16 VAR_7, VAR_8;

 for (VAR_8 = VAR_2->last_apid; ; VAR_8++, VAR_4++) {
  VAR_6 = VAR_2->ver_ops->apid_map_offset(VAR_8);
  if (VAR_6 >= VAR_2->core_size)
   break;

  VAR_5 = FUNC_2(VAR_2->cnfg +
          FUNC_1(VAR_8));
  VAR_4->irq_ee = FUNC_0(VAR_5);
  VAR_4->write_ee = VAR_4->irq_ee;

  VAR_5 = FUNC_2(VAR_2->core + VAR_6);
  if (!VAR_5)
   continue;

  VAR_7 = (VAR_5 >> 8) & VAR_1;
  VAR_2->ppid_to_apid[VAR_7] = VAR_8 | VAR_0;
  VAR_4->ppid = VAR_7;
  if (VAR_7 == VAR_3) {
   VAR_8 |= VAR_0;
   break;
  }
 }
 VAR_2->last_apid = VAR_8 & ~VAR_0;

 return VAR_8;
}
