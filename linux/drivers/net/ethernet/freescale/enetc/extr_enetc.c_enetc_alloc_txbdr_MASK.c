
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef union enetc_tx_bd {int dummy; } enetc_tx_bd ;
struct enetc_tx_swbd {int dummy; } ;
struct enetc_bdr {int bd_count; scalar_t__ next_to_use; scalar_t__ next_to_clean; int tx_swbd; } ;


 int VAR_0 ;
 int FUNC_0 (struct enetc_bdr*,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int) ;

__attribute__((used)) static int FUNC_3(struct enetc_bdr *VAR_1)
{
 int VAR_2;

 VAR_1->tx_swbd = FUNC_2(VAR_1->bd_count * sizeof(struct enetc_tx_swbd));
 if (!VAR_1->tx_swbd)
  return -VAR_0;

 VAR_2 = FUNC_0(VAR_1, sizeof(union enetc_tx_bd));
 if (VAR_2) {
  FUNC_1(VAR_1->tx_swbd);
  return VAR_2;
 }

 VAR_1->next_to_clean = 0;
 VAR_1->next_to_use = 0;

 return 0;
}
