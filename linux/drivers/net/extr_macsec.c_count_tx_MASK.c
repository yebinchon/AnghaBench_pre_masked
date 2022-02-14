
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pcpu_sw_netstats {int tx_bytes; int syncp; int tx_packets; } ;
struct net_device {int tstats; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int) ;
 struct pcpu_sw_netstats* FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(struct net_device *VAR_2, int VAR_3, int VAR_4)
{
 if (FUNC_0(VAR_3 == VAR_1 || VAR_3 == VAR_0)) {
  struct pcpu_sw_netstats *VAR_5 = FUNC_1(VAR_2->tstats);

  FUNC_2(&VAR_5->syncp);
  VAR_5->tx_packets++;
  VAR_5->tx_bytes += VAR_4;
  FUNC_3(&VAR_5->syncp);
 }
}
