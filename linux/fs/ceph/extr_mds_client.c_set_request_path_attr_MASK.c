
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct inode {int dummy; } ;
struct dentry {int dummy; } ;


 int FUNC_0 (struct dentry*,struct inode*,char const**,int*,scalar_t__*,int*,int) ;
 int FUNC_1 (struct inode*,char const**,int*,scalar_t__*,int*) ;
 int FUNC_2 (struct inode*) ;
 int FUNC_3 (struct inode*) ;
 int FUNC_4 (char*,int,char const*,...) ;
 int FUNC_5 (char const*) ;

__attribute__((used)) static int FUNC_6(struct inode *VAR_0, struct dentry *VAR_1,
      struct inode *VAR_2, const char *VAR_3,
      u64 VAR_4, const char **VAR_5, int *VAR_6,
      u64 *VAR_7, bool *VAR_8, bool VAR_9)
{
 int VAR_10 = 0;

 if (VAR_0) {
  VAR_10 = FUNC_1(VAR_0, VAR_5, VAR_6, VAR_7, VAR_8);
  FUNC_4(" inode %p %llx.%llx\n", VAR_0, FUNC_2(VAR_0),
       FUNC_3(VAR_0));
 } else if (VAR_1) {
  VAR_10 = FUNC_0(VAR_1, VAR_2, VAR_5, VAR_6, VAR_7,
     VAR_8, VAR_9);
  FUNC_4(" dentry %p %llx/%.*s\n", VAR_1, *VAR_7, *VAR_6,
       *VAR_5);
 } else if (VAR_3 || VAR_4) {
  *VAR_7 = VAR_4;
  *VAR_5 = VAR_3;
  *VAR_6 = VAR_3 ? FUNC_5(VAR_3) : 0;
  FUNC_4(" path %.*s\n", *VAR_6, VAR_3);
 }

 return VAR_10;
}
