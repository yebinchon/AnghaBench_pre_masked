
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u32 ;
struct sas_ha_struct {scalar_t__ lldd_ha; } ;
struct mvs_prv_info {size_t n_host; struct mvs_info** mvi; int mv_tasklet; } ;
struct mvs_info {int dummy; } ;
typedef int irqreturn_t ;
struct TYPE_2__ {size_t (* isr_status ) (struct mvs_info*,int) ;int (* isr ) (struct mvs_info*,int,size_t) ;int (* interrupt_enable ) (struct mvs_info*) ;int (* interrupt_disable ) (struct mvs_info*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* VAR_2 ;
 int FUNC_0 (struct mvs_info*) ;
 size_t FUNC_1 (struct mvs_info*,int) ;
 int FUNC_2 (struct mvs_info*) ;
 int FUNC_3 (struct mvs_info*,int,size_t) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int) ;

__attribute__((used)) static irqreturn_t FUNC_6(int VAR_3, void *VAR_4)
{
 u32 VAR_5;
 u32 VAR_6;
 struct mvs_info *VAR_7;
 struct sas_ha_struct *VAR_8 = VAR_4;

 u32 VAR_9;


 VAR_5 = ((struct mvs_prv_info *)VAR_8->lldd_ha)->n_host;
 VAR_7 = ((struct mvs_prv_info *)VAR_8->lldd_ha)->mvi[0];

 if (FUNC_5(!VAR_7))
  return VAR_1;




 VAR_6 = VAR_2->isr_status(VAR_7, VAR_3);
 if (!VAR_6) {



  return VAR_1;
 }




 for (VAR_9 = 0; VAR_9 < VAR_5; VAR_9++) {
  VAR_7 = ((struct mvs_prv_info *)VAR_8->lldd_ha)->mvi[VAR_9];
  VAR_2->isr(VAR_7, VAR_3, VAR_6);
 }

 return VAR_0;
}
