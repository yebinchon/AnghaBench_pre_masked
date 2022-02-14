
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct extent_buffer {int refs; int bflags; int refs_lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct extent_buffer*) ;
 int FUNC_3 (struct extent_buffer*) ;
 int FUNC_4 (int ,int *) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int ,int *) ;

void FUNC_7(struct extent_buffer *VAR_2)
{
 if (!VAR_2)
  return;

 FUNC_5(&VAR_2->refs_lock);
 FUNC_4(VAR_0, &VAR_2->bflags);

 if (FUNC_1(&VAR_2->refs) == 2 && !FUNC_2(VAR_2) &&
     FUNC_6(VAR_1, &VAR_2->bflags))
  FUNC_0(&VAR_2->refs);
 FUNC_3(VAR_2);
}
