
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fimc_is {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;




 int FUNC_0 (struct fimc_is*,int ,int) ;

__attribute__((used)) static int FUNC_1(struct fimc_is *VAR_4, int VAR_5)
{
 switch (VAR_5) {
 case 128:
  FUNC_0(VAR_4, VAR_2, 0);
  break;
 case 131:
  FUNC_0(VAR_4, VAR_3, 50);
  break;
 case 130:
  FUNC_0(VAR_4, VAR_3, 60);
  break;
 case 129:
  FUNC_0(VAR_4, VAR_1, 0);
  break;
 default:
  return -VAR_0;
 }

 return 0;
}
