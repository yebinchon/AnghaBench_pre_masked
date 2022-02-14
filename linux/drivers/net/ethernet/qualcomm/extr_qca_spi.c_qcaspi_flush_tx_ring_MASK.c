
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ size; scalar_t__ head; scalar_t__ tail; int ** skb; } ;
struct qcaspi {TYPE_3__* net_dev; TYPE_2__ txr; } ;
struct TYPE_5__ {int tx_dropped; } ;
struct TYPE_7__ {TYPE_1__ stats; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (TYPE_3__*) ;

__attribute__((used)) static void
FUNC_3(struct qcaspi *VAR_1)
{
 int VAR_2;




 FUNC_1(VAR_1->net_dev);
 for (VAR_2 = 0; VAR_2 < VAR_0; VAR_2++) {
  if (VAR_1->txr.skb[VAR_2]) {
   FUNC_0(VAR_1->txr.skb[VAR_2]);
   VAR_1->txr.skb[VAR_2] = ((void*)0);
   VAR_1->net_dev->stats.tx_dropped++;
  }
 }
 VAR_1->txr.tail = 0;
 VAR_1->txr.head = 0;
 VAR_1->txr.size = 0;
 FUNC_2(VAR_1->net_dev);
}
