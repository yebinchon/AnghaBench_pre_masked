
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ar5523_rx_data {int urb; int list; } ;
struct TYPE_2__ {scalar_t__ next; } ;
struct ar5523 {TYPE_1__ rx_data_free; } ;


 int FUNC_0 (struct ar5523*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4(struct ar5523 *VAR_0)
{
 struct ar5523_rx_data *VAR_1;

 FUNC_0(VAR_0);
 while (!FUNC_2(&VAR_0->rx_data_free)) {
  VAR_1 = (struct ar5523_rx_data *) VAR_0->rx_data_free.next;
  FUNC_1(&VAR_1->list);
  FUNC_3(VAR_1->urb);
 }
}
