
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sclp_register {int receive_mask; int send_mask; int list; scalar_t__ pm_event_posted; scalar_t__ sclp_send_mask; scalar_t__ sclp_receive_mask; } ;
typedef int sccb_mask_t ;


 int VAR_0 ;
 int FUNC_0 (int*,int*) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 () ;
 int FUNC_4 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;

int
FUNC_7(struct sclp_register *VAR_3)
{
 unsigned long VAR_4;
 sccb_mask_t VAR_5;
 sccb_mask_t VAR_6;
 int VAR_7;

 VAR_7 = FUNC_3();
 if (VAR_7)
  return VAR_7;
 FUNC_5(&VAR_1, VAR_4);

 FUNC_0(&VAR_5, &VAR_6);
 if (VAR_3->receive_mask & VAR_5 || VAR_3->send_mask & VAR_6) {
  FUNC_6(&VAR_1, VAR_4);
  return -VAR_0;
 }

 VAR_3->sclp_receive_mask = 0;
 VAR_3->sclp_send_mask = 0;
 VAR_3->pm_event_posted = 0;
 FUNC_1(&VAR_3->list, &VAR_2);
 FUNC_6(&VAR_1, VAR_4);
 VAR_7 = FUNC_4(1);
 if (VAR_7) {
  FUNC_5(&VAR_1, VAR_4);
  FUNC_2(&VAR_3->list);
  FUNC_6(&VAR_1, VAR_4);
 }
 return VAR_7;
}
