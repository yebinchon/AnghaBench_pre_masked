
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u8 ;
struct vnt_private {long* ldBmThreshold; int uBBVGADiffCount; int byBBVGANew; int byBBVGACurrent; TYPE_5__* pcid; int * abyBBVGA; scalar_t__ uCurrRSSI; TYPE_4__* vif; TYPE_2__* hw; int bUpdateBBVGA; } ;
struct TYPE_10__ {int dev; } ;
struct TYPE_8__ {scalar_t__ assoc; } ;
struct TYPE_9__ {TYPE_3__ bss_conf; } ;
struct TYPE_6__ {int flags; } ;
struct TYPE_7__ {TYPE_1__ conf; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct vnt_private*,int ) ;
 int VAR_2 ;
 int FUNC_1 (struct vnt_private*,int ,long*) ;
 int FUNC_2 (int *,char*,int,int ,int ,int) ;

__attribute__((used)) static void FUNC_3(struct vnt_private *VAR_3)
{
 long VAR_4;
 int VAR_5;

 if (!VAR_3->bUpdateBBVGA)
  return;

 if (VAR_3->hw->conf.flags & VAR_2)
  return;

 if (!(VAR_3->vif->bss_conf.assoc && VAR_3->uCurrRSSI))
  return;

 FUNC_1(VAR_3, (u8)VAR_3->uCurrRSSI, &VAR_4);

 for (VAR_5 = 0; VAR_5 < VAR_1; VAR_5++) {
  if (VAR_4 < VAR_3->ldBmThreshold[VAR_5]) {
   VAR_3->byBBVGANew = VAR_3->abyBBVGA[VAR_5];
   break;
  }
 }

 if (VAR_3->byBBVGANew == VAR_3->byBBVGACurrent) {
  VAR_3->uBBVGADiffCount = 1;
  return;
 }

 VAR_3->uBBVGADiffCount++;

 if (VAR_3->uBBVGADiffCount == 1) {

  FUNC_0(VAR_3, VAR_3->byBBVGANew);

  FUNC_2(&VAR_3->pcid->dev,
   "First RSSI[%d] NewGain[%d] OldGain[%d] Count[%d]\n",
   (int)VAR_4, VAR_3->byBBVGANew,
   VAR_3->byBBVGACurrent,
   (int)VAR_3->uBBVGADiffCount);
 }

 if (VAR_3->uBBVGADiffCount >= VAR_0) {
  FUNC_2(&VAR_3->pcid->dev,
   "RSSI[%d] NewGain[%d] OldGain[%d] Count[%d]\n",
   (int)VAR_4, VAR_3->byBBVGANew,
   VAR_3->byBBVGACurrent,
   (int)VAR_3->uBBVGADiffCount);

  FUNC_0(VAR_3, VAR_3->byBBVGANew);
 }
}
