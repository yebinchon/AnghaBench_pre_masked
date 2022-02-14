
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int umode_t ;
struct inode {int dummy; } ;
struct dentry {int dummy; } ;


 scalar_t__ FUNC_0 (struct inode*) ;
 int VAR_0 ;
 int FUNC_1 (struct inode*) ;
 int FUNC_2 (struct dentry*,struct inode*) ;
 struct inode* FUNC_3 (struct inode*,struct dentry*,int ) ;
 int FUNC_4 (struct inode*,struct dentry*,struct inode*) ;
 int FUNC_5 (struct dentry*,struct inode*) ;
 int FUNC_6 (int ,char*) ;
 int FUNC_7 (struct inode*) ;

__attribute__((used)) static int
FUNC_8(struct inode *VAR_1, struct dentry *VAR_2,
  umode_t VAR_3, bool VAR_4)
{
 struct inode *VAR_5;
 int VAR_6;

 VAR_5 = FUNC_3(VAR_1, VAR_2,
         VAR_3);
 if (FUNC_0(VAR_5)) {
  FUNC_6(VAR_0, "Failed to create file in"
    "lower filesystem\n");
  VAR_6 = FUNC_1(VAR_5);
  goto out;
 }


 VAR_6 = FUNC_5(VAR_2, VAR_5);
 if (VAR_6) {
  FUNC_4(VAR_1, VAR_2,
       VAR_5);
  FUNC_7(VAR_5);
  goto out;
 }
 FUNC_2(VAR_2, VAR_5);
out:
 return VAR_6;
}
