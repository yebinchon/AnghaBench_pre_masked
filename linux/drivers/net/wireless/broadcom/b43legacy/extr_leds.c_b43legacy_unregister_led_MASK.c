
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct b43legacy_led {int * dev; int activelow; int index; int led_dev; } ;


 int FUNC_0 (int *,int ,int ) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(struct b43legacy_led *VAR_0)
{
 if (!VAR_0->dev)
  return;
 FUNC_1(&VAR_0->led_dev);
 FUNC_0(VAR_0->dev, VAR_0->index, VAR_0->activelow);
 VAR_0->dev = ((void*)0);
}
