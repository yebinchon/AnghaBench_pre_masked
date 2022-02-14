
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int multicast; int rx_length_errors; int rx_crc_errors; int rx_errors; } ;
struct net_device {TYPE_1__ stats; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 scalar_t__ FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int) ;

__attribute__((used)) static void
FUNC_2(struct net_device *VAR_5, unsigned int VAR_6)
{
 int VAR_7 = 0;

 if (FUNC_1(VAR_6 & VAR_1)) {
  VAR_5->stats.rx_errors++;
  if (FUNC_1(VAR_6 & VAR_0)) {
   VAR_5->stats.rx_crc_errors++;
   VAR_7 = 1;
  }
 }
 if (FUNC_0(!VAR_7)) {
  if (FUNC_1((VAR_6 & VAR_2) &&
        (VAR_6 & VAR_3)))
   VAR_5->stats.rx_length_errors++;
  if (VAR_6 & VAR_4)
   VAR_5->stats.multicast++;
 }
}
