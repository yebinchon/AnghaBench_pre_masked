
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gelic_descr_chain {struct gelic_descr* tail; struct gelic_descr* head; } ;
struct gelic_descr {scalar_t__ next_descr_addr; int bus_addr; struct gelic_descr* next; } ;
struct gelic_card {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct gelic_descr*,int ) ;

__attribute__((used)) static void FUNC_2(struct gelic_card *VAR_1,
       struct gelic_descr_chain *VAR_2,
       struct gelic_descr *VAR_3)
{
 struct gelic_descr *VAR_4;

 for (VAR_4 = VAR_3; VAR_3 != VAR_4->next; VAR_4++) {
  FUNC_1(VAR_4, VAR_0);
  VAR_4->next_descr_addr = FUNC_0(VAR_4->next->bus_addr);
 }

 VAR_2->head = VAR_3;
 VAR_2->tail = (VAR_4 - 1);

 (VAR_4 - 1)->next_descr_addr = 0;
}
