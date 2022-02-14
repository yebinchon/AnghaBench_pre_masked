
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u8 ;
typedef int u16 ;
struct gb_gpio_set_debounce_request {size_t which; int usec; } ;
struct gb_gpio_controller {TYPE_1__* lines; int connection; } ;
typedef int request ;
struct TYPE_2__ {int debounce_usec; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,struct gb_gpio_set_debounce_request*,int,int *,int ) ;

__attribute__((used)) static int FUNC_2(struct gb_gpio_controller *VAR_1,
       u8 VAR_2, u16 VAR_3)
{
 struct gb_gpio_set_debounce_request VAR_4;
 int VAR_5;

 VAR_4.which = VAR_2;
 VAR_4.usec = FUNC_0(VAR_3);
 VAR_5 = FUNC_1(VAR_1->connection, VAR_0,
    &VAR_4, sizeof(VAR_4), ((void*)0), 0);
 if (!VAR_5)
  VAR_1->lines[VAR_2].debounce_usec = VAR_3;
 return VAR_5;
}
