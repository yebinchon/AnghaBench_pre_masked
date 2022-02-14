
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int flags; } ;
struct rt2x00_dev {TYPE_1__ led_radio; TYPE_1__ led_assoc; TYPE_1__ led_qual; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;

void FUNC_1(struct rt2x00_dev *VAR_1)
{
 if (VAR_1->led_qual.flags & VAR_0)
  FUNC_0(&VAR_1->led_qual);
 if (VAR_1->led_assoc.flags & VAR_0)
  FUNC_0(&VAR_1->led_assoc);
 if (VAR_1->led_radio.flags & VAR_0)
  FUNC_0(&VAR_1->led_radio);
}
