
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vt_event_wait {int list; scalar_t__ done; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_4(struct vt_event_wait *VAR_2)
{
 unsigned long VAR_3;

 FUNC_0(&VAR_2->list);
 VAR_2->done = 0;

 FUNC_2(&VAR_0, VAR_3);
 FUNC_1(&VAR_2->list, &VAR_1);
 FUNC_3(&VAR_0, VAR_3);
}
