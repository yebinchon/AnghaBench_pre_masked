
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int capability; } ;
struct rtllib_device {TYPE_1__ current_network; } ;
struct cb_desc {int bUseShortPreamble; int data_rate; } ;


 int VAR_0 ;

__attribute__((used)) static void FUNC_0(struct rtllib_device *VAR_1,
        struct cb_desc *VAR_2)
{
 VAR_2->bUseShortPreamble = 0;
 if (VAR_2->data_rate == 2)
  return;
 else if (VAR_1->current_network.capability &
   VAR_0)
  VAR_2->bUseShortPreamble = 1;
}
