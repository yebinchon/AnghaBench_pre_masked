
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int j_errno; int j_flags; int j_state_lock; } ;
typedef TYPE_1__ journal_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4 (journal_t *VAR_3, int VAR_4)
{
 int VAR_5;

 FUNC_2(&VAR_3->j_state_lock);
 VAR_5 = VAR_3->j_errno;
 if (!VAR_3->j_errno || VAR_4 == -VAR_0)
  VAR_3->j_errno = VAR_4;

 if (VAR_3->j_flags & VAR_1) {
  FUNC_3(&VAR_3->j_state_lock);
  if (!VAR_5 && VAR_5 != -VAR_0 &&
      VAR_4 == -VAR_0)
   FUNC_1(VAR_3);
  return;
 }
 FUNC_3(&VAR_3->j_state_lock);

 FUNC_0(VAR_3);

 if (VAR_4) {
  FUNC_1(VAR_3);
  FUNC_2(&VAR_3->j_state_lock);
  VAR_3->j_flags |= VAR_2;
  FUNC_3(&VAR_3->j_state_lock);
 }
}
