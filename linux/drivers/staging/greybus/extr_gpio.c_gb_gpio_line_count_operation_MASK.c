
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gb_gpio_line_count_response {int count; } ;
struct gb_gpio_controller {int line_max; int connection; } ;
typedef int response ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int *,int ,struct gb_gpio_line_count_response*,int) ;

__attribute__((used)) static int FUNC_1(struct gb_gpio_controller *VAR_1)
{
 struct gb_gpio_line_count_response VAR_2;
 int VAR_3;

 VAR_3 = FUNC_0(VAR_1->connection, VAR_0,
    ((void*)0), 0, &VAR_2, sizeof(VAR_2));
 if (!VAR_3)
  VAR_1->line_max = VAR_2.count;
 return VAR_3;
}
