
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_3__ {int irqmask; } ;
struct TYPE_4__ {int * napi; int tx_napi; scalar_t__ csa_complete; int pre_tbtt_tasklet; TYPE_1__ mmio; int state; } ;
struct mt7603_dev {TYPE_2__ mt76; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 int VAR_5 ;
 int FUNC_1 (int) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (struct mt7603_dev*,int) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (struct mt7603_dev*,int ) ;
 int FUNC_5 (struct mt7603_dev*,int ,int) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int ,int *) ;

irqreturn_t FUNC_9(int VAR_8, void *VAR_9)
{
 struct mt7603_dev *VAR_10 = VAR_9;
 u32 VAR_11;

 VAR_11 = FUNC_4(VAR_10, VAR_6);
 FUNC_5(VAR_10, VAR_6, VAR_11);

 if (!FUNC_8(VAR_2, &VAR_10->mt76.state))
  return VAR_1;

 VAR_11 &= VAR_10->mt76.mmio.irqmask;

 if (VAR_11 & VAR_5) {
  u32 VAR_12 = FUNC_4(VAR_10, FUNC_0(3));

  FUNC_5(VAR_10, FUNC_0(3), VAR_12);
  if (VAR_12 & VAR_3)
   FUNC_7(&VAR_10->mt76.pre_tbtt_tasklet);

  if ((VAR_12 & VAR_4) && VAR_10->mt76.csa_complete)
   FUNC_3(&VAR_10->mt76);
 }

 if (VAR_11 & VAR_7) {
  FUNC_2(VAR_10, VAR_7);
  FUNC_6(&VAR_10->mt76.tx_napi);
 }

 if (VAR_11 & FUNC_1(0)) {
  FUNC_2(VAR_10, FUNC_1(0));
  FUNC_6(&VAR_10->mt76.napi[0]);
 }

 if (VAR_11 & FUNC_1(1)) {
  FUNC_2(VAR_10, FUNC_1(1));
  FUNC_6(&VAR_10->mt76.napi[1]);
 }

 return VAR_0;
}
