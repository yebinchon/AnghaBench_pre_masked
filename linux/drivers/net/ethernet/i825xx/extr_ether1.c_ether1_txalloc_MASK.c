
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct TYPE_2__ {int tx_tail; int tx_head; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* FUNC_0 (struct net_device*) ;

__attribute__((used)) static int
FUNC_1 (struct net_device *VAR_2, int VAR_3)
{
 int VAR_4, VAR_5;

 VAR_3 = (VAR_3 + 1) & ~1;
 VAR_5 = FUNC_0(VAR_2)->tx_tail;

 if (FUNC_0(VAR_2)->tx_head + VAR_3 > VAR_0) {
  if (VAR_5 > FUNC_0(VAR_2)->tx_head)
   return -1;
  VAR_4 = VAR_1;
  if (VAR_4 + VAR_3 > VAR_5)
   return -1;
  FUNC_0(VAR_2)->tx_head = VAR_4 + VAR_3;
 } else {
  if (FUNC_0(VAR_2)->tx_head < VAR_5 && (FUNC_0(VAR_2)->tx_head + VAR_3) > VAR_5)
   return -1;
  VAR_4 = FUNC_0(VAR_2)->tx_head;
  FUNC_0(VAR_2)->tx_head += VAR_3;
 }

 return VAR_4;
}
