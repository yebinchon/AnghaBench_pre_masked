
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct lpfc_hba {int ha_copy; int hba_flag; int cfg_multi_ring_support; int hbalock; int HAregaddr; int HCregaddr; } ;
typedef scalar_t__ irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 scalar_t__ FUNC_0 (struct lpfc_hba*) ;
 scalar_t__ FUNC_1 (int ,int*) ;
 scalar_t__ FUNC_2 (int,void*) ;
 scalar_t__ FUNC_3 (int,void*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (int) ;
 int FUNC_8 (int,int ) ;

irqreturn_t
FUNC_9(int VAR_17, void *VAR_18)
{
 struct lpfc_hba *VAR_19;
 irqreturn_t VAR_20, VAR_21;
 unsigned long VAR_22, VAR_23;
 uint32_t VAR_24;





 VAR_19 = (struct lpfc_hba *) VAR_18;

 if (FUNC_7(!VAR_19))
  return VAR_13;


 if (FUNC_0(VAR_19))
  return VAR_13;

 FUNC_5(&VAR_19->hbalock);
 if (FUNC_1(VAR_19->HAregaddr, &VAR_19->ha_copy)) {
  FUNC_6(&VAR_19->hbalock);
  return VAR_12;
 }

 if (FUNC_7(!VAR_19->ha_copy)) {
  FUNC_6(&VAR_19->hbalock);
  return VAR_13;
 } else if (VAR_19->ha_copy & VAR_1) {
  if (VAR_19->hba_flag & VAR_5)

   VAR_19->ha_copy &= ~VAR_1;
  else

   VAR_19->hba_flag |= VAR_5;
 }




 if (FUNC_7(VAR_19->hba_flag & VAR_0)) {
  FUNC_6(&VAR_19->hbalock);
  return VAR_13;
 }


 if (FUNC_1(VAR_19->HCregaddr, &VAR_24)) {
  FUNC_6(&VAR_19->hbalock);
  return VAR_12;
 }
 FUNC_8(VAR_24 & ~(VAR_8 | VAR_9 | VAR_10
  | VAR_11 | VAR_7 | VAR_6),
  VAR_19->HCregaddr);
 FUNC_8((VAR_19->ha_copy & ~(VAR_2 | VAR_1)), VAR_19->HAregaddr);
 FUNC_8(VAR_24, VAR_19->HCregaddr);
 FUNC_4(VAR_19->HAregaddr);
 FUNC_6(&VAR_19->hbalock);






 VAR_22 = VAR_19->ha_copy & (VAR_3 | VAR_2 | VAR_1);


 VAR_23 = (VAR_19->ha_copy & (VAR_4 << (4*VAR_14)));
 VAR_23 >>= (4*VAR_14);

 if (VAR_22 || (VAR_23 & VAR_4))
  VAR_20 = FUNC_3(VAR_17, VAR_18);
 else
  VAR_20 = VAR_13;






 VAR_22 = (VAR_19->ha_copy & (VAR_4 << (4*VAR_16)));
 VAR_22 >>= (4*VAR_16);


 if (VAR_19->cfg_multi_ring_support == 2) {
  VAR_23 = (VAR_19->ha_copy & (VAR_4 << (4*VAR_15)));
  VAR_23 >>= (4*VAR_15);
 } else
  VAR_23 = 0;

 if ((VAR_22 & VAR_4) || (VAR_23 & VAR_4))
  VAR_21 = FUNC_2(VAR_17, VAR_18);
 else
  VAR_21 = VAR_13;


 return (VAR_20 == VAR_12) ? VAR_20 : VAR_21;
}
