
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct net_device {int base_addr; } ;
struct TYPE_3__ {int tx_bit; } ;
struct TYPE_4__ {int shreg; TYPE_1__ ser12; } ;
struct baycom_state {TYPE_2__ modem; int hdrv; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int,int ) ;
 int FUNC_3 (struct net_device*,int) ;

__attribute__((used)) static inline void FUNC_4(struct net_device *VAR_0, struct baycom_state *VAR_1)
{

 FUNC_3(VAR_0, 12);




 FUNC_2(0x0e | (!!VAR_1->modem.ser12.tx_bit), FUNC_0(VAR_0->base_addr));
 if (VAR_1->modem.shreg <= 1)
  VAR_1->modem.shreg = 0x10000 | FUNC_1(&VAR_1->hdrv);
 VAR_1->modem.ser12.tx_bit = !(VAR_1->modem.ser12.tx_bit ^
       (VAR_1->modem.shreg & 1));
 VAR_1->modem.shreg >>= 1;
}
