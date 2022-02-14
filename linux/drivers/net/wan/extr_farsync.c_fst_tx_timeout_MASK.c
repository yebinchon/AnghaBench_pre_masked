
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int tx_aborted_errors; int tx_errors; } ;
struct net_device {TYPE_1__ stats; } ;
struct fst_port_info {scalar_t__ start; int index; struct fst_card_info* card; } ;
struct fst_card_info {int card_no; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,int ,int ) ;
 struct fst_port_info* FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct fst_port_info*,int ) ;
 int FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct net_device*) ;

__attribute__((used)) static void
FUNC_5(struct net_device *VAR_2)
{
 struct fst_port_info *VAR_3;
 struct fst_card_info *VAR_4;

 VAR_3 = FUNC_1(VAR_2);
 VAR_4 = VAR_3->card;
 VAR_2->stats.tx_errors++;
 VAR_2->stats.tx_aborted_errors++;
 FUNC_0(VAR_1, "Tx timeout card %d port %d\n",
     VAR_4->card_no, VAR_3->index);
 FUNC_2(VAR_3, VAR_0);

 FUNC_3(VAR_2);
 FUNC_4(VAR_2);
 VAR_3->start = 0;
}
