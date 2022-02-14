
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct posix_acl {int dummy; } ;
struct inode {int dummy; } ;
typedef size_t ssize_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct posix_acl*) ;
 struct posix_acl* FUNC_1 (struct inode*,int) ;
 int FUNC_2 (struct posix_acl*) ;
 int FUNC_3 (char*,char const*) ;
 scalar_t__ FUNC_4 (char const*) ;

__attribute__((used)) static int
FUNC_5(struct inode *VAR_1, int VAR_2, const char *VAR_3, void *VAR_4,
  size_t VAR_5, ssize_t *VAR_6)
{
 struct posix_acl *VAR_7;
 char *VAR_8 = VAR_4 + *VAR_6;

 VAR_7 = FUNC_1(VAR_1, VAR_2);
 if (FUNC_0(VAR_7))
  return 0;

 FUNC_2(VAR_7);

 *VAR_6 += FUNC_4(VAR_3);
 *VAR_6 += 1;
 if (!VAR_5)
  return 0;
 if (*VAR_6 > VAR_5)
  return -VAR_0;

 FUNC_3(VAR_8, VAR_3);
 return 0;
}
