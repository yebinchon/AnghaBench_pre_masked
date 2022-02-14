
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int umode_t ;
struct inode {int i_sb; } ;
struct dentry {int dummy; } ;
typedef int dev_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct inode*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct inode*) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (struct dentry*,struct inode*) ;
 char* FUNC_6 (struct dentry*) ;
 int FUNC_7 (char*,int ,int ,int ) ;
 struct inode* FUNC_8 (int ) ;
 int FUNC_9 (struct inode*,int ,int ) ;
 int FUNC_10 (struct inode*) ;
 int FUNC_11 (struct inode*,char*) ;

__attribute__((used)) static int FUNC_12(struct inode *VAR_1, struct dentry *VAR_2, umode_t VAR_3, dev_t VAR_4)
{
 struct inode *VAR_5;
 char *VAR_6;
 int VAR_7;

 VAR_5 = FUNC_8(VAR_1->i_sb);
 if (FUNC_0(VAR_5)) {
  VAR_7 = FUNC_3(VAR_5);
  goto out;
 }

 VAR_7 = -VAR_0;
 VAR_6 = FUNC_6(VAR_2);
 if (VAR_6 == ((void*)0))
  goto out_put;

 FUNC_9(VAR_5, VAR_3, VAR_4);
 VAR_7 = FUNC_7(VAR_6, VAR_3, FUNC_1(VAR_4), FUNC_2(VAR_4));
 if (VAR_7)
  goto out_free;

 VAR_7 = FUNC_11(VAR_5, VAR_6);
 FUNC_4(VAR_6);
 if (VAR_7)
  goto out_put;

 FUNC_5(VAR_2, VAR_5);
 return 0;

 out_free:
 FUNC_4(VAR_6);
 out_put:
 FUNC_10(VAR_5);
 out:
 return VAR_7;
}
