
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct csio_hw {int flags; int lock; int evtq_work; } ;


 int VAR_0 ;
 int FUNC_0 (struct csio_hw*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

__attribute__((used)) static void
FUNC_4(struct csio_hw *VAR_1)
{
 int VAR_2;
 unsigned long VAR_3;

 VAR_2 = FUNC_0(VAR_1);

 FUNC_2(&VAR_1->lock, VAR_3);
 if (VAR_2 == 0 && !(VAR_1->flags & VAR_0)) {
  VAR_1->flags |= VAR_0;
  FUNC_3(&VAR_1->lock, VAR_3);
  FUNC_1(&VAR_1->evtq_work);
  return;
 }
 FUNC_3(&VAR_1->lock, VAR_3);

}
