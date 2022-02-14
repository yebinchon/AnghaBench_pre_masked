
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cpcap_charger_ddata {int ** gpio; int dev; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,char*,int,int ) ;
 int * FUNC_3 (int ,char*,int,int ) ;

__attribute__((used)) static void FUNC_4(struct cpcap_charger_ddata *VAR_1)
{
 int VAR_2;

 for (VAR_2 = 0; VAR_2 < 2; VAR_2++) {
  VAR_1->gpio[VAR_2] = FUNC_3(VAR_1->dev, "mode",
            VAR_2, VAR_0);
  if (FUNC_0(VAR_1->gpio[VAR_2])) {
   FUNC_2(VAR_1->dev, "no mode change GPIO%i: %li\n",
     VAR_2, FUNC_1(VAR_1->gpio[VAR_2]));
   VAR_1->gpio[VAR_2] = ((void*)0);
  }
 }
}
