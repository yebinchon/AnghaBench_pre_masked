
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stmpe {int dev; int vcc; int vio; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (struct stmpe*,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;

int FUNC_4(struct stmpe *VAR_1)
{
 if (!FUNC_0(VAR_1->vio))
  FUNC_3(VAR_1->vio);
 if (!FUNC_0(VAR_1->vcc))
  FUNC_3(VAR_1->vcc);

 FUNC_1(VAR_1, VAR_0);

 FUNC_2(VAR_1->dev);

 return 0;
}
