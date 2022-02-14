
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int wchar_t ;
struct qstr {int len; int hash; int * name; } ;
struct nls_table {int (* char2uni ) (int *,int,int *) ;} ;
struct dentry {int d_sb; } ;
struct TYPE_2__ {struct nls_table* local_nls; } ;


 TYPE_1__* FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (unsigned long) ;
 unsigned long FUNC_3 (struct dentry const*) ;
 unsigned long FUNC_4 (int ,unsigned long) ;
 int FUNC_5 (int *,int,int *) ;
 scalar_t__ FUNC_6 (int) ;

__attribute__((used)) static int FUNC_7(const struct dentry *VAR_0, struct qstr *VAR_1)
{
 struct nls_table *VAR_2 = FUNC_0(VAR_0->d_sb)->local_nls;
 unsigned long VAR_3;
 wchar_t VAR_4;
 int VAR_5, VAR_6;

 VAR_3 = FUNC_3(VAR_0);
 for (VAR_5 = 0; VAR_5 < VAR_1->len; VAR_5 += VAR_6) {
  VAR_6 = VAR_2->char2uni(&VAR_1->name[VAR_5], VAR_1->len - VAR_5, &VAR_4);

  if (FUNC_6(VAR_6 < 0))
   return VAR_6;
  VAR_3 = FUNC_4(FUNC_1(VAR_4), VAR_3);
 }
 VAR_1->hash = FUNC_2(VAR_3);

 return 0;
}
