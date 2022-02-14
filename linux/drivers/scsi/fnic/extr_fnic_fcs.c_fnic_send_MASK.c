
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fnic {scalar_t__ state; int fnic_lock; int tx_queue; scalar_t__ in_remove; } ;
struct fc_lport {int dummy; } ;
struct fc_frame {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct fnic*,struct fc_frame*) ;
 int FUNC_2 (struct fc_frame*) ;
 struct fnic* FUNC_3 (struct fc_lport*) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;

int FUNC_7(struct fc_lport *VAR_2, struct fc_frame *VAR_3)
{
 struct fnic *VAR_4 = FUNC_3(VAR_2);
 unsigned long VAR_5;

 if (VAR_4->in_remove) {
  FUNC_0(FUNC_2(VAR_3));
  return -1;
 }





 FUNC_5(&VAR_4->fnic_lock, VAR_5);
 if (VAR_4->state != VAR_1 && VAR_4->state != VAR_0) {
  FUNC_4(&VAR_4->tx_queue, FUNC_2(VAR_3));
  FUNC_6(&VAR_4->fnic_lock, VAR_5);
  return 0;
 }
 FUNC_6(&VAR_4->fnic_lock, VAR_5);

 return FUNC_1(VAR_4, VAR_3);
}
