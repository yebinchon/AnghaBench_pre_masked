
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_3__ {int irqmask; } ;
struct TYPE_4__ {int * napi; int tx_napi; TYPE_1__ mmio; int state; } ;
struct mt7615_dev {TYPE_2__ mt76; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct mt7615_dev*,int) ;
 int FUNC_2 (struct mt7615_dev*,int ) ;
 int FUNC_3 (struct mt7615_dev*,int ,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ,int *) ;

__attribute__((used)) static irqreturn_t FUNC_6(int VAR_5, void *VAR_6)
{
 struct mt7615_dev *VAR_7 = VAR_6;
 u32 VAR_8;

 VAR_8 = FUNC_2(VAR_7, VAR_3);
 FUNC_3(VAR_7, VAR_3, VAR_8);

 if (!FUNC_5(VAR_2, &VAR_7->mt76.state))
  return VAR_1;

 VAR_8 &= VAR_7->mt76.mmio.irqmask;

 if (VAR_8 & VAR_4) {
  FUNC_1(VAR_7, VAR_4);
  FUNC_4(&VAR_7->mt76.tx_napi);
 }

 if (VAR_8 & FUNC_0(0)) {
  FUNC_1(VAR_7, FUNC_0(0));
  FUNC_4(&VAR_7->mt76.napi[0]);
 }

 if (VAR_8 & FUNC_0(1)) {
  FUNC_1(VAR_7, FUNC_0(1));
  FUNC_4(&VAR_7->mt76.napi[1]);
 }

 return VAR_0;
}
