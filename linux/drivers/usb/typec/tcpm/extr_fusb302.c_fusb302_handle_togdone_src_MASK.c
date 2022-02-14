
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct fusb302_chip {size_t src_current_status; int toggling_mode; int cc1; int cc2; int intr_comp_chng; int tcpm_port; } ;
typedef enum typec_cc_status { ____Placeholder_typec_cc_status } typec_cc_status ;
typedef enum typec_cc_polarity { ____Placeholder_typec_cc_polarity } typec_cc_polarity ;
typedef enum toggling_mode { ____Placeholder_toggling_mode } toggling_mode ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int* VAR_10 ;
 int FUNC_0 (struct fusb302_chip*,int,int*) ;
 int FUNC_1 (struct fusb302_chip*,int ,int ) ;
 int FUNC_2 (struct fusb302_chip*,int ,scalar_t__) ;
 int FUNC_3 (struct fusb302_chip*,char*,int,...) ;
 int FUNC_4 (struct fusb302_chip*,int,int,int) ;
 int FUNC_5 (struct fusb302_chip*,int) ;
 scalar_t__* VAR_11 ;
 int FUNC_6 (int ) ;
 int* VAR_12 ;

__attribute__((used)) static int FUNC_7(struct fusb302_chip *VAR_13,
          u8 VAR_14)
{






 int VAR_15 = 0;
 u8 VAR_16 = VAR_11[VAR_13->src_current_status];
 enum toggling_mode VAR_17 = VAR_13->toggling_mode;
 enum typec_cc_polarity VAR_18;
 enum typec_cc_status VAR_19, VAR_20;






 if (VAR_14 == VAR_3)
  VAR_15 = FUNC_0(VAR_13, VAR_8, &VAR_19);
 else
  VAR_15 = FUNC_0(VAR_13, VAR_9, &VAR_20);
 if (VAR_15 < 0)
  return VAR_15;

 VAR_15 = FUNC_5(VAR_13, VAR_4);
 if (VAR_15 < 0) {
  FUNC_3(VAR_13, "cannot set toggling mode off, ret=%d", VAR_15);
  return VAR_15;
 }

 if (VAR_14 == VAR_3)
  VAR_15 = FUNC_0(VAR_13, VAR_9, &VAR_20);
 else
  VAR_15 = FUNC_0(VAR_13, VAR_8, &VAR_19);
 if (VAR_15 < 0)
  return VAR_15;


 if (VAR_19 == VAR_7 &&
   (VAR_20 == VAR_5 || VAR_20 == VAR_6)) {
  VAR_18 = VAR_8;
 } else if (VAR_20 == VAR_7 &&
      (VAR_19 == VAR_5 || VAR_19 == VAR_6)) {
  VAR_18 = VAR_9;
 } else {
  FUNC_3(VAR_13, "unexpected CC status cc1=%s, cc2=%s, restarting toggling",
       VAR_12[VAR_19],
       VAR_12[VAR_20]);
  return FUNC_5(VAR_13, VAR_17);
 }

 VAR_15 = FUNC_4(VAR_13, VAR_18, 1, 0);
 if (VAR_15 < 0) {
  FUNC_3(VAR_13, "cannot set cc polarity %s, ret=%d",
       VAR_10[VAR_18], VAR_15);
  return VAR_15;
 }

 if ((VAR_13->cc1 != VAR_19) || (VAR_13->cc2 != VAR_20)) {
  VAR_13->cc1 = VAR_19;
  VAR_13->cc2 = VAR_20;
  FUNC_6(VAR_13->tcpm_port);
 }

 VAR_15 = FUNC_2(VAR_13, VAR_2, VAR_16);
 if (VAR_15 < 0)
  return VAR_15;

 VAR_15 = FUNC_1(VAR_13, VAR_0,
         VAR_1);
 if (VAR_15 < 0) {
  FUNC_3(VAR_13,
       "cannot unmask comp_chng interrupt, ret=%d", VAR_15);
  return VAR_15;
 }
 VAR_13->intr_comp_chng = 1;
 FUNC_3(VAR_13, "detected cc1=%s, cc2=%s",
      VAR_12[VAR_19],
      VAR_12[VAR_20]);

 return VAR_15;
}
