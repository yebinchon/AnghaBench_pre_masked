
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int mac_addr_value; } ;
struct aggregator {int * slave; scalar_t__ aggregator_identifier; TYPE_1__ aggregator_mac_address; } ;


 int FUNC_0 (struct aggregator*) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(struct aggregator *VAR_0)
{
 if (VAR_0) {
  FUNC_0(VAR_0);

  FUNC_1(VAR_0->aggregator_mac_address.mac_addr_value);
  VAR_0->aggregator_identifier = 0;
  VAR_0->slave = ((void*)0);
 }
}
