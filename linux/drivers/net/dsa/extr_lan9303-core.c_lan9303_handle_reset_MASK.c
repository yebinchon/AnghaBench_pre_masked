
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lan9303 {scalar_t__ reset_duration; int reset_gpio; } ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (scalar_t__) ;

__attribute__((used)) static void FUNC_2(struct lan9303 *VAR_0)
{
 if (!VAR_0->reset_gpio)
  return;

 if (VAR_0->reset_duration != 0)
  FUNC_1(VAR_0->reset_duration);


 FUNC_0(VAR_0->reset_gpio, 0);
}
