
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct socket {int dummy; } ;
struct file {int dummy; } ;


 int VAR_0 ;
 struct socket* FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (struct socket*) ;
 struct file* FUNC_2 (int) ;
 int FUNC_3 (struct file*) ;
 struct socket* FUNC_4 (struct file*) ;
 struct socket* FUNC_5 (struct file*) ;

__attribute__((used)) static struct socket *FUNC_6(int VAR_1)
{
 struct file *VAR_2 = FUNC_2(VAR_1);
 struct socket *VAR_3;

 if (!VAR_2)
  return FUNC_0(-VAR_0);
 VAR_3 = FUNC_5(VAR_2);
 if (!FUNC_1(VAR_3))
  return VAR_3;
 VAR_3 = FUNC_4(VAR_2);
 if (FUNC_1(VAR_3))
  FUNC_3(VAR_2);
 return VAR_3;
}
