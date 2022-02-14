
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int cntxt_id; } ;
struct sge_eth_txq {int dbqtimerix; TYPE_1__ q; } ;
struct sge {int* dbqtimer_val; struct sge_eth_txq* ethtxq; } ;
struct port_info {size_t first_qset; int nqsets; struct adapter* adapter; } ;
struct net_device {int dummy; } ;
struct adapter {int flags; int pf; int mbox; struct sge sge; } ;


 int FUNC_0 (int*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 int VAR_3 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int VAR_4 ;
 struct port_info* FUNC_4 (struct net_device*) ;
 int FUNC_5 (struct adapter*,int ,int ,int ,int,int*,int*) ;

__attribute__((used)) static int FUNC_6(struct net_device *VAR_5, int VAR_6)
{
 int VAR_7, VAR_8, VAR_9, VAR_10, VAR_11;
 struct port_info *VAR_12 = FUNC_4(VAR_5);
 struct adapter *VAR_13 = VAR_12->adapter;
 struct sge *VAR_14 = &VAR_13->sge;
 struct sge_eth_txq *VAR_15;
 u32 VAR_16, VAR_17;
 int VAR_18;

 if (!(VAR_13->flags & VAR_1))
  return 0;




 VAR_11 = VAR_4;
 VAR_9 = 0;
 for (VAR_8 = 0; VAR_8 < FUNC_0(VAR_14->dbqtimer_val); VAR_8++) {
  VAR_10 = VAR_14->dbqtimer_val[VAR_8] - VAR_6;
  if (VAR_10 < 0)
   VAR_10 = -VAR_10;
  if (VAR_10 < VAR_11) {
   VAR_11 = VAR_10;
   VAR_9 = VAR_8;
  }
 }





 VAR_15 = &VAR_14->ethtxq[VAR_12->first_qset];
 if (VAR_15->dbqtimerix == VAR_9)
  return 0;

 for (VAR_7 = 0; VAR_7 < VAR_12->nqsets; VAR_7++, VAR_15++) {
  if (VAR_13->flags & VAR_0) {
   VAR_16 =
    (FUNC_1(VAR_2) |
     FUNC_2(VAR_3) |
     FUNC_3(VAR_15->q.cntxt_id));
   VAR_17 = VAR_9;
   VAR_18 = FUNC_5(VAR_13, VAR_13->mbox, VAR_13->pf, 0,
         1, &VAR_16, &VAR_17);
   if (VAR_18)
    return VAR_18;
  }
  VAR_15->dbqtimerix = VAR_9;
 }
 return 0;
}
