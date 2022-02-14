
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net {int dummy; } ;
struct file {int f_cred; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char**,int*) ;
 struct net* FUNC_1 (struct file*) ;
 int FUNC_2 (struct net*) ;
 int FUNC_3 (int,struct net*,int ) ;
 int FUNC_4 (char*,int ,char*,int) ;

__attribute__((used)) static ssize_t FUNC_5(struct file *VAR_2, char *VAR_3, size_t VAR_4)
{
 char *VAR_5 = VAR_3;
 int VAR_6;
 struct net *VAR_7 = FUNC_1(VAR_2);

 if (VAR_4 > 0) {
  int VAR_8;
  VAR_6 = FUNC_0(&VAR_5, &VAR_8);
  if (VAR_6)
   return VAR_6;
  if (VAR_8 < 0)
   return -VAR_0;
  VAR_6 = FUNC_3(VAR_8, VAR_7, VAR_2->f_cred);
  if (VAR_6 < 0)
   return VAR_6;
 } else
  VAR_6 = FUNC_2(VAR_7);

 return FUNC_4(VAR_3, VAR_1, "%d\n", VAR_6);
}
