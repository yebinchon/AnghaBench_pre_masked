
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct extent_buffer {int refs; int bflags; int refs_lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct extent_buffer*) ;
 int FUNC_4 (struct extent_buffer*) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int ,int *) ;
 scalar_t__ FUNC_7 (int ,int *) ;

void FUNC_8(struct extent_buffer *VAR_3)
{
 int VAR_4;
 int VAR_5;
 if (!VAR_3)
  return;

 while (1) {
  VAR_4 = FUNC_2(&VAR_3->refs);
  if ((!FUNC_7(VAR_2, &VAR_3->bflags) && VAR_4 <= 3)
      || (FUNC_7(VAR_2, &VAR_3->bflags) &&
   VAR_4 == 1))
   break;
  VAR_5 = FUNC_0(&VAR_3->refs, VAR_4, VAR_4 - 1);
  if (VAR_5 == VAR_4)
   return;
 }

 FUNC_5(&VAR_3->refs_lock);
 if (FUNC_2(&VAR_3->refs) == 2 &&
     FUNC_7(VAR_0, &VAR_3->bflags) &&
     !FUNC_3(VAR_3) &&
     FUNC_6(VAR_1, &VAR_3->bflags))
  FUNC_1(&VAR_3->refs);





 FUNC_4(VAR_3);
}
