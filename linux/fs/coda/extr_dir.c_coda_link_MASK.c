
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inode {int i_sb; } ;
struct TYPE_2__ {char* name; int len; } ;
struct dentry {TYPE_1__ d_name; } ;


 int VAR_0 ;
 int FUNC_0 (struct inode*) ;
 int FUNC_1 (struct inode*) ;
 scalar_t__ FUNC_2 (char const*,int) ;
 int FUNC_3 (struct dentry*) ;
 struct inode* FUNC_4 (struct dentry*) ;
 int FUNC_5 (struct dentry*,struct inode*) ;
 int FUNC_6 (struct inode*) ;
 int FUNC_7 (struct inode*) ;
 scalar_t__ FUNC_8 (struct inode*) ;
 int FUNC_9 (int ,int ,int ,char const*,int) ;

__attribute__((used)) static int FUNC_10(struct dentry *VAR_1, struct inode *VAR_2,
   struct dentry *VAR_3)
{
 struct inode *VAR_4 = FUNC_4(VAR_1);
        const char * VAR_5 = VAR_3->d_name.name;
 int VAR_6 = VAR_3->d_name.len;
 int VAR_7;

 if (FUNC_8(VAR_2) && FUNC_2(VAR_5, VAR_6))
  return -VAR_0;

 VAR_7 = FUNC_9(VAR_2->i_sb, FUNC_1(VAR_4),
      FUNC_1(VAR_2), (const char *)VAR_5, VAR_6);
 if (VAR_7) {
  FUNC_3(VAR_3);
  return VAR_7;
 }

 FUNC_0(VAR_2);
 FUNC_6(VAR_4);
 FUNC_5(VAR_3, VAR_4);
 FUNC_7(VAR_4);
 return 0;
}
