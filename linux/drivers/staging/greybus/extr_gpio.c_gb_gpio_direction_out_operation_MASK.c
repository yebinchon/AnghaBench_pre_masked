
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u8 ;
struct gb_gpio_direction_out_request {size_t which; int value; } ;
struct gb_gpio_controller {TYPE_1__* lines; int connection; } ;
typedef int request ;
struct TYPE_2__ {scalar_t__ direction; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,struct gb_gpio_direction_out_request*,int,int *,int ) ;

__attribute__((used)) static int FUNC_1(struct gb_gpio_controller *VAR_1,
        u8 VAR_2, bool VAR_3)
{
 struct gb_gpio_direction_out_request VAR_4;
 int VAR_5;

 VAR_4.which = VAR_2;
 VAR_4.value = VAR_3 ? 1 : 0;
 VAR_5 = FUNC_0(VAR_1->connection, VAR_0,
    &VAR_4, sizeof(VAR_4), ((void*)0), 0);
 if (!VAR_5)
  VAR_1->lines[VAR_2].direction = 0;
 return VAR_5;
}
