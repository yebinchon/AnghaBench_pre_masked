
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int rx_length_errors; int rx_crc_errors; int rx_errors; } ;
struct net_device {TYPE_1__ stats; } ;
struct ftmac100_rxdes {int dummy; } ;
struct ftmac100 {struct net_device* netdev; } ;


 int FUNC_0 (struct ftmac100_rxdes*) ;
 int FUNC_1 (struct ftmac100_rxdes*) ;
 int FUNC_2 (struct ftmac100_rxdes*) ;
 int FUNC_3 (struct ftmac100_rxdes*) ;
 int FUNC_4 (struct ftmac100_rxdes*) ;
 scalar_t__ FUNC_5 () ;
 int FUNC_6 (struct net_device*,char*) ;
 scalar_t__ FUNC_7 (int ) ;

__attribute__((used)) static bool FUNC_8(struct ftmac100 *VAR_0,
         struct ftmac100_rxdes *VAR_1)
{
 struct net_device *VAR_2 = VAR_0->netdev;
 bool VAR_3 = 0;

 if (FUNC_7(FUNC_4(VAR_1))) {
  if (FUNC_5())
   FUNC_6(VAR_2, "rx err\n");

  VAR_2->stats.rx_errors++;
  VAR_3 = 1;
 }

 if (FUNC_7(FUNC_0(VAR_1))) {
  if (FUNC_5())
   FUNC_6(VAR_2, "rx crc err\n");

  VAR_2->stats.rx_crc_errors++;
  VAR_3 = 1;
 }

 if (FUNC_7(FUNC_1(VAR_1))) {
  if (FUNC_5())
   FUNC_6(VAR_2, "rx frame too long\n");

  VAR_2->stats.rx_length_errors++;
  VAR_3 = 1;
 } else if (FUNC_7(FUNC_3(VAR_1))) {
  if (FUNC_5())
   FUNC_6(VAR_2, "rx runt\n");

  VAR_2->stats.rx_length_errors++;
  VAR_3 = 1;
 } else if (FUNC_7(FUNC_2(VAR_1))) {
  if (FUNC_5())
   FUNC_6(VAR_2, "rx odd nibble\n");

  VAR_2->stats.rx_length_errors++;
  VAR_3 = 1;
 }

 return VAR_3;
}
