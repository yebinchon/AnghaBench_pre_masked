
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {char* name; } ;
struct bnxt {int tx_nr_rings_per_tc; int cp_nr_rings; int flags; int rx_nr_rings; TYPE_1__* irq_tbl; struct net_device* dev; } ;
struct TYPE_2__ {int handler; int name; } ;


 int VAR_0 ;
 int FUNC_0 (struct bnxt*,int) ;
 int VAR_1 ;
 int FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct net_device*,int,int,int) ;
 int FUNC_3 (int ,int const,char*,char*,char*,int) ;

__attribute__((used)) static void FUNC_4(struct bnxt *VAR_2)
{
 const int VAR_3 = sizeof(VAR_2->irq_tbl[0].name);
 struct net_device *VAR_4 = VAR_2->dev;
 int VAR_5, VAR_6;

 VAR_5 = FUNC_1(VAR_4);
 if (VAR_5 > 1) {
  int VAR_7, VAR_8, VAR_9;

  for (VAR_7 = 0; VAR_7 < VAR_5; VAR_7++) {
   VAR_9 = VAR_2->tx_nr_rings_per_tc;
   VAR_8 = VAR_7 * VAR_9;
   FUNC_2(VAR_4, VAR_7, VAR_9, VAR_8);
  }
 }

 for (VAR_6 = 0; VAR_6 < VAR_2->cp_nr_rings; VAR_6++) {
  int VAR_10 = FUNC_0(VAR_2, VAR_6);
  char *VAR_11;

  if (VAR_2->flags & VAR_0)
   VAR_11 = "TxRx";
  else if (VAR_6 < VAR_2->rx_nr_rings)
   VAR_11 = "rx";
  else
   VAR_11 = "tx";

  FUNC_3(VAR_2->irq_tbl[VAR_10].name, VAR_3, "%s-%s-%d", VAR_4->name,
    VAR_11, VAR_6);
  VAR_2->irq_tbl[VAR_10].handler = VAR_1;
 }
}
