
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_2__ {int agc_analog_digital_select_gpio; } ;
struct cx231xx {TYPE_1__ board; } ;


 int FUNC_0 (struct cx231xx*,int ,int) ;
 int FUNC_1 (struct cx231xx*,int ,int ) ;

int FUNC_2(struct cx231xx *VAR_0,
           u8 VAR_1)
{
 int VAR_2 = 0;


 VAR_2 = FUNC_0(VAR_0,
         VAR_0->board.
         agc_analog_digital_select_gpio, 1);


 VAR_2 = FUNC_1(VAR_0,
       VAR_0->board.agc_analog_digital_select_gpio,
       VAR_1);

 if (VAR_2 < 0)
  return VAR_2;

 return 0;
}
