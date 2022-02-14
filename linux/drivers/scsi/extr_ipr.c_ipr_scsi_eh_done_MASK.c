
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ipr_hrr_queue {int _lock; } ;
struct ipr_cmnd {struct ipr_hrr_queue* hrrq; } ;


 int FUNC_0 (struct ipr_cmnd*) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_3(struct ipr_cmnd *VAR_0)
{
 unsigned long VAR_1;
 struct ipr_hrr_queue *VAR_2 = VAR_0->hrrq;

 FUNC_1(&VAR_2->_lock, VAR_1);
 FUNC_0(VAR_0);
 FUNC_2(&VAR_2->_lock, VAR_1);
}
