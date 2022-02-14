
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pstore_info {int dummy; } ;
struct dentry {int dummy; } ;
struct TYPE_2__ {struct dentry* s_root; } ;


 int FUNC_0 (struct dentry*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 struct pstore_info* VAR_0 ;
 int FUNC_3 (struct pstore_info*,struct dentry*,int) ;
 TYPE_1__* VAR_1 ;

void FUNC_4(int VAR_2)
{
 struct pstore_info *VAR_3 = VAR_0;
 struct dentry *VAR_4;

 if (!VAR_3 || !VAR_1)
  return;

 VAR_4 = VAR_1->s_root;

 FUNC_1(FUNC_0(VAR_4));
 FUNC_3(VAR_3, VAR_4, VAR_2);
 FUNC_2(FUNC_0(VAR_4));
}
