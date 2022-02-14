
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct c2port_device {int id; int name; int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*,int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (struct c2port_device*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

void FUNC_6(struct c2port_device *VAR_3)
{
 if (!VAR_3)
  return;

 FUNC_0(VAR_3->dev, "C2 port %s removed\n", VAR_3->name);

 FUNC_4(&VAR_2);
 FUNC_2(&VAR_1, VAR_3->id);
 FUNC_5(&VAR_2);

 FUNC_1(VAR_0, VAR_3->id);

 FUNC_3(VAR_3);
}
