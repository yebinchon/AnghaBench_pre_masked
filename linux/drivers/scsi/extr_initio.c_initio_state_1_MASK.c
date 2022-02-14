
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct target_control {int sconfig0; int flags; } ;
struct scsi_ctrl_blk {int ident; int tagmsg; int tagid; } ;
struct initio_host {scalar_t__ phase; scalar_t__ addr; struct target_control* active_tc; struct scsi_ctrl_blk* active; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 size_t VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;
 scalar_t__ VAR_17 ;
 scalar_t__ VAR_18 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (struct initio_host*,struct scsi_ctrl_blk*) ;
 int* VAR_19 ;
 int FUNC_2 (struct initio_host*,struct scsi_ctrl_blk*) ;
 int FUNC_3 (int,scalar_t__) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (struct initio_host*) ;

__attribute__((used)) static int FUNC_6(struct initio_host * VAR_20)
{
 struct scsi_ctrl_blk *VAR_21 = VAR_20->active;
 struct target_control *VAR_22 = VAR_20->active_tc;





 FUNC_2(VAR_20, VAR_21);
 FUNC_1(VAR_20, VAR_21);

 FUNC_3(VAR_22->sconfig0, VAR_20->addr + VAR_14 );

 if (VAR_20->phase == VAR_2) {
  FUNC_3(VAR_8 | VAR_10, VAR_20->addr + VAR_16);
  FUNC_3(VAR_21->ident, VAR_20->addr + VAR_17);

  if (VAR_21->tagmsg) {
   FUNC_3(VAR_21->tagmsg, VAR_20->addr + VAR_17);
   FUNC_3(VAR_21->tagid, VAR_20->addr + VAR_17);
  }
  if ((VAR_22->flags & (VAR_7 | VAR_4)) == 0) {
   VAR_22->flags |= VAR_7;
   FUNC_3(VAR_1, VAR_20->addr + VAR_17);
   FUNC_3(2, VAR_20->addr + VAR_17);
   FUNC_3(3, VAR_20->addr + VAR_17);
   FUNC_3(1, VAR_20->addr + VAR_17);
  } else if ((VAR_22->flags & (VAR_6 | VAR_3)) == 0) {
   VAR_22->flags |= VAR_6;
   FUNC_3(VAR_1, VAR_20->addr + VAR_17);
   FUNC_3(3, VAR_20->addr + VAR_17);
   FUNC_3(1, VAR_20->addr + VAR_17);
   FUNC_3(VAR_19[VAR_22->flags & VAR_5], VAR_20->addr + VAR_17);
   FUNC_3(VAR_0, VAR_20->addr + VAR_17);
  }
  FUNC_3(VAR_12, VAR_20->addr + VAR_13);
  if (FUNC_5(VAR_20) == -1)
   return -1;
 }
 FUNC_3(VAR_9, VAR_20->addr + VAR_15);
 FUNC_3((FUNC_0(VAR_20->addr + VAR_18) & (VAR_11 | 7)), VAR_20->addr + VAR_18);

 return 3;
}
