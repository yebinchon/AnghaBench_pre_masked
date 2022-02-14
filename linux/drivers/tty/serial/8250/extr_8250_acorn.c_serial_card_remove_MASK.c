
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct serial_card_info {int num_ports; scalar_t__* ports; } ;
struct expansion_card {int dummy; } ;


 struct serial_card_info* FUNC_0 (struct expansion_card*) ;
 int FUNC_1 (struct expansion_card*,int *) ;
 int FUNC_2 (struct serial_card_info*) ;
 int FUNC_3 (scalar_t__) ;

__attribute__((used)) static void FUNC_4(struct expansion_card *VAR_0)
{
 struct serial_card_info *VAR_1 = FUNC_0(VAR_0);
 int VAR_2;

 FUNC_1(VAR_0, ((void*)0));

 for (VAR_2 = 0; VAR_2 < VAR_1->num_ports; VAR_2++)
  if (VAR_1->ports[VAR_2] > 0)
   FUNC_3(VAR_1->ports[VAR_2]);

 FUNC_2(VAR_1);
}
