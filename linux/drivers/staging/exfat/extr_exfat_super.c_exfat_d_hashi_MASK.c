
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_block {int dummy; } ;
struct qstr {unsigned char* name; int hash; } ;
struct dentry {struct super_block* d_sb; } ;


 int FUNC_0 (unsigned long) ;
 unsigned int FUNC_1 (struct qstr*) ;
 unsigned long FUNC_2 (struct dentry const*) ;
 int FUNC_3 (struct super_block*,int ) ;
 unsigned long FUNC_4 (int ,unsigned long) ;

__attribute__((used)) static int FUNC_5(const struct dentry *VAR_0, struct qstr *VAR_1)
{
 struct super_block *VAR_2 = VAR_0->d_sb;
 const unsigned char *VAR_3;
 unsigned int VAR_4;
 unsigned long VAR_5;

 VAR_3 = VAR_1->name;
 VAR_4 = FUNC_1(VAR_1);

 VAR_5 = FUNC_2(VAR_0);
 while (VAR_4--)
  VAR_5 = FUNC_4(FUNC_3(VAR_2, *VAR_3++), VAR_5);
 VAR_1->hash = FUNC_0(VAR_5);

 return 0;
}
