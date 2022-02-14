
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pvr2_hdw {int big_lock; int enc_ctl_state; int v4l2_dev; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int *,char*) ;
 int VAR_2 ;
 int FUNC_3 (char*,int) ;
 int FUNC_4 (struct pvr2_hdw*) ;
 int FUNC_5 (struct pvr2_hdw*) ;
 int FUNC_6 (int ,char*) ;
 int FUNC_7 (int *,int ,int ,int ) ;

void FUNC_8(struct pvr2_hdw *VAR_3)
{
 int VAR_4 = FUNC_4(VAR_3);
 FUNC_1(VAR_3->big_lock);
 do {
  FUNC_3("pvrusb2: =================  START STATUS CARD #%d  =================\n", VAR_4);
  FUNC_7(&VAR_3->v4l2_dev, 0, VAR_1, VAR_2);
  FUNC_6(VAR_0,"cx2341x config:");
  FUNC_2(&VAR_3->enc_ctl_state, "pvrusb2");
  FUNC_5(VAR_3);
  FUNC_3("pvrusb2: ==================  END STATUS CARD #%d  ==================\n", VAR_4);
 } while (0);
 FUNC_0(VAR_3->big_lock);
}
