
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ovl_cu_creds {int * new; int old; } ;
struct dentry {int dummy; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct dentry*,int **) ;

__attribute__((used)) static int FUNC_2(struct dentry *VAR_0, struct ovl_cu_creds *VAR_1)
{
 int VAR_2;

 VAR_1->old = *(VAR_1->new = ((void*)0));
 VAR_2 = FUNC_1(VAR_0, &VAR_1->new);
 if (VAR_2 < 0)
  return VAR_2;

 if (VAR_1->new)
  VAR_1->old = FUNC_0(VAR_1->new);

 return 0;
}
