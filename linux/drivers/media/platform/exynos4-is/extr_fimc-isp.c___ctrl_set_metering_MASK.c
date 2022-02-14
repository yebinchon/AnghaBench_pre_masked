
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fimc_is {int dummy; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 int VAR_5 ;




 int FUNC_0 (struct fimc_is*,int ,unsigned int) ;

__attribute__((used)) static int FUNC_1(struct fimc_is *VAR_6, unsigned int VAR_7)
{
 unsigned int VAR_8;

 switch (VAR_7) {
 case 131:
  VAR_8 = VAR_1;
  break;
 case 130:
  VAR_8 = VAR_2;
  break;
 case 128:
  VAR_8 = VAR_4;
  break;
 case 129:
  VAR_8 = VAR_3;
  break;
 default:
  return -VAR_0;
 }

 FUNC_0(VAR_6, VAR_5, VAR_8);
 return 0;
}
