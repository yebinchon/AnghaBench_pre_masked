
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cifsInodeInfo {scalar_t__ writers; int writers_lock; int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int ,int *) ;
 int FUNC_5 (int *,int ,int ) ;
 int FUNC_6 (int *,int ) ;

int FUNC_7(struct cifsInodeInfo *VAR_3)
{
 int VAR_4;

start:
 VAR_4 = FUNC_5(&VAR_3->flags, VAR_0,
    VAR_2);
 if (VAR_4)
  return VAR_4;

 FUNC_2(&VAR_3->writers_lock);
 if (!VAR_3->writers)
  FUNC_1(VAR_1, &VAR_3->flags);
 VAR_3->writers++;

 if (FUNC_4(VAR_0, &VAR_3->flags)) {
  VAR_3->writers--;
  if (VAR_3->writers == 0) {
   FUNC_0(VAR_1, &VAR_3->flags);
   FUNC_6(&VAR_3->flags, VAR_1);
  }
  FUNC_3(&VAR_3->writers_lock);
  goto start;
 }
 FUNC_3(&VAR_3->writers_lock);
 return 0;
}
