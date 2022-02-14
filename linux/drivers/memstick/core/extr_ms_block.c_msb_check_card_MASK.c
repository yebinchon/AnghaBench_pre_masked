
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct msb_data {scalar_t__ card_dead; } ;
struct memstick_dev {int dummy; } ;


 struct msb_data* FUNC_0 (struct memstick_dev*) ;

__attribute__((used)) static int FUNC_1(struct memstick_dev *VAR_0)
{
 struct msb_data *VAR_1 = FUNC_0(VAR_0);
 return (VAR_1->card_dead == 0);
}
