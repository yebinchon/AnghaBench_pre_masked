
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct extent_buffer {int refs_lock; int refs; int bflags; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,int *) ;
 scalar_t__ FUNC_5 (int ,int *) ;

__attribute__((used)) static void FUNC_6(struct extent_buffer *VAR_1)
{
 int VAR_2;
 VAR_2 = FUNC_1(&VAR_1->refs);
 if (VAR_2 >= 2 && FUNC_5(VAR_0, &VAR_1->bflags))
  return;

 FUNC_2(&VAR_1->refs_lock);
 if (!FUNC_4(VAR_0, &VAR_1->bflags))
  FUNC_0(&VAR_1->refs);
 FUNC_3(&VAR_1->refs_lock);
}
