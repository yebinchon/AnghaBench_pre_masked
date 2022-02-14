
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct atmel_private {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct atmel_private*,int ) ;
 int FUNC_1 (int ,int ,void*,int) ;
 int FUNC_2 (struct atmel_private*,int ,int) ;

__attribute__((used)) static void FUNC_3(struct atmel_private *VAR_3, int VAR_4,
          void *VAR_5, int VAR_6)
{
 if (VAR_5)
  FUNC_1(VAR_3->dev, FUNC_0(VAR_3, VAR_1),
       VAR_5, VAR_6);

 FUNC_2(VAR_3, FUNC_0(VAR_3, VAR_0), VAR_4);
 FUNC_2(VAR_3, FUNC_0(VAR_3, VAR_2), 0);
}
