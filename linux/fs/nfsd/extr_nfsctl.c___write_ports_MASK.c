
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net {int dummy; } ;
struct file {int f_cred; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int FUNC_0 (char*,struct net*,int ) ;
 int FUNC_1 (char*,struct net*,int ) ;
 int FUNC_2 (char*,struct net*) ;
 scalar_t__ FUNC_3 (char) ;
 scalar_t__ FUNC_4 (char) ;

__attribute__((used)) static ssize_t FUNC_5(struct file *VAR_1, char *VAR_2, size_t VAR_3,
        struct net *VAR_4)
{
 if (VAR_3 == 0)
  return FUNC_2(VAR_2, VAR_4);

 if (FUNC_4(VAR_2[0]))
  return FUNC_0(VAR_2, VAR_4, VAR_1->f_cred);

 if (FUNC_3(VAR_2[0]))
  return FUNC_1(VAR_2, VAR_4, VAR_1->f_cred);

 return -VAR_0;
}
