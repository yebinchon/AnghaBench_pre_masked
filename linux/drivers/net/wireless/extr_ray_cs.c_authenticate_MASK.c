
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct pcmcia_device {int dev; } ;
struct TYPE_7__ {scalar_t__ expires; int function; } ;
struct TYPE_6__ {int authentication_state; TYPE_2__ timer; int bss_id; struct pcmcia_device* finder; } ;
typedef TYPE_1__ ray_dev_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_2__*) ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (TYPE_1__*,int ,int ) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (int *,char*) ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_4 (struct pcmcia_device*) ;

__attribute__((used)) static void FUNC_5(ray_dev_t *VAR_6)
{
 struct pcmcia_device *VAR_7 = VAR_6->finder;
 FUNC_3(&VAR_7->dev, "ray_cs Starting authentication.\n");
 if (!(FUNC_4(VAR_7))) {
  FUNC_3(&VAR_7->dev, "ray_cs authenticate - device not present\n");
  return;
 }

 FUNC_2(&VAR_6->timer);
 if (FUNC_1(VAR_6, VAR_6->bss_id, VAR_2)) {
  VAR_6->timer.function = VAR_5;
 } else {
  VAR_6->timer.function = VAR_3;
 }
 VAR_6->timer.expires = VAR_4 + VAR_1 * 2;
 FUNC_0(&VAR_6->timer);
 VAR_6->authentication_state = VAR_0;
}
