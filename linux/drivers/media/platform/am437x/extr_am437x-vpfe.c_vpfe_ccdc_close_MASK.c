
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vpfe_ccdc {int dummy; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct device*) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (struct vpfe_ccdc*) ;
 int FUNC_3 (struct vpfe_ccdc*,int ) ;
 int FUNC_4 (struct vpfe_ccdc*,int ) ;
 int FUNC_5 (struct vpfe_ccdc*,int ) ;
 int FUNC_6 (struct vpfe_ccdc*,int,int ) ;

__attribute__((used)) static int FUNC_7(struct vpfe_ccdc *VAR_3, struct device *VAR_4)
{
 int VAR_5, VAR_6, VAR_7;


 for (VAR_6 = 0; VAR_6 < 10; VAR_6++) {
  FUNC_1(5000, 6000);
  VAR_7 = FUNC_5(VAR_3, VAR_2);
  if (!VAR_7)
   break;


  FUNC_4(VAR_3, 0);
 }


 FUNC_2(VAR_3);




 for (VAR_6 = 0; VAR_6 < 10; VAR_6++) {
  VAR_5 = FUNC_5(VAR_3, VAR_0);
  if (!(VAR_5 & VAR_1))
   break;


  FUNC_6(VAR_3, VAR_5, VAR_0);
  FUNC_1(5000, 6000);
 }


 FUNC_3(VAR_3, 0);

 FUNC_0(VAR_4);

 return 0;
}
