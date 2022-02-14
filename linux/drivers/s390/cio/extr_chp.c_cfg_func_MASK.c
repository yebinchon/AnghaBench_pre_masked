
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct work_struct {int dummy; } ;
struct chp_id {int id; int cssid; } ;
typedef enum cfg_task_t { ____Placeholder_cfg_task_t } cfg_task_t ;


 int FUNC_0 (int,char*,int ,int ,int) ;


 int FUNC_1 (struct chp_id) ;
 int VAR_0 ;

 int FUNC_2 (struct chp_id,int const) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (struct chp_id*) ;
 int FUNC_4 (struct chp_id) ;
 int FUNC_5 (struct chp_id) ;
 int FUNC_6 () ;
 int FUNC_7 () ;
 int FUNC_8 (int *) ;
 int FUNC_9 (struct chp_id) ;
 int FUNC_10 (struct chp_id) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *) ;

__attribute__((used)) static void FUNC_14(struct work_struct *VAR_3)
{
 struct chp_id VAR_4;
 enum cfg_task_t VAR_5;
 int VAR_6;

 FUNC_11(&VAR_0);
 VAR_5 = FUNC_3(&VAR_4);
 FUNC_12(&VAR_0);

 switch (VAR_5) {
 case 130:
  VAR_6 = FUNC_9(VAR_4);
  if (VAR_6)
   FUNC_0(2, "chp: sclp_chp_configure(%x.%02x)="
          "%d\n", VAR_4.cssid, VAR_4.id, VAR_6);
  else {
   FUNC_6();
   FUNC_5(VAR_4);
  }
  break;
 case 129:
  VAR_6 = FUNC_10(VAR_4);
  if (VAR_6)
   FUNC_0(2, "chp: sclp_chp_deconfigure(%x.%02x)="
          "%d\n", VAR_4.cssid, VAR_4.id, VAR_6);
  else {
   FUNC_6();
   FUNC_4(VAR_4);
  }
  break;
 case 128:

  FUNC_7();
  FUNC_13(&VAR_1);
  return;
 }
 FUNC_11(&VAR_0);
 if (VAR_5 == FUNC_1(VAR_4))
  FUNC_2(VAR_4, 128);
 FUNC_12(&VAR_0);
 FUNC_8(&VAR_2);
}
