
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qstr {unsigned int len; int name; } ;
struct dentry {int d_sb; } ;


 int FUNC_0 (char const*,unsigned int*) ;
 scalar_t__ FUNC_1 (int ,unsigned int*) ;
 scalar_t__ FUNC_2 (int ,char const*,unsigned int,int ,unsigned int,int ) ;

__attribute__((used)) static int FUNC_3(const struct dentry *VAR_0,
  unsigned int VAR_1, const char *VAR_2, const struct qstr *VAR_3)
{
 unsigned VAR_4 = VAR_1;
 unsigned VAR_5 = VAR_3->len;

 FUNC_0(VAR_2, &VAR_4);







 if (FUNC_1(VAR_3->name, &VAR_5))
  return 1;
 if (FUNC_2(VAR_0->d_sb, VAR_2, VAR_4, VAR_3->name, VAR_5, 0))
  return 1;
 return 0;
}
