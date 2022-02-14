
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rocker_port {int dev; } ;
struct rocker {int port_count; struct rocker_port** ports; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct rocker_port**) ;
 int FUNC_2 (struct rocker*) ;
 int FUNC_3 (struct rocker_port*) ;
 int FUNC_4 (struct rocker_port*) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static void FUNC_6(struct rocker *VAR_0)
{
 struct rocker_port *VAR_1;
 int VAR_2;

 for (VAR_2 = 0; VAR_2 < VAR_0->port_count; VAR_2++) {
  VAR_1 = VAR_0->ports[VAR_2];
  if (!VAR_1)
   continue;
  FUNC_3(VAR_1);
  FUNC_5(VAR_1->dev);
  FUNC_4(VAR_1);
  FUNC_0(VAR_1->dev);
 }
 FUNC_2(VAR_0);
 FUNC_1(VAR_0->ports);
}
