
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u16 ;
struct fm10k_mbx_info {int tx_dropped; int tx; scalar_t__ max_size; } ;


 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(struct fm10k_mbx_info *VAR_0, u16 VAR_1)
{
 u16 VAR_2;

 VAR_0->max_size = VAR_1;


 for (VAR_2 = FUNC_1(&VAR_0->tx);
      VAR_2 > VAR_1;
      VAR_2 = FUNC_1(&VAR_0->tx)) {
  FUNC_0(&VAR_0->tx);
  VAR_0->tx_dropped++;
 }
}
