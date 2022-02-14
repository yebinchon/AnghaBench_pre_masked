
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int tx_errors; } ;
struct net_device {int base_addr; TYPE_1__ stats; int name; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct net_device*) ;
 int FUNC_4 (int ,scalar_t__) ;
 int FUNC_5 (char*,int ,int ,int ,int ) ;

__attribute__((used)) static void
FUNC_6 (struct net_device *VAR_6)
{
 int VAR_7 = VAR_6->base_addr;


 FUNC_5("%s: transmit timed out, Tx_status %2.2x status %4.4x Tx FIFO room %d\n",
  VAR_6->name, FUNC_0(VAR_7 + VAR_3), FUNC_1(VAR_7 + VAR_1),
  FUNC_1(VAR_7 + VAR_2));
 VAR_6->stats.tx_errors++;
 FUNC_2(VAR_6);

 FUNC_4(VAR_5, VAR_7 + VAR_0);
 FUNC_4(VAR_4, VAR_7 + VAR_0);
 FUNC_3(VAR_6);
}
