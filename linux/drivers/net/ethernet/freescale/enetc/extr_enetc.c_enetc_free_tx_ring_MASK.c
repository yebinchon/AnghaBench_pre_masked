
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct enetc_tx_swbd {int dummy; } ;
struct enetc_bdr {int bd_count; scalar_t__ next_to_use; scalar_t__ next_to_clean; struct enetc_tx_swbd* tx_swbd; } ;


 int FUNC_0 (struct enetc_bdr*,struct enetc_tx_swbd*) ;

__attribute__((used)) static void FUNC_1(struct enetc_bdr *VAR_0)
{
 int VAR_1;

 if (!VAR_0->tx_swbd)
  return;

 for (VAR_1 = 0; VAR_1 < VAR_0->bd_count; VAR_1++) {
  struct enetc_tx_swbd *VAR_2 = &VAR_0->tx_swbd[VAR_1];

  FUNC_0(VAR_0, VAR_2);
 }

 VAR_0->next_to_clean = 0;
 VAR_0->next_to_use = 0;
}
