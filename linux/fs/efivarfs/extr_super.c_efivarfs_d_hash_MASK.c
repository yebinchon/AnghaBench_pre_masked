
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qstr {unsigned char* name; unsigned int len; int hash; } ;
struct dentry {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (unsigned char const*,unsigned int) ;
 int FUNC_1 (unsigned long) ;
 unsigned long FUNC_2 (struct dentry const*) ;
 unsigned long FUNC_3 (int ,unsigned long) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static int FUNC_5(const struct dentry *VAR_2, struct qstr *VAR_3)
{
 unsigned long VAR_4 = FUNC_2(VAR_2);
 const unsigned char *VAR_5 = VAR_3->name;
 unsigned int VAR_6 = VAR_3->len;

 if (!FUNC_0(VAR_5, VAR_6))
  return -VAR_1;

 while (VAR_6-- > VAR_0)
  VAR_4 = FUNC_3(*VAR_5++, VAR_4);


 while (VAR_6--)
  VAR_4 = FUNC_3(FUNC_4(*VAR_5++), VAR_4);

 VAR_3->hash = FUNC_1(VAR_4);
 return 0;
}
