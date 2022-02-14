
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct s35390a {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct s35390a*,int ,int*,int) ;
 int FUNC_1 (struct s35390a*,int ,int*,int) ;

__attribute__((used)) static int FUNC_2(struct s35390a *VAR_6)
{
 u8 VAR_7;
 int VAR_8;
 unsigned VAR_9 = 0;
initialize:
 VAR_7 = VAR_5 | VAR_2;
 VAR_8 = FUNC_1(VAR_6, VAR_1, &VAR_7, 1);

 if (VAR_8 < 0)
  return VAR_8;

 VAR_8 = FUNC_0(VAR_6, VAR_1, &VAR_7, 1);
 if (VAR_8 < 0)
  return VAR_8;

 if (VAR_7 & (VAR_4 | VAR_3)) {

  if (VAR_9 < 5) {
   ++VAR_9;
   goto initialize;
  } else
   return -VAR_0;
 }

 return 1;
}
