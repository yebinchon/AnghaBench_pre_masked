
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct gelic_descr_chain {int tail; } ;
struct gelic_card {TYPE_1__* rx_top; struct gelic_descr_chain rx_chain; } ;
struct TYPE_2__ {int prev; } ;


 int FUNC_0 (struct gelic_card*) ;

__attribute__((used)) static int FUNC_1(struct gelic_card *VAR_0)
{
 struct gelic_descr_chain *VAR_1;
 int VAR_2;
 VAR_1 = &VAR_0->rx_chain;
 VAR_2 = FUNC_0(VAR_0);
 VAR_1->tail = VAR_0->rx_top->prev;
 return VAR_2;
}
