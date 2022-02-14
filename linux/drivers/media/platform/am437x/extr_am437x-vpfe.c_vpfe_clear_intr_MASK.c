
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vpfe_ccdc {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;



 unsigned int FUNC_0 (struct vpfe_ccdc*,int ) ;
 int FUNC_1 (struct vpfe_ccdc*,int,int ) ;

__attribute__((used)) static void FUNC_2(struct vpfe_ccdc *VAR_2, int VAR_3)
{
 unsigned int VAR_4;

 VAR_4 = FUNC_0(VAR_2, VAR_1);

 switch (VAR_3) {

 case 130:
  VAR_4 &= ~130;
  VAR_4 |= 130;
  break;


 case 129:
  VAR_4 &= ~129;
  VAR_4 |= 129;
  break;


 case 128:
  VAR_4 &= ~128;
  VAR_4 |= 128;
  break;


 default:
  VAR_4 &= ~(130 |
    129 |
    128);
  VAR_4 |= (130 |
    129 |
    128);
  break;
 }

 FUNC_1(VAR_2, VAR_4, VAR_1);

 VAR_4 = FUNC_0(VAR_2, VAR_1);


 FUNC_1(VAR_2, 1, VAR_0);
}
