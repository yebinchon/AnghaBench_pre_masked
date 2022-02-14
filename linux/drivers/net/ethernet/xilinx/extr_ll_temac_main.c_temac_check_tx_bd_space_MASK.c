
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct temac_local {int tx_bd_tail; struct cdmac_bd* tx_bd_v; } ;
struct cdmac_bd {scalar_t__ app0; } ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static inline int FUNC_0(struct temac_local *VAR_2, int VAR_3)
{
 struct cdmac_bd *VAR_4;
 int VAR_5;

 VAR_5 = VAR_2->tx_bd_tail;
 VAR_4 = &VAR_2->tx_bd_v[VAR_5];

 do {
  if (VAR_4->app0)
   return VAR_0;

  VAR_5++;
  if (VAR_5 >= VAR_1)
   VAR_5 = 0;

  VAR_4 = &VAR_2->tx_bd_v[VAR_5];
  VAR_3--;
 } while (VAR_3 >= 0);

 return 0;
}
