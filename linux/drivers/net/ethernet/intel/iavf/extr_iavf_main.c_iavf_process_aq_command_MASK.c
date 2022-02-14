
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iavf_adapter {int aq_required; } ;


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
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int FUNC_0 (struct iavf_adapter*) ;
 int FUNC_1 (struct iavf_adapter*) ;
 int FUNC_2 (struct iavf_adapter*) ;
 int FUNC_3 (struct iavf_adapter*) ;
 int FUNC_4 (struct iavf_adapter*) ;
 int FUNC_5 (struct iavf_adapter*) ;
 int FUNC_6 (struct iavf_adapter*) ;
 int FUNC_7 (struct iavf_adapter*) ;
 int FUNC_8 (struct iavf_adapter*) ;
 int FUNC_9 (struct iavf_adapter*) ;
 int FUNC_10 (struct iavf_adapter*) ;
 int FUNC_11 (struct iavf_adapter*) ;
 int FUNC_12 (struct iavf_adapter*) ;
 int FUNC_13 (struct iavf_adapter*) ;
 int FUNC_14 (struct iavf_adapter*) ;
 int FUNC_15 (struct iavf_adapter*) ;
 int FUNC_16 (struct iavf_adapter*) ;
 int FUNC_17 (struct iavf_adapter*,int) ;
 int FUNC_18 (struct iavf_adapter*) ;
 int FUNC_19 (struct iavf_adapter*) ;

__attribute__((used)) static int FUNC_20(struct iavf_adapter *VAR_27)
{
 if (VAR_27->aq_required & VAR_17)
  return FUNC_15(VAR_27);
 if (VAR_27->aq_required & VAR_12) {
  FUNC_8(VAR_27);
  return 0;
 }

 if (VAR_27->aq_required & VAR_19) {
  FUNC_14(VAR_27);
  return 0;
 }

 if (VAR_27->aq_required & VAR_4) {
  FUNC_1(VAR_27);
  return 0;
 }

 if (VAR_27->aq_required & VAR_5) {
  FUNC_2(VAR_27);
  return 0;
 }

 if (VAR_27->aq_required & VAR_9) {
  FUNC_5(VAR_27);
  return 0;
 }

 if (VAR_27->aq_required & VAR_10) {
  FUNC_6(VAR_27);
  return 0;
 }

 if (VAR_27->aq_required & VAR_16) {
  FUNC_12(VAR_27);
  return 0;
 }

 if (VAR_27->aq_required & VAR_13) {
  FUNC_9(VAR_27);
  return 0;
 }

 if (VAR_27->aq_required & VAR_6) {
  FUNC_3(VAR_27);
  return 0;
 }

 if (VAR_27->aq_required & VAR_15) {
  FUNC_11(VAR_27);
  return 0;
 }

 if (VAR_27->aq_required & VAR_7) {




  VAR_27->aq_required &= ~VAR_7;
  return 0;
 }
 if (VAR_27->aq_required & VAR_18) {
  FUNC_13(VAR_27);
  return 0;
 }
 if (VAR_27->aq_required & VAR_24) {
  FUNC_16(VAR_27);
  return 0;
 }
 if (VAR_27->aq_required & VAR_25) {
  FUNC_18(VAR_27);
  return 0;
 }
 if (VAR_27->aq_required & VAR_26) {
  FUNC_19(VAR_27);
  return 0;
 }

 if (VAR_27->aq_required & VAR_23) {
  FUNC_17(VAR_27, VAR_2 |
           VAR_1);
  return 0;
 }

 if (VAR_27->aq_required & VAR_22) {
  FUNC_17(VAR_27, VAR_1);
  return 0;
 }

 if ((VAR_27->aq_required & VAR_21) &&
     (VAR_27->aq_required & VAR_20)) {
  FUNC_17(VAR_27, 0);
  return 0;
 }

 if (VAR_27->aq_required & VAR_14) {
  FUNC_10(VAR_27);
  return 0;
 }

 if (VAR_27->aq_required & VAR_11) {
  FUNC_7(VAR_27);
  return 0;
 }
 if (VAR_27->aq_required & VAR_3) {
  FUNC_0(VAR_27);
  return 0;
 }

 if (VAR_27->aq_required & VAR_8) {
  FUNC_4(VAR_27);
  return 0;
 }
 if (VAR_27->aq_required & VAR_8) {
  FUNC_4(VAR_27);
  return 0;
 }
 if (VAR_27->aq_required & VAR_3) {
  FUNC_0(VAR_27);
  return 0;
 }
 return -VAR_0;
}
