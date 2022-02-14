
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct s35390a {int dummy; } ;
typedef int buf ;


 int VAR_0 ;
 int VAR_1 ;
 char VAR_2 ;
 scalar_t__ FUNC_0 (struct s35390a*,int ,char*,int) ;
 int FUNC_1 (struct s35390a*,int ,char*,int) ;

__attribute__((used)) static int FUNC_2(struct s35390a *VAR_3)
{
 char VAR_4[1];

 if (FUNC_0(VAR_3, VAR_1, VAR_4, sizeof(VAR_4)) < 0)
  return -VAR_0;

 if (!(VAR_4[0] & VAR_2))
  return 0;

 VAR_4[0] &= ~VAR_2;
 return FUNC_1(VAR_3, VAR_1, VAR_4, sizeof(VAR_4));
}
