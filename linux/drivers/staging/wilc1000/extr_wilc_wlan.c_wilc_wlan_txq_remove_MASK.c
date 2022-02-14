
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wilc {int txq_entries; } ;
struct txq_entry_t {int list; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(struct wilc *VAR_0, struct txq_entry_t *VAR_1)
{
 FUNC_0(&VAR_1->list);
 VAR_0->txq_entries -= 1;
}
