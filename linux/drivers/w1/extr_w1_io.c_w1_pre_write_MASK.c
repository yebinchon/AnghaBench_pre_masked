
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct w1_master {scalar_t__ pullup_duration; TYPE_1__* bus_master; scalar_t__ enable_pullup; } ;
struct TYPE_2__ {int data; int (* set_pullup ) (int ,scalar_t__) ;} ;


 int FUNC_0 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_1(struct w1_master *VAR_0)
{
 if (VAR_0->pullup_duration &&
  VAR_0->enable_pullup && VAR_0->bus_master->set_pullup) {
  VAR_0->bus_master->set_pullup(VAR_0->bus_master->data,
   VAR_0->pullup_duration);
 }
}
