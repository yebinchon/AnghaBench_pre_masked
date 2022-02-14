
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct udc {int connected; int dev; } ;


 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct udc*) ;
 int FUNC_2 (struct udc*) ;

__attribute__((used)) static void FUNC_3(struct udc *VAR_0)
{

 if (VAR_0->connected)
  return;

 FUNC_0(VAR_0->dev, "USB Connect\n");

 VAR_0->connected = 1;


 FUNC_1(VAR_0);


 FUNC_2(VAR_0);
}
