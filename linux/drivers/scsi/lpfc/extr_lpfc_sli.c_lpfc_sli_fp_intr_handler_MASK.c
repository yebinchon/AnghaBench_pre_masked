
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct lpfc_sli_ring {int dummy; } ;
struct TYPE_2__ {struct lpfc_sli_ring* sli3_ring; } ;
struct lpfc_hba {scalar_t__ intr_type; int hba_flag; int ha_copy; int work_ha_mask; int cfg_multi_ring_support; TYPE_1__ sli; int hbalock; int HAregaddr; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ FUNC_0 (struct lpfc_hba*) ;
 scalar_t__ FUNC_1 (int ,int*) ;
 int FUNC_2 (struct lpfc_hba*,struct lpfc_sli_ring*,unsigned long) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;
 scalar_t__ FUNC_6 (int) ;
 int FUNC_7 (int,int ) ;

irqreturn_t
FUNC_8(int VAR_9, void *VAR_10)
{
 struct lpfc_hba *VAR_11;
 uint32_t VAR_12;
 unsigned long VAR_13;
 unsigned long VAR_14;
 struct lpfc_sli_ring *VAR_15;




 VAR_11 = (struct lpfc_hba *) VAR_10;

 if (FUNC_6(!VAR_11))
  return VAR_5;





 if (VAR_11->intr_type == VAR_8) {

  if (FUNC_0(VAR_11))
   return VAR_5;

  if (FUNC_1(VAR_11->HAregaddr, &VAR_12))
   return VAR_4;

  FUNC_4(&VAR_11->hbalock, VAR_14);




  if (FUNC_6(VAR_11->hba_flag & VAR_0)) {
   FUNC_5(&VAR_11->hbalock, VAR_14);
   return VAR_5;
  }
  FUNC_7((VAR_12 & (VAR_1 | VAR_2)),
   VAR_11->HAregaddr);
  FUNC_3(VAR_11->HAregaddr);
  FUNC_5(&VAR_11->hbalock, VAR_14);
 } else
  VAR_12 = VAR_11->ha_copy;




 VAR_12 &= ~(VAR_11->work_ha_mask);

 VAR_13 = (VAR_12 & (VAR_3 << (4*VAR_7)));
 VAR_13 >>= (4*VAR_7);
 VAR_15 = &VAR_11->sli.sli3_ring[VAR_7];
 if (VAR_13 & VAR_3)
  FUNC_2(VAR_11, VAR_15, VAR_13);

 if (VAR_11->cfg_multi_ring_support == 2) {




  VAR_13 = (VAR_12 & (VAR_3 << (4*VAR_6)));
  VAR_13 >>= (4*VAR_6);
  if (VAR_13 & VAR_3) {
   FUNC_2(VAR_11,
     &VAR_11->sli.sli3_ring[VAR_6],
     VAR_13);
  }
 }
 return VAR_4;
}
