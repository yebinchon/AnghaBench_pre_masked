
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int dummy; } ;
struct dquot {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct dquot**) ;
 struct dquot** FUNC_1 (struct inode*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(struct inode *VAR_2)
{
 int VAR_3;
 struct dquot **VAR_4 = FUNC_1(VAR_2);
 struct dquot *VAR_5[VAR_0];

 FUNC_2(&VAR_1);
 for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++) {
  VAR_5[VAR_3] = VAR_4[VAR_3];
  VAR_4[VAR_3] = ((void*)0);
 }
 FUNC_3(&VAR_1);
 FUNC_0(VAR_5);
}
