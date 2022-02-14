
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int val ;
struct inode {int dummy; } ;
typedef unsigned long __u64 ;


 int VAR_0 ;
 int FUNC_0 (struct inode*,char*,unsigned long*,int) ;

__attribute__((used)) static int FUNC_1(struct inode *VAR_1, unsigned long *VAR_2)
{
 __u64 VAR_3 = 0;
 int VAR_4;

 VAR_4 = FUNC_0(VAR_1,
          "user.pvfs2.meta_hint",
          &VAR_3, sizeof(VAR_3));
 if (VAR_4 < 0 && VAR_4 != -VAR_0)
  return VAR_4;
 else if (VAR_4 == -VAR_0)
  VAR_3 = 0;
 *VAR_2 = VAR_3;
 return 0;
}
