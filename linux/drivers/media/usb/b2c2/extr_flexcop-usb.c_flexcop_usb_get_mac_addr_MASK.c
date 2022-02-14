
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int proposed_mac; } ;
struct flexcop_device {TYPE_1__ dvb_adapter; int bus_specific; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int ,int,int,int ,int) ;

__attribute__((used)) static int FUNC_1(struct flexcop_device *VAR_2, int VAR_3)
{
 return FUNC_0(VAR_2->bus_specific, VAR_0,
  VAR_1, 0x1f010, 1,
  VAR_2->dvb_adapter.proposed_mac, 6);
}
