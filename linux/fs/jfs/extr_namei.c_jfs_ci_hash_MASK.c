
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qstr {int len; int hash; int * name; } ;
struct dentry {int dummy; } ;


 int FUNC_0 (unsigned long) ;
 unsigned long FUNC_1 (struct dentry const*) ;
 unsigned long FUNC_2 (int ,unsigned long) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(const struct dentry *VAR_0, struct qstr *VAR_1)
{
 unsigned long VAR_2;
 int VAR_3;

 VAR_2 = FUNC_1(VAR_0);
 for (VAR_3=0; VAR_3 < VAR_1->len; VAR_3++)
  VAR_2 = FUNC_2(FUNC_3(VAR_1->name[VAR_3]), VAR_2);
 VAR_1->hash = FUNC_0(VAR_2);

 return 0;
}
