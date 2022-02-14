
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_7__ {int dfs_tasklet; } ;
struct TYPE_5__ {int irqmask; } ;
struct TYPE_8__ {int tx_napi; TYPE_2__* q_tx; scalar_t__ csa_complete; int pre_tbtt_tasklet; int * napi; TYPE_1__ mmio; int state; } ;
struct mt76x02_dev {TYPE_3__ dfs_pd; TYPE_4__ mt76; } ;
typedef int irqreturn_t ;
struct TYPE_6__ {int q; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 size_t VAR_9 ;
 int FUNC_1 (TYPE_4__*) ;
 int FUNC_2 (struct mt76x02_dev*,int ) ;
 int FUNC_3 (struct mt76x02_dev*,int ) ;
 int FUNC_4 (struct mt76x02_dev*,int ,int) ;
 int FUNC_5 (struct mt76x02_dev*,int) ;
 int FUNC_6 (struct mt76x02_dev*,int) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int ,int *) ;
 int FUNC_10 (struct mt76x02_dev*,int,int) ;

irqreturn_t FUNC_11(int VAR_10, void *VAR_11)
{
 struct mt76x02_dev *VAR_12 = VAR_11;
 u32 VAR_13;

 VAR_13 = FUNC_3(VAR_12, VAR_5);
 FUNC_4(VAR_12, VAR_5, VAR_13);

 if (!FUNC_9(VAR_2, &VAR_12->mt76.state))
  return VAR_1;

 FUNC_10(VAR_12, VAR_13, VAR_12->mt76.mmio.irqmask);

 VAR_13 &= VAR_12->mt76.mmio.irqmask;

 if (VAR_13 & FUNC_0(0)) {
  FUNC_5(VAR_12, FUNC_0(0));
  FUNC_7(&VAR_12->mt76.napi[0]);
 }

 if (VAR_13 & FUNC_0(1)) {
  FUNC_5(VAR_12, FUNC_0(1));
  FUNC_7(&VAR_12->mt76.napi[1]);
 }

 if (VAR_13 & VAR_4)
  FUNC_8(&VAR_12->mt76.pre_tbtt_tasklet);


 if (VAR_13 & VAR_6) {
  if (VAR_12->mt76.csa_complete)
   FUNC_1(&VAR_12->mt76);
  else
   FUNC_2(VAR_12, VAR_12->mt76.q_tx[VAR_9].q);
 }

 if (VAR_13 & VAR_8)
  FUNC_6(VAR_12, 1);

 if (VAR_13 & (VAR_8 | VAR_7)) {
  FUNC_5(VAR_12, VAR_7);
  FUNC_7(&VAR_12->mt76.tx_napi);
 }

 if (VAR_13 & VAR_3) {
  FUNC_5(VAR_12, VAR_3);
  FUNC_8(&VAR_12->dfs_pd.dfs_tasklet);
 }

 return VAR_0;
}
