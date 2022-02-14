
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct path {int dummy; } ;
struct inode {int dummy; } ;
struct file {struct path f_path; } ;
struct cred {int dummy; } ;


 struct file* FUNC_0 (int) ;
 int FUNC_1 (struct file*) ;
 struct file* FUNC_2 (int,struct cred const*) ;
 int FUNC_3 (struct file*,struct inode*,int *) ;
 int FUNC_4 (struct file*) ;

struct file *FUNC_5(const struct path *VAR_0, int VAR_1,
    struct inode *VAR_2, const struct cred *VAR_3)
{
 struct file *VAR_4 = FUNC_2(VAR_1, VAR_3);
 if (!FUNC_1(VAR_4)) {
  int VAR_5;

  VAR_4->f_path = *VAR_0;
  VAR_5 = FUNC_3(VAR_4, VAR_2, ((void*)0));
  if (VAR_5) {
   FUNC_4(VAR_4);
   VAR_4 = FUNC_0(VAR_5);
  }
 }
 return VAR_4;
}
