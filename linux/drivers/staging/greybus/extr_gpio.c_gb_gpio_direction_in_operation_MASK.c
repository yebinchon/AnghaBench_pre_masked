
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u8 ;
struct gb_gpio_direction_in_request {size_t which; } ;
struct gb_gpio_controller {TYPE_1__* lines; int connection; } ;
typedef int request ;
struct TYPE_2__ {int direction; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,struct gb_gpio_direction_in_request*,int,int *,int ) ;

__attribute__((used)) static int FUNC_1(struct gb_gpio_controller *VAR_1,
       u8 VAR_2)
{
 struct gb_gpio_direction_in_request VAR_3;
 int VAR_4;

 VAR_3.which = VAR_2;
 VAR_4 = FUNC_0(VAR_1->connection, VAR_0,
    &VAR_3, sizeof(VAR_3), ((void*)0), 0);
 if (!VAR_4)
  VAR_1->lines[VAR_2].direction = 1;
 return VAR_4;
}
