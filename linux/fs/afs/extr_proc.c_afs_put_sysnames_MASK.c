
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct afs_sysnames {int nr; scalar_t__* subs; scalar_t__ blank; int usage; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (int *) ;

void FUNC_2(struct afs_sysnames *VAR_1)
{
 int VAR_2;

 if (VAR_1 && FUNC_1(&VAR_1->usage)) {
  for (VAR_2 = 0; VAR_2 < VAR_1->nr; VAR_2++)
   if (VAR_1->subs[VAR_2] != VAR_0 &&
       VAR_1->subs[VAR_2] != VAR_1->blank)
    FUNC_0(VAR_1->subs[VAR_2]);
 }
}
