
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct cx88_core {scalar_t__ audiomode_manual; int tvaudio; int use_nicam; scalar_t__ audiomode_current; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 scalar_t__ VAR_15 ;
 int FUNC_0 (int ,scalar_t__,scalar_t__) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char*,scalar_t__,scalar_t__,int ,int ,int ) ;
 int FUNC_4 (struct cx88_core*,scalar_t__) ;
 int FUNC_5 (struct cx88_core*,int,int ) ;
 int FUNC_6 (struct cx88_core*,int ) ;

void FUNC_7(struct cx88_core *VAR_16, u32 VAR_17, int VAR_18)
{
 u32 VAR_19 = VAR_15;
 u32 VAR_20 = VAR_15;

 if (VAR_18) {
  VAR_16->audiomode_manual = VAR_17;
 } else {
  if (VAR_16->audiomode_manual != VAR_15)
   return;
 }
 VAR_16->audiomode_current = VAR_17;

 switch (VAR_16->tvaudio) {
 case 137:
  switch (VAR_17) {
  case 140:
   FUNC_5(VAR_16, 0, VAR_6);
   break;
  case 143:
   FUNC_5(VAR_16, 0, VAR_5);
   break;
  case 141:
   FUNC_5(VAR_16, 1, VAR_7);
   break;
  case 139:
  case 142:
   FUNC_5(VAR_16, 0, VAR_8);
   break;
  }
  break;
 case 138:
 case 136:
 case 129:
 case 133:
 case 130:
  if (VAR_16->use_nicam == 1) {
   switch (VAR_17) {
   case 140:
   case 143:
    FUNC_6(VAR_16,
        VAR_11);
    break;
   case 141:
    FUNC_6(VAR_16,
        VAR_12);
    break;
   case 139:
   case 142:
    FUNC_6(VAR_16,
        VAR_13);
    break;
   }
  } else {
   if ((VAR_16->tvaudio == 133) ||
       (VAR_16->tvaudio == 130)) {

    FUNC_4(VAR_16, VAR_2);
   } else {

    VAR_20 = 0x3f;
    switch (VAR_17) {
    case 140:
    case 143:
     VAR_19 = VAR_2;
     break;
    case 141:
     VAR_19 = VAR_3;
     break;
    case 139:
    case 142:
     VAR_19 = VAR_4;
     break;
    }
   }
  }
  break;
 case 134:
  switch (VAR_17) {
  case 140:
   VAR_19 = VAR_10;
   VAR_20 = 0x3f;
   break;
  case 139:
   VAR_19 = VAR_9;
   VAR_20 = 0x3f;
   break;
  }
  break;
 case 132:
 case 128:
 case 135:
 case 131:

  break;
 }

 if (VAR_19 != VAR_15) {
  FUNC_3("cx88_set_stereo: mask 0x%x, ctl 0x%x [status=0x%x,ctl=0x%x,vol=0x%x]\n",
   VAR_20, VAR_19, FUNC_1(VAR_1),
   FUNC_1(VAR_0), FUNC_2(VAR_14));
  FUNC_0(VAR_0, VAR_20, VAR_19);
 }
}
