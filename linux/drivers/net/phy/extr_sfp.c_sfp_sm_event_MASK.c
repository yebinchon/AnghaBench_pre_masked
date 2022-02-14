
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sfp {int sm_mod_state; int sm_dev_state; int sm_state; int state; int sm_mutex; int dev; scalar_t__ mod_phy; int attached; } ;


 int VAR_0 ;
 int VAR_1 ;

 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 unsigned int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_0 (int ,char*,int ,int ,int ,...) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (unsigned int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct sfp*,unsigned int) ;
 int FUNC_8 (struct sfp*,unsigned int) ;
 int FUNC_9 (struct sfp*) ;
 int FUNC_10 (struct sfp*) ;
 int FUNC_11 (struct sfp*,int) ;
 int FUNC_12 (struct sfp*,int,int) ;
 int FUNC_13 (struct sfp*) ;
 int FUNC_14 (struct sfp*) ;
 int FUNC_15 (struct sfp*) ;
 int FUNC_16 (struct sfp*) ;
 int FUNC_17 (struct sfp*) ;
 int FUNC_18 (struct sfp*) ;
 int FUNC_19 (struct sfp*,int const,int ) ;
 int FUNC_20 (struct sfp*) ;
 int FUNC_21 (struct sfp*,int ) ;
 int FUNC_22 (int) ;

__attribute__((used)) static void FUNC_23(struct sfp *VAR_14, unsigned int VAR_15)
{
 FUNC_5(&VAR_14->sm_mutex);

 FUNC_0(VAR_14->dev, "SM: enter %s:%s:%s event %s\n",
  FUNC_4(VAR_14->sm_mod_state),
  FUNC_2(VAR_14->sm_dev_state),
  FUNC_22(VAR_14->sm_state),
  FUNC_3(VAR_15));




 switch (VAR_14->sm_mod_state) {
 default:
  if (VAR_15 == VAR_4 && VAR_14->attached) {
   FUNC_9(VAR_14);
   FUNC_12(VAR_14, 135, VAR_12);
  }
  break;

 case 135:
  if (VAR_15 == VAR_5) {
   FUNC_12(VAR_14, VAR_10, 0);
  } else if (VAR_15 == VAR_6) {
   int VAR_16 = FUNC_17(VAR_14);

   if (VAR_16 == 0)
    FUNC_12(VAR_14, 136, 0);
   else if (VAR_16 > 0)
    FUNC_12(VAR_14, 137, VAR_16);
   else if (VAR_16 != -VAR_0)
    FUNC_12(VAR_14, 138, 0);
   else
    FUNC_21(VAR_14, VAR_13);
  }
  break;

 case 137:
  if (VAR_15 == VAR_6) {
   FUNC_12(VAR_14, 136, 0);
   break;
  }

 case 136:
 case 138:
  if (VAR_15 == VAR_5) {
   FUNC_18(VAR_14);
   FUNC_12(VAR_14, VAR_10, 0);
  }
  break;
 }


 switch (VAR_14->sm_dev_state) {
 default:
  if (VAR_15 == VAR_3)
   VAR_14->sm_dev_state = 139;
  break;

 case 139:
  if (VAR_15 == VAR_2) {




   if (!VAR_14->mod_phy)
    FUNC_9(VAR_14);
   VAR_14->sm_dev_state = VAR_1;
  }
  break;
 }


 if (VAR_14->sm_state != 134 &&
     (VAR_14->sm_mod_state != 136 ||
      VAR_14->sm_dev_state != 139)) {
  if (VAR_14->sm_state == 132 &&
      VAR_14->sm_dev_state == 139)
   FUNC_14(VAR_14);
  if (VAR_14->mod_phy)
   FUNC_20(VAR_14);
  FUNC_19(VAR_14, 134, 0);
  FUNC_6(&VAR_14->sm_mutex);
  return;
 }


 switch (VAR_14->sm_state) {
 case 134:
  if (VAR_14->sm_mod_state == 136 &&
      VAR_14->sm_dev_state == 139)
   FUNC_16(VAR_14);
  break;

 case 133:
  if (VAR_15 == VAR_6 && VAR_14->state & VAR_9)
   FUNC_11(VAR_14, 1);
  else if (VAR_15 == VAR_6 || VAR_15 == VAR_7)
   FUNC_13(VAR_14);
  break;

 case 128:
  if (VAR_15 == VAR_8)
   FUNC_11(VAR_14, 1);
  else if (FUNC_8(VAR_14, VAR_15))
   FUNC_15(VAR_14);
  break;

 case 132:
  if (VAR_15 == VAR_8) {
   FUNC_14(VAR_14);
   FUNC_11(VAR_14, 1);
  } else if (FUNC_7(VAR_14, VAR_15)) {
   FUNC_14(VAR_14);
   FUNC_19(VAR_14, 128, 0);
  }
  break;

 case 129:
  if (VAR_15 == VAR_6) {
   FUNC_10(VAR_14);
   FUNC_19(VAR_14, 131, VAR_11);
  }
  break;

 case 131:
  if (VAR_15 == VAR_6 && VAR_14->state & VAR_9) {
   FUNC_11(VAR_14, 0);
  } else if (VAR_15 == VAR_6 || VAR_15 == VAR_7) {
   FUNC_1(VAR_14->dev, "module transmit fault recovered\n");
   FUNC_13(VAR_14);
  }
  break;

 case 130:
  break;
 }

 FUNC_0(VAR_14->dev, "SM: exit %s:%s:%s\n",
  FUNC_4(VAR_14->sm_mod_state),
  FUNC_2(VAR_14->sm_dev_state),
  FUNC_22(VAR_14->sm_state));

 FUNC_6(&VAR_14->sm_mutex);
}
