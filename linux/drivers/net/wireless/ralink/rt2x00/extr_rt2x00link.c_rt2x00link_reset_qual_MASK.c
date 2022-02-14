
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct link_qual {scalar_t__ tx_failed; scalar_t__ tx_success; scalar_t__ rx_failed; scalar_t__ rx_success; } ;
struct TYPE_2__ {struct link_qual qual; } ;
struct rt2x00_dev {TYPE_1__ link; } ;



__attribute__((used)) static void FUNC_0(struct rt2x00_dev *VAR_0)
{
 struct link_qual *VAR_1 = &VAR_0->link.qual;

 VAR_1->rx_success = 0;
 VAR_1->rx_failed = 0;
 VAR_1->tx_success = 0;
 VAR_1->tx_failed = 0;
}
