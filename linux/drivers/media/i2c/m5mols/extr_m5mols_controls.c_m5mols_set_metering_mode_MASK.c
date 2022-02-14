
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct m5mols_info {int sd; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;


 int FUNC_0 (int *,int ,unsigned int) ;

__attribute__((used)) static int FUNC_1(struct m5mols_info *VAR_4, int VAR_5)
{
 unsigned int VAR_6;

 switch (VAR_5) {
 case 129:
  VAR_6 = VAR_2;
  break;
 case 128:
  VAR_6 = VAR_3;
  break;
 default:
  VAR_6 = VAR_1;
  break;
 }

 return FUNC_0(&VAR_4->sd, VAR_0, VAR_6);
}
