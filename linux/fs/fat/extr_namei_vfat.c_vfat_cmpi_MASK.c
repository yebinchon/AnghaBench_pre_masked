
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct qstr {int name; } ;
struct nls_table {int dummy; } ;
struct dentry {int d_sb; } ;
struct TYPE_2__ {struct nls_table* nls_io; } ;


 TYPE_1__* FUNC_0 (int ) ;
 unsigned int FUNC_1 (unsigned int,char const*) ;
 scalar_t__ FUNC_2 (struct nls_table*,int ,char const*,unsigned int) ;
 unsigned int FUNC_3 (struct qstr const*) ;

__attribute__((used)) static int FUNC_4(const struct dentry *VAR_0,
  unsigned int VAR_1, const char *VAR_2, const struct qstr *VAR_3)
{
 struct nls_table *VAR_4 = FUNC_0(VAR_0->d_sb)->nls_io;
 unsigned int VAR_5, VAR_6;


 VAR_5 = FUNC_3(VAR_3);
 VAR_6 = FUNC_1(VAR_1, VAR_2);
 if (VAR_5 == VAR_6) {
  if (FUNC_2(VAR_4, VAR_3->name, VAR_2, VAR_5) == 0)
   return 0;
 }
 return 1;
}
