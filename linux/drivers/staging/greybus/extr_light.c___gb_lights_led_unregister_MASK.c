
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct led_classdev {int * name; } ;
struct gb_channel {int * led; int is_registered; } ;


 struct led_classdev* FUNC_0 (struct gb_channel*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct led_classdev*) ;

__attribute__((used)) static void FUNC_3(struct gb_channel *VAR_0)
{
 struct led_classdev *VAR_1 = FUNC_0(VAR_0);

 if (!VAR_0->is_registered)
  return;

 FUNC_2(VAR_1);
 FUNC_1(VAR_1->name);
 VAR_1->name = ((void*)0);
 VAR_0->led = ((void*)0);
}
