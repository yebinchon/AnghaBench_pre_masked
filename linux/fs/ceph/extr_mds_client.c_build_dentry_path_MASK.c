
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct inode {int dummy; } ;
struct TYPE_2__ {char* name; int len; } ;
struct dentry {TYPE_1__ d_name; int d_parent; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (struct inode*) ;
 char* FUNC_3 (struct dentry*,int*,int *,int) ;
 scalar_t__ FUNC_4 (struct inode*) ;
 struct inode* FUNC_5 (int ) ;
 int FUNC_6 () ;
 int FUNC_7 () ;

__attribute__((used)) static int FUNC_8(struct dentry *VAR_1, struct inode *VAR_2,
        const char **VAR_3, int *VAR_4, u64 *VAR_5,
        bool *VAR_6, bool VAR_7)
{
 char *VAR_8;

 FUNC_6();
 if (!VAR_2)
  VAR_2 = FUNC_5(VAR_1->d_parent);
 if (VAR_2 && VAR_7 && FUNC_4(VAR_2) == VAR_0) {
  *VAR_5 = FUNC_2(VAR_2);
  FUNC_7();
  *VAR_3 = VAR_1->d_name.name;
  *VAR_4 = VAR_1->d_name.len;
  return 0;
 }
 FUNC_7();
 VAR_8 = FUNC_3(VAR_1, VAR_4, VAR_5, 1);
 if (FUNC_0(VAR_8))
  return FUNC_1(VAR_8);
 *VAR_3 = VAR_8;
 *VAR_6 = 1;
 return 0;
}
