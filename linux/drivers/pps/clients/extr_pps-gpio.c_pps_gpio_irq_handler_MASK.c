
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pps_gpio_device_data {int pps; scalar_t__ assert_falling_edge; scalar_t__ capture_clear; int gpio_pin; } ;
struct pps_event_time {int dummy; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,struct pps_event_time*,int ,void*) ;
 int FUNC_2 (struct pps_event_time*) ;

__attribute__((used)) static irqreturn_t FUNC_3(int VAR_3, void *VAR_4)
{
 const struct pps_gpio_device_data *VAR_5;
 struct pps_event_time VAR_6;
 int VAR_7;


 FUNC_2(&VAR_6);

 VAR_5 = VAR_4;

 VAR_7 = FUNC_0(VAR_5->gpio_pin);
 if ((VAR_7 && !VAR_5->assert_falling_edge) ||
   (!VAR_7 && VAR_5->assert_falling_edge))
  FUNC_1(VAR_5->pps, &VAR_6, VAR_1, VAR_4);
 else if (VAR_5->capture_clear &&
   ((VAR_7 && VAR_5->assert_falling_edge) ||
   (!VAR_7 && !VAR_5->assert_falling_edge)))
  FUNC_1(VAR_5->pps, &VAR_6, VAR_2, VAR_4);

 return VAR_0;
}
