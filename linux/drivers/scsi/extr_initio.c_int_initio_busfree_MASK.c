
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scsi_ctrl_blk {int status; int hastat; } ;
struct initio_host {scalar_t__ addr; int * active_tc; struct scsi_ctrl_blk* active; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_0 (struct initio_host*,struct scsi_ctrl_blk*) ;
 int FUNC_1 (struct initio_host*,struct scsi_ctrl_blk*) ;
 int FUNC_2 (struct initio_host*,struct scsi_ctrl_blk*) ;
 int FUNC_3 (int ,scalar_t__) ;

int FUNC_4(struct initio_host * VAR_9)
{
 struct scsi_ctrl_blk *VAR_10 = VAR_9->active;

 if (VAR_10 != ((void*)0)) {
  if (VAR_10->status & VAR_2) {
   FUNC_2(VAR_9, VAR_10);
   VAR_10->hastat = VAR_1;
   FUNC_0(VAR_9, VAR_10);
  } else {
   FUNC_1(VAR_9, VAR_10);
   VAR_10->hastat = VAR_0;
   FUNC_0(VAR_9, VAR_10);
  }
  VAR_9->active = ((void*)0);
  VAR_9->active_tc = ((void*)0);
 }
 FUNC_3(VAR_3, VAR_9->addr + VAR_7);
 FUNC_3(VAR_5, VAR_9->addr + VAR_6);
 FUNC_3(VAR_4, VAR_9->addr + VAR_8);
 return -1;
}
