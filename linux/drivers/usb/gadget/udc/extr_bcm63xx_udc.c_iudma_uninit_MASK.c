
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bcm63xx_udc {int * iudma; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct bcm63xx_udc*,int *) ;
 int FUNC_1 (struct bcm63xx_udc*,int ,int ) ;

__attribute__((used)) static void FUNC_2(struct bcm63xx_udc *VAR_3)
{
 int VAR_4;

 FUNC_1(VAR_3, 0, VAR_2);

 for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++)
  FUNC_0(VAR_3, &VAR_3->iudma[VAR_4]);

 FUNC_1(VAR_3, 0, VAR_1);
}
