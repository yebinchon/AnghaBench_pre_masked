
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int ushort ;
typedef int uchar ;
struct TYPE_6__ {int init_state; scalar_t__ in_critical_cnt; int is_in_int; int bus_type; int dvc_cntl; scalar_t__ sdtr_done; int iop_base; } ;
typedef int PortAddr ;
typedef TYPE_1__ ASC_DVC_VAR ;
typedef int ASC_CS_TYPE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (int ,int) ;
 int FUNC_9 (int ,int ) ;
 int FUNC_10 (int ,int ) ;
 int FUNC_11 (TYPE_1__*,int ) ;
 int FUNC_12 (int ,int ,int) ;
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
 int FUNC_13 (int) ;

__attribute__((used)) static int FUNC_14(ASC_DVC_VAR *VAR_22)
{
 ASC_CS_TYPE VAR_23;
 PortAddr VAR_24;
 ushort VAR_25;
 uchar VAR_26;
 uchar VAR_27;
 int VAR_28;
 int VAR_29;
 uchar VAR_30;

 VAR_24 = VAR_22->iop_base;
 VAR_28 = VAR_5;

 if (FUNC_4(VAR_24) == 0)
  return VAR_28;

 if ((VAR_22->init_state & VAR_7) == 0) {
  return VAR_4;
 }
 if (VAR_22->in_critical_cnt != 0) {
  FUNC_11(VAR_22, VAR_0);
  return VAR_4;
 }
 if (VAR_22->is_in_int) {
  FUNC_11(VAR_22, VAR_1);
  return VAR_4;
 }
 VAR_22->is_in_int = 1;
 VAR_26 = FUNC_1(VAR_24);
 VAR_27 = VAR_26 & (~(VAR_14 | VAR_11 |
           VAR_15 | VAR_12 | VAR_16));
 VAR_23 = FUNC_3(VAR_24);
 if (VAR_23 & VAR_21) {
  if (!(VAR_22->bus_type & (VAR_9 | VAR_8))) {
   int VAR_31 = 10;
   VAR_28 = VAR_10;
   VAR_22->sdtr_done = 0;
   VAR_27 &= (uchar)(~VAR_13);
   while ((FUNC_3(VAR_24) &
    VAR_20) && (VAR_31-- > 0)) {
    FUNC_13(100);
   }
   FUNC_8(VAR_24, (VAR_11 | VAR_13));
   FUNC_8(VAR_24, VAR_13);
   FUNC_10(VAR_24, VAR_17);
   FUNC_10(VAR_24, 0);
   VAR_23 = FUNC_3(VAR_24);
  }
 }
 VAR_25 = FUNC_2(VAR_24);
 VAR_30 = FUNC_7(VAR_24,
        VAR_2) &
     (uchar)(~VAR_6);
 FUNC_12(VAR_24, VAR_2,
    (uchar)(VAR_30 | (uchar)VAR_6));
 if ((VAR_23 & VAR_19) || (VAR_28)) {
  FUNC_0(VAR_24);
  VAR_28 = VAR_10;
  if ((VAR_23 & VAR_18) && (VAR_26 & VAR_15)) {
   FUNC_5(VAR_22);
   VAR_27 &= (uchar)(~VAR_13);
  } else {
   if ((VAR_22->dvc_cntl & VAR_3) != 0) {
    while (((VAR_29 =
      FUNC_6(VAR_22)) & 0x01) != 0) {
    }
   } else {
    do {
     if ((VAR_29 =
          FUNC_6(VAR_22)) == 1) {
      break;
     }
    } while (VAR_29 == 0x11);
   }
   if ((VAR_29 & 0x80) != 0)
    VAR_28 = VAR_4;
  }
 }
 FUNC_12(VAR_24, VAR_2, VAR_30);
 FUNC_9(VAR_24, VAR_25);
 FUNC_8(VAR_24, VAR_27);
 VAR_22->is_in_int = 0;
 return VAR_28;
}
