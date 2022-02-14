
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mtd_info {int size; int erasesize; int writesize; int numchips; int chipshift; struct flchip* chips; TYPE_1__* qinfo; int _unpoint; int _point; int _unlock; int _lock; int _writev; int _write; int _erase; int flags; void* type; int _read; struct map_info* priv; } ;
struct map_info {struct mtd_info* fldrv_priv; } ;
struct lpddr_private {int size; int erasesize; int writesize; int numchips; int chipshift; struct flchip* chips; TYPE_1__* qinfo; int _unpoint; int _point; int _unlock; int _lock; int _writev; int _write; int _erase; int flags; void* type; int _read; struct map_info* priv; } ;
struct flchip_shared {int lock; int * erasing; int writing; } ;
struct flchip {int start; int mutex; int wq; struct flchip_shared* priv; int state; int oldstate; } ;
struct TYPE_2__ {int DevSizeShift; int UniformBlockSizeShift; int BufSizeShift; int HWPartsNum; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 void* VAR_4 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct mtd_info*) ;
 struct flchip_shared* FUNC_2 (int,int,int ) ;
 struct mtd_info* FUNC_3 (int,int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 scalar_t__ FUNC_4 (struct map_info*) ;
 int FUNC_5 (int *) ;

struct mtd_info *FUNC_6(struct map_info *VAR_13)
{
 struct lpddr_private *VAR_14 = VAR_13->fldrv_priv;
 struct flchip_shared *VAR_15;
 struct flchip *VAR_16;
 struct mtd_info *VAR_17;
 int VAR_18;
 int VAR_19, VAR_20;

 VAR_17 = FUNC_3(sizeof(*VAR_17), VAR_1);
 if (!VAR_17)
  return ((void*)0);
 VAR_17->priv = VAR_13;
 VAR_17->type = VAR_4;


 VAR_17->_read = VAR_8;
 VAR_17->type = VAR_4;
 VAR_17->flags = VAR_3;
 VAR_17->flags &= ~VAR_2;
 VAR_17->_erase = VAR_5;
 VAR_17->_write = VAR_11;
 VAR_17->_writev = VAR_12;
 VAR_17->_lock = VAR_6;
 VAR_17->_unlock = VAR_9;
 if (FUNC_4(VAR_13)) {
  VAR_17->_point = VAR_7;
  VAR_17->_unpoint = VAR_10;
 }
 VAR_17->size = 1 << VAR_14->qinfo->DevSizeShift;
 VAR_17->erasesize = 1 << VAR_14->qinfo->UniformBlockSizeShift;
 VAR_17->writesize = 1 << VAR_14->qinfo->BufSizeShift;

 VAR_15 = FUNC_2(VAR_14->numchips, sizeof(struct flchip_shared),
      VAR_1);
 if (!VAR_15) {
  FUNC_1(VAR_14);
  FUNC_1(VAR_17);
  return ((void*)0);
 }

 VAR_16 = &VAR_14->chips[0];
 VAR_18 = VAR_14->numchips / VAR_14->qinfo->HWPartsNum;
 for (VAR_19 = 0; VAR_19 < VAR_18; VAR_19++) {
  VAR_15[VAR_19].writing = *(VAR_15[VAR_19].erasing = ((void*)0));
  FUNC_5(&VAR_15[VAR_19].lock);
  for (VAR_20 = 0; VAR_20 < VAR_14->qinfo->HWPartsNum; VAR_20++) {
   *VAR_16 = VAR_14->chips[VAR_19];
   VAR_16->start += VAR_20 << VAR_14->chipshift;
   VAR_16->oldstate = VAR_16->state = VAR_0;
   VAR_16->priv = &VAR_15[VAR_19];


   FUNC_0(&VAR_16->wq);
   FUNC_5(&VAR_16->mutex);
   VAR_16++;
  }
 }

 return VAR_17;
}
