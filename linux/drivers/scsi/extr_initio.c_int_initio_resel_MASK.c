
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8 ;
struct target_control {int drv_flags; int js_period; int sconfig0; } ;
struct scsi_ctrl_blk {int status; size_t target; size_t lun; } ;
struct initio_host {scalar_t__ phase; struct scsi_ctrl_blk* active; struct scsi_ctrl_blk* scb; scalar_t__ addr; struct target_control* active_tc; struct target_control* targets; } ;


 scalar_t__ VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 int FUNC_0 (scalar_t__) ;
 struct scsi_ctrl_blk* FUNC_1 (struct initio_host*,size_t) ;
 int FUNC_2 (struct initio_host*) ;
 int FUNC_3 (struct initio_host*) ;
 int FUNC_4 (struct initio_host*) ;
 int FUNC_5 (int ,scalar_t__) ;
 int FUNC_6 (int,scalar_t__) ;
 int FUNC_7 (struct initio_host*) ;

int FUNC_8(struct initio_host * VAR_14)
{
 struct scsi_ctrl_blk *VAR_15;
 struct target_control *VAR_16;
 u8 VAR_17, VAR_18 = 0;
 u8 VAR_19, VAR_20;

 if ((VAR_15 = VAR_14->active) != ((void*)0)) {

  if (VAR_15->status & VAR_4)
   VAR_15->status &= ~VAR_4;
  VAR_14->active = ((void*)0);
 }

 VAR_19 = FUNC_0(VAR_14->addr + VAR_7);

 VAR_20 = FUNC_0(VAR_14->addr + VAR_12) & 0x0F;

 VAR_16 = &VAR_14->targets[VAR_19];
 VAR_14->active_tc = VAR_16;
 FUNC_5(VAR_16->sconfig0, VAR_14->addr + VAR_10);
 FUNC_5(VAR_16->js_period, VAR_14->addr + VAR_13);


 if (VAR_16->drv_flags & VAR_5) {
  if ((FUNC_2(VAR_14)) == -1)
   return -1;
  if (VAR_14->phase != VAR_0)
   goto no_tag;
  FUNC_6(1, VAR_14->addr + VAR_9);
  FUNC_5(VAR_6, VAR_14->addr + VAR_8);
  if (FUNC_7(VAR_14) == -1)
   return -1;
  VAR_18 = FUNC_0(VAR_14->addr + VAR_11);

  if (VAR_18 < VAR_2 || VAR_18 > VAR_1)
   goto no_tag;

  if (FUNC_2(VAR_14) == -1)
   return -1;

  if (VAR_14->phase != VAR_0)
   goto no_tag;

  FUNC_6(1, VAR_14->addr + VAR_9);
  FUNC_5(VAR_6, VAR_14->addr + VAR_8);
  if (FUNC_7(VAR_14) == -1)
   return -1;
  VAR_17 = FUNC_0(VAR_14->addr + VAR_11);
  VAR_15 = VAR_14->scb + VAR_17;
  if (VAR_15->target != VAR_19 || VAR_15->lun != VAR_20) {
   return FUNC_3(VAR_14);
  }
  if (VAR_15->status != VAR_3) {
   return FUNC_3(VAR_14);
  }
  VAR_14->active = VAR_15;
  if ((FUNC_2(VAR_14)) == -1)
   return -1;
 } else {
       no_tag:
  if ((VAR_15 = FUNC_1(VAR_14, VAR_19 | (VAR_20 << 8))) == ((void*)0)) {
   return FUNC_4(VAR_14);
  }
  VAR_14->active = VAR_15;
  if (!(VAR_16->drv_flags & VAR_5)) {
   if ((FUNC_2(VAR_14)) == -1)
    return -1;
  }
 }
 return 0;
}
