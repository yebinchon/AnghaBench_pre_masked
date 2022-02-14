
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct list_head {int dummy; } ;
struct inode {int dummy; } ;
struct dquot {int dq_free; } ;


 int VAR_0 ;
 int FUNC_0 (struct dquot*) ;
 struct dquot** FUNC_1 (struct inode*) ;
 int FUNC_2 (int *,struct list_head*) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void FUNC_6(struct inode *VAR_1, int VAR_2,
       struct list_head *VAR_3)
{
 struct dquot **VAR_4 = FUNC_1(VAR_1);
 struct dquot *VAR_5 = VAR_4[VAR_2];

 if (!VAR_5)
  return;

 VAR_4[VAR_2] = ((void*)0);
 if (FUNC_3(&VAR_5->dq_free)) {




  FUNC_4(&VAR_0);
  FUNC_2(&VAR_5->dq_free, VAR_3);
  FUNC_5(&VAR_0);
 } else {




  FUNC_0(VAR_5);
 }
}
