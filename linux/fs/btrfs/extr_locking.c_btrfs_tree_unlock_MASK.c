
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct extent_buffer {int blocking_writers; int lock; int write_lock_wq; scalar_t__ lock_owner; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct extent_buffer*) ;
 int FUNC_2 (struct extent_buffer*) ;
 int FUNC_3 (struct extent_buffer*) ;
 int FUNC_4 (struct extent_buffer*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct extent_buffer*) ;
 int FUNC_7 (int *) ;

void FUNC_8(struct extent_buffer *VAR_0)
{
 int VAR_1 = VAR_0->blocking_writers;

 FUNC_0(VAR_1 > 1);

 FUNC_3(VAR_0);
 FUNC_6(VAR_0);
 VAR_0->lock_owner = 0;
 FUNC_4(VAR_0);

 if (VAR_1) {
  FUNC_1(VAR_0);
  VAR_0->blocking_writers--;





  FUNC_5(&VAR_0->write_lock_wq);
 } else {
  FUNC_2(VAR_0);
  FUNC_7(&VAR_0->lock);
 }
}
