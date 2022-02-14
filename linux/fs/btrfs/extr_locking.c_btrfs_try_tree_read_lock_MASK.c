
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct extent_buffer {int lock; scalar_t__ blocking_writers; } ;


 int FUNC_0 (struct extent_buffer*) ;
 int FUNC_1 (struct extent_buffer*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct extent_buffer*) ;

int FUNC_5(struct extent_buffer *VAR_0)
{
 if (VAR_0->blocking_writers)
  return 0;

 if (!FUNC_2(&VAR_0->lock))
  return 0;

 if (VAR_0->blocking_writers) {
  FUNC_3(&VAR_0->lock);
  return 0;
 }
 FUNC_1(VAR_0);
 FUNC_0(VAR_0);
 FUNC_4(VAR_0);
 return 1;
}
