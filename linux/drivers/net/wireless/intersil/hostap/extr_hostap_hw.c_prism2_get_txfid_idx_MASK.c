
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {int next_txfid; scalar_t__* intransmitfid; TYPE_2__* dev; int txfidlock; } ;
typedef TYPE_3__ local_info_t ;
struct TYPE_5__ {int tx_dropped; } ;
struct TYPE_6__ {TYPE_1__ stats; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_3(local_info_t *VAR_4)
{
 int VAR_5, VAR_6;
 unsigned long VAR_7;

 FUNC_1(&VAR_4->txfidlock, VAR_7);
 VAR_6 = VAR_5 = VAR_4->next_txfid;
 do {
  if (VAR_4->intransmitfid[VAR_5] == VAR_2) {
   VAR_4->intransmitfid[VAR_5] = VAR_3;
   FUNC_2(&VAR_4->txfidlock, VAR_7);
   return VAR_5;
  }
  VAR_5++;
  if (VAR_5 >= VAR_1)
   VAR_5 = 0;
 } while (VAR_5 != VAR_6);
 FUNC_2(&VAR_4->txfidlock, VAR_7);

 FUNC_0(VAR_0, "prism2_get_txfid_idx: no room in txfid buf: "
        "packet dropped\n");
 VAR_4->dev->stats.tx_dropped++;

 return -1;
}
