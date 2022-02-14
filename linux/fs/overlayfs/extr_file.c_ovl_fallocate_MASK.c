
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int i_sb; } ;
struct file {int dummy; } ;
struct fd {int file; } ;
struct cred {int dummy; } ;
typedef int loff_t ;


 int FUNC_0 (struct fd) ;
 struct inode* FUNC_1 (struct file*) ;
 int FUNC_2 (int ,struct inode*) ;
 int FUNC_3 (struct inode*) ;
 struct cred* FUNC_4 (int ) ;
 int FUNC_5 (struct file*,struct fd*) ;
 int FUNC_6 (struct cred const*) ;
 int FUNC_7 (int ,int,int ,int ) ;

__attribute__((used)) static long FUNC_8(struct file *VAR_0, int VAR_1, loff_t VAR_2, loff_t VAR_3)
{
 struct inode *VAR_4 = FUNC_1(VAR_0);
 struct fd VAR_5;
 const struct cred *VAR_6;
 int VAR_7;

 VAR_7 = FUNC_5(VAR_0, &VAR_5);
 if (VAR_7)
  return VAR_7;

 VAR_6 = FUNC_4(FUNC_1(VAR_0)->i_sb);
 VAR_7 = FUNC_7(VAR_5.file, VAR_1, VAR_2, VAR_3);
 FUNC_6(VAR_6);


 FUNC_2(FUNC_3(VAR_4), VAR_4);

 FUNC_0(VAR_5);

 return VAR_7;
}
