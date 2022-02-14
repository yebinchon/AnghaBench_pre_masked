
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cifsInodeInfo {scalar_t__ writers; int writers_lock; int flags; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int ) ;

void FUNC_4(struct cifsInodeInfo *VAR_1)
{
 FUNC_1(&VAR_1->writers_lock);
 VAR_1->writers--;
 if (VAR_1->writers == 0) {
  FUNC_0(VAR_0, &VAR_1->flags);
  FUNC_3(&VAR_1->flags, VAR_0);
 }
 FUNC_2(&VAR_1->writers_lock);
}
