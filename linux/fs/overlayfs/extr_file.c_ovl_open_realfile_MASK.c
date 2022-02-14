
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int i_sb; } ;
struct file {int f_flags; int f_path; } ;
struct cred {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct file*) ;
 int VAR_1 ;
 int FUNC_1 () ;
 struct inode* FUNC_2 (struct file const*) ;
 struct file* FUNC_3 (int *,int,struct inode*,int ) ;
 struct cred* FUNC_4 (int ) ;
 int FUNC_5 (struct inode*,struct inode*) ;
 int FUNC_6 (char*,struct file const*,struct file const*,int ,int,struct file*,int) ;
 int FUNC_7 (struct cred const*) ;

__attribute__((used)) static struct file *FUNC_8(const struct file *VAR_2,
          struct inode *VAR_3)
{
 struct inode *VAR_4 = FUNC_2(VAR_2);
 struct file *VAR_5;
 const struct cred *VAR_6;
 int VAR_7 = VAR_2->f_flags | VAR_1 | VAR_0;

 VAR_6 = FUNC_4(VAR_4->i_sb);
 VAR_5 = FUNC_3(&VAR_2->f_path, VAR_7, VAR_3,
           FUNC_1());
 FUNC_7(VAR_6);

 FUNC_6("open(%p[%pD2/%c], 0%o) -> (%p, 0%o)\n",
   VAR_2, VAR_2, FUNC_5(VAR_4, VAR_3), VAR_2->f_flags,
   VAR_5, FUNC_0(VAR_5) ? 0 : VAR_5->f_flags);

 return VAR_5;
}
