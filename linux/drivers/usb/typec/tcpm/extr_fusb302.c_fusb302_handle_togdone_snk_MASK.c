
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct fusb302_chip {int cc1; int cc2; int intr_bc_lvl; int tcpm_port; int toggling_mode; } ;
typedef enum typec_cc_status { ____Placeholder_typec_cc_status } typec_cc_status ;
typedef enum typec_cc_polarity { ____Placeholder_typec_cc_polarity } typec_cc_polarity ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int* VAR_9 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (struct fusb302_chip*,int ,int ) ;
 int FUNC_2 (struct fusb302_chip*,int ,scalar_t__*) ;
 int FUNC_3 (struct fusb302_chip*,char*,...) ;
 int FUNC_4 (struct fusb302_chip*,int,int,int) ;
 int FUNC_5 (struct fusb302_chip*,int ) ;
 int FUNC_6 (int ) ;
 int* VAR_10 ;

__attribute__((used)) static int FUNC_7(struct fusb302_chip *VAR_11,
          u8 VAR_12)
{
 int VAR_13 = 0;
 u8 VAR_14;
 u8 VAR_15;
 enum typec_cc_polarity VAR_16;
 enum typec_cc_status VAR_17, VAR_18, VAR_19;


 VAR_16 = (VAR_12 == VAR_4) ?
        VAR_7 : VAR_8;
 VAR_13 = FUNC_4(VAR_11, VAR_16, 0, 1);
 if (VAR_13 < 0) {
  FUNC_3(VAR_11, "cannot set cc polarity %s, ret=%d",
       VAR_9[VAR_16], VAR_13);
  return VAR_13;
 }

 VAR_13 = FUNC_2(VAR_11, VAR_2, &VAR_14);
 if (VAR_13 < 0)
  return VAR_13;
 VAR_15 = VAR_14 & VAR_3;
 VAR_17 = FUNC_0(VAR_15);

 if (VAR_17 == VAR_6) {
  FUNC_3(VAR_11, "restart toggling as CC_OPEN detected");
  VAR_13 = FUNC_5(VAR_11, VAR_11->toggling_mode);
  return VAR_13;
 }

 VAR_18 = (VAR_16 == VAR_7) ?
       VAR_17 : VAR_6;
 VAR_19 = (VAR_16 == VAR_8) ?
       VAR_17 : VAR_6;
 if ((VAR_11->cc1 != VAR_18) || (VAR_11->cc2 != VAR_19)) {
  VAR_11->cc1 = VAR_18;
  VAR_11->cc2 = VAR_19;
  FUNC_6(VAR_11->tcpm_port);
 }

 VAR_13 = FUNC_5(VAR_11, VAR_5);
 if (VAR_13 < 0) {
  FUNC_3(VAR_11,
       "cannot set toggling mode off, ret=%d", VAR_13);
  return VAR_13;
 }

 VAR_13 = FUNC_1(VAR_11, VAR_0, VAR_1);
 if (VAR_13 < 0) {
  FUNC_3(VAR_11,
       "cannot unmask bc_lcl interrupt, ret=%d", VAR_13);
  return VAR_13;
 }
 VAR_11->intr_bc_lvl = 1;
 FUNC_3(VAR_11, "detected cc1=%s, cc2=%s",
      VAR_10[VAR_18],
      VAR_10[VAR_19]);

 return VAR_13;
}
