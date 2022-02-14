
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct qstr {unsigned char* name; int hash; } ;
struct nls_table {int dummy; } ;
struct dentry {int d_sb; } ;
struct TYPE_2__ {struct nls_table* nls_io; } ;


 TYPE_1__* FUNC_0 (int ) ;
 int FUNC_1 (unsigned long) ;
 unsigned long FUNC_2 (struct dentry const*) ;
 int FUNC_3 (struct nls_table*,int ) ;
 unsigned long FUNC_4 (int ,unsigned long) ;
 unsigned int FUNC_5 (struct qstr*) ;

__attribute__((used)) static int FUNC_6(const struct dentry *VAR_0, struct qstr *VAR_1)
{
 struct nls_table *VAR_2 = FUNC_0(VAR_0->d_sb)->nls_io;
 const unsigned char *VAR_3;
 unsigned int VAR_4;
 unsigned long VAR_5;

 VAR_3 = VAR_1->name;
 VAR_4 = FUNC_5(VAR_1);

 VAR_5 = FUNC_2(VAR_0);
 while (VAR_4--)
  VAR_5 = FUNC_4(FUNC_3(VAR_2, *VAR_3++), VAR_5);
 VAR_1->hash = FUNC_1(VAR_5);

 return 0;
}
