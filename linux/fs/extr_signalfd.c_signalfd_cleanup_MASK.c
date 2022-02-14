
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int wait_queue_head_t ;
struct sighand_struct {int signalfd_wqh; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int) ;

void FUNC_3(struct sighand_struct *VAR_2)
{
 wait_queue_head_t *VAR_3 = &VAR_2->signalfd_wqh;





 if (FUNC_0(!FUNC_1(VAR_3)))
  return;


 FUNC_2(VAR_3, VAR_0 | VAR_1);
}
