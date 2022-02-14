
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bcm63xx_udc {int * iudma; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct bcm63xx_udc*,int) ;
 int FUNC_2 (struct bcm63xx_udc*,int *) ;
 int FUNC_3 (struct bcm63xx_udc*,scalar_t__,int ) ;

__attribute__((used)) static int FUNC_4(struct bcm63xx_udc *VAR_4)
{
 int VAR_5, VAR_6;

 FUNC_3(VAR_4, VAR_1, VAR_2);

 for (VAR_5 = 0; VAR_5 < VAR_0; VAR_5++) {
  VAR_6 = FUNC_1(VAR_4, VAR_5);
  if (VAR_6)
   return VAR_6;
  FUNC_2(VAR_4, &VAR_4->iudma[VAR_5]);
 }

 FUNC_3(VAR_4, FUNC_0(VAR_0)-1, VAR_3);
 return 0;
}
