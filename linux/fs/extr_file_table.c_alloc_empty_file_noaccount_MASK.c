
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct file {int f_mode; } ;
struct cred {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct file*) ;
 struct file* FUNC_1 (int,struct cred const*) ;

struct file *FUNC_2(int VAR_1, const struct cred *VAR_2)
{
 struct file *VAR_3 = FUNC_1(VAR_1, VAR_2);

 if (!FUNC_0(VAR_3))
  VAR_3->f_mode |= VAR_0;

 return VAR_3;
}
