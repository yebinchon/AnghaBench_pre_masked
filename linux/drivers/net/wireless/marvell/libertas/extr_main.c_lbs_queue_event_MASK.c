
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct lbs_private {scalar_t__ psstate; int driver_lock; int waitq; int event_fifo; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *,unsigned char*,int) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *) ;

void FUNC_4(struct lbs_private *VAR_2, u32 VAR_3)
{
 unsigned long VAR_4;

 FUNC_1(&VAR_2->driver_lock, VAR_4);

 if (VAR_2->psstate == VAR_1)
  VAR_2->psstate = VAR_0;

 FUNC_0(&VAR_2->event_fifo, (unsigned char *) &VAR_3, sizeof(u32));

 FUNC_3(&VAR_2->waitq);

 FUNC_2(&VAR_2->driver_lock, VAR_4);
}
