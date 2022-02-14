
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int umode_t ;
struct inode {int * i_op; int i_mode; } ;
struct dentry {int d_name; } ;
typedef int dev_t ;


 int FUNC_0 (struct inode*) ;
 int FUNC_1 (struct inode*) ;
 int FUNC_2 (struct inode*) ;
 int FUNC_3 (struct dentry*,struct inode*) ;
 struct inode* FUNC_4 (struct inode*,int ,int *) ;
 int VAR_0 ;
 int FUNC_5 (struct inode*,int ,int ) ;
 int FUNC_6 (struct inode*) ;

__attribute__((used)) static int FUNC_7 (struct inode * VAR_1, struct dentry *VAR_2, umode_t VAR_3, dev_t VAR_4)
{
 struct inode * VAR_5;
 int VAR_6;

 VAR_6 = FUNC_2(VAR_1);
 if (VAR_6)
  return VAR_6;

 VAR_5 = FUNC_4 (VAR_1, VAR_3, &VAR_2->d_name);
 VAR_6 = FUNC_1(VAR_5);
 if (!FUNC_0(VAR_5)) {
  FUNC_5(VAR_5, VAR_5->i_mode, VAR_4);



  FUNC_6(VAR_5);
  VAR_6 = FUNC_3(VAR_2, VAR_5);
 }
 return VAR_6;
}
