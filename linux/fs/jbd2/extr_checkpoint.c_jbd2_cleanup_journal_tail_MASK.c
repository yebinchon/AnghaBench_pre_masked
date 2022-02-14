
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int tid_t ;
struct TYPE_6__ {int j_flags; int j_fs_dev; } ;
typedef TYPE_1__ journal_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__*,int ,unsigned long) ;
 int FUNC_2 (int ,int ,int *) ;
 scalar_t__ FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*,int *,unsigned long*) ;

int FUNC_5(journal_t *VAR_3)
{
 tid_t VAR_4;
 unsigned long VAR_5;

 if (FUNC_3(VAR_3))
  return -VAR_0;

 if (!FUNC_4(VAR_3, &VAR_4, &VAR_5))
  return 1;
 FUNC_0(VAR_5 != 0);
 if (VAR_3->j_flags & VAR_2)
  FUNC_2(VAR_3->j_fs_dev, VAR_1, ((void*)0));

 return FUNC_1(VAR_3, VAR_4, VAR_5);
}
