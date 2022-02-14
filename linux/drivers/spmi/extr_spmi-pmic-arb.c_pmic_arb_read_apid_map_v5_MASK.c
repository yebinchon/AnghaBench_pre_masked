
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u32 ;
typedef size_t u16 ;
struct spmi_pmic_arb {scalar_t__ core_size; scalar_t__ core; scalar_t__ cnfg; size_t* ppid_to_apid; scalar_t__ ee; size_t last_apid; TYPE_2__* spmic; struct apid_data* apid_data; TYPE_1__* ver_ops; } ;
struct apid_data {scalar_t__ write_ee; scalar_t__ irq_ee; size_t ppid; } ;
struct TYPE_4__ {int dev; } ;
struct TYPE_3__ {scalar_t__ (* apid_map_offset ) (size_t) ;} ;


 scalar_t__ VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (scalar_t__) ;
 size_t VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (size_t) ;
 int FUNC_3 (int *,char*,...) ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 scalar_t__ FUNC_5 (size_t) ;

__attribute__((used)) static int FUNC_6(struct spmi_pmic_arb *VAR_4)
{
 struct apid_data *VAR_5 = VAR_4->apid_data;
 struct apid_data *VAR_6;
 u16 VAR_7, VAR_8, VAR_9;
 bool VAR_10, VAR_11;
 u32 VAR_12, VAR_13;
 for (VAR_7 = 0; ; VAR_7++, VAR_5++) {
  VAR_13 = VAR_4->ver_ops->apid_map_offset(VAR_7);
  if (VAR_13 >= VAR_4->core_size)
   break;

  VAR_12 = FUNC_4(VAR_4->core + VAR_13);
  if (!VAR_12)
   continue;
  VAR_9 = (VAR_12 >> 8) & VAR_3;
  VAR_11 = FUNC_0(VAR_12);

  VAR_12 = FUNC_4(VAR_4->cnfg +
          FUNC_2(VAR_7));
  VAR_5->write_ee = FUNC_1(VAR_12);

  VAR_5->irq_ee = VAR_11 ? VAR_5->write_ee : VAR_0;

  VAR_10 = VAR_4->ppid_to_apid[VAR_9] & VAR_1;
  VAR_8 = VAR_4->ppid_to_apid[VAR_9] & ~VAR_1;
  VAR_6 = &VAR_4->apid_data[VAR_8];

  if (VAR_10 && VAR_11 &&
    VAR_6->write_ee == VAR_4->ee) {




   VAR_6->irq_ee = VAR_5->irq_ee;
  } else if (!VAR_10 || VAR_11) {

   VAR_4->ppid_to_apid[VAR_9] = VAR_7 | VAR_1;
  }

  VAR_5->ppid = VAR_9;
  VAR_4->last_apid = VAR_7;
 }


 FUNC_3(&VAR_4->spmic->dev, "PPID APID Write-EE IRQ-EE\n");
 for (VAR_9 = 0; VAR_9 < VAR_2; VAR_9++) {
  VAR_8 = VAR_4->ppid_to_apid[VAR_9];
  if (VAR_8 & VAR_1) {
   VAR_8 &= ~VAR_1;
   VAR_5 = &VAR_4->apid_data[VAR_8];
   FUNC_3(&VAR_4->spmic->dev, "%#03X %3u %2u %2u\n",
         VAR_9, VAR_8, VAR_5->write_ee, VAR_5->irq_ee);
  }
 }

 return 0;
}
