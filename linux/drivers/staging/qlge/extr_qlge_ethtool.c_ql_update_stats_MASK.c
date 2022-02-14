
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
struct TYPE_2__ {int tx_pkts; } ;
struct ql_adapter {int stats_lock; int xg_sem_mask; int ndev; TYPE_1__ nic_stats; } ;


 int VAR_0 ;
 int FUNC_0 (struct ql_adapter*) ;
 int VAR_1 ;
 int FUNC_1 (struct ql_adapter*,int ,int ,char*,...) ;
 scalar_t__ FUNC_2 (struct ql_adapter*,int,int *) ;
 scalar_t__ FUNC_3 (struct ql_adapter*,int ) ;
 int FUNC_4 (struct ql_adapter*,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static void FUNC_7(struct ql_adapter *VAR_2)
{
 u32 VAR_3;
 u64 VAR_4;
 u64 *VAR_5 = &VAR_2->nic_stats.tx_pkts;

 FUNC_5(&VAR_2->stats_lock);
 if (FUNC_3(VAR_2, VAR_2->xg_sem_mask)) {
  FUNC_1(VAR_2, VAR_1, VAR_2->ndev,
     "Couldn't get xgmac sem.\n");
  goto quit;
 }



 for (VAR_3 = 0x200; VAR_3 < 0x280; VAR_3 += 8) {
  if (FUNC_2(VAR_2, VAR_3, &VAR_4)) {
   FUNC_1(VAR_2, VAR_1, VAR_2->ndev,
      "Error reading status register 0x%.04x.\n",
      VAR_3);
   goto end;
  } else
   *VAR_5 = VAR_4;
  VAR_5++;
 }




 for (VAR_3 = 0x300; VAR_3 < 0x3d0; VAR_3 += 8) {
  if (FUNC_2(VAR_2, VAR_3, &VAR_4)) {
   FUNC_1(VAR_2, VAR_1, VAR_2->ndev,
      "Error reading status register 0x%.04x.\n",
      VAR_3);
   goto end;
  } else
   *VAR_5 = VAR_4;
  VAR_5++;
 }


 VAR_5 += VAR_0;




 for (VAR_3 = 0x500; VAR_3 < 0x540; VAR_3 += 8) {
  if (FUNC_2(VAR_2, VAR_3, &VAR_4)) {
   FUNC_1(VAR_2, VAR_1, VAR_2->ndev,
      "Error reading status register 0x%.04x.\n",
      VAR_3);
   goto end;
  } else
   *VAR_5 = VAR_4;
  VAR_5++;
 }




 for (VAR_3 = 0x568; VAR_3 < 0x5a8; VAR_3 += 8) {
  if (FUNC_2(VAR_2, VAR_3, &VAR_4)) {
   FUNC_1(VAR_2, VAR_1, VAR_2->ndev,
      "Error reading status register 0x%.04x.\n",
      VAR_3);
   goto end;
  } else
   *VAR_5 = VAR_4;
  VAR_5++;
 }




 if (FUNC_2(VAR_2, 0x5b8, &VAR_4)) {
  FUNC_1(VAR_2, VAR_1, VAR_2->ndev,
     "Error reading status register 0x%.04x.\n", VAR_3);
  goto end;
 } else
  *VAR_5 = VAR_4;
end:
 FUNC_4(VAR_2, VAR_2->xg_sem_mask);
quit:
 FUNC_6(&VAR_2->stats_lock);

 FUNC_0(VAR_2);
}
