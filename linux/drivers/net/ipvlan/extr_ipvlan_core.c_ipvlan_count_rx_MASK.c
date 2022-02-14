
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ipvl_pcpu_stats {unsigned int rx_bytes; int syncp; int rx_mcast; int rx_pkts; } ;
struct ipvl_dev {TYPE_1__* pcpu_stats; } ;
struct TYPE_2__ {int rx_errs; } ;


 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 struct ipvl_pcpu_stats* FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

void FUNC_5(const struct ipvl_dev *VAR_0,
       unsigned int VAR_1, bool VAR_2, bool VAR_3)
{
 if (FUNC_0(VAR_2)) {
  struct ipvl_pcpu_stats *VAR_4;

  VAR_4 = FUNC_2(VAR_0->pcpu_stats);
  FUNC_3(&VAR_4->syncp);
  VAR_4->rx_pkts++;
  VAR_4->rx_bytes += VAR_1;
  if (VAR_3)
   VAR_4->rx_mcast++;
  FUNC_4(&VAR_4->syncp);
 } else {
  FUNC_1(VAR_0->pcpu_stats->rx_errs);
 }
}
