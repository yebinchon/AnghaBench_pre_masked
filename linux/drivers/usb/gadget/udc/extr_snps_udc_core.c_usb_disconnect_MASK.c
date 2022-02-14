
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct udc {scalar_t__ connected; int dev; } ;


 int FUNC_0 (int ,char*) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct udc*) ;

__attribute__((used)) static void FUNC_3(struct udc *VAR_1)
{

 if (!VAR_1->connected)
  return;

 FUNC_0(VAR_1->dev, "USB Disconnect\n");

 VAR_1->connected = 0;


 FUNC_2(VAR_1);






 FUNC_1(&VAR_0);
}
