
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct socket {int dummy; } ;


 int VAR_0 ;
 struct socket* FUNC_0 (int ) ;
 int FUNC_1 (struct socket*) ;
 struct socket* FUNC_2 (int) ;
 struct socket* FUNC_3 (int) ;

__attribute__((used)) static struct socket *FUNC_4(int VAR_1)
{
 struct socket *VAR_2;


 if (VAR_1 == -1)
  return ((void*)0);
 VAR_2 = FUNC_2(VAR_1);
 if (!FUNC_1(VAR_2))
  return VAR_2;
 VAR_2 = FUNC_3(VAR_1);
 if (!FUNC_1(VAR_2))
  return VAR_2;
 return FUNC_0(-VAR_0);
}
