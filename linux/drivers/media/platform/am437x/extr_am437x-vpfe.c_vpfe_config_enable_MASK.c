
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vpfe_ccdc {int dummy; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int FUNC_0 (struct vpfe_ccdc*,int ) ;
 int FUNC_1 (struct vpfe_ccdc*,unsigned int,int ) ;

__attribute__((used)) static void FUNC_2(struct vpfe_ccdc *VAR_3, int VAR_4)
{
 unsigned int VAR_5;

 if (!VAR_4) {
  VAR_5 = FUNC_0(VAR_3, VAR_0);
  VAR_5 &= ~(VAR_1 << VAR_2);
 } else {
  VAR_5 = VAR_1 << VAR_2;
 }

 FUNC_1(VAR_3, VAR_5, VAR_0);
}
