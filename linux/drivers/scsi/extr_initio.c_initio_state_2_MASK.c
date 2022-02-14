
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct target_control {int sconfig0; } ;
struct scsi_ctrl_blk {int dummy; } ;
struct initio_host {int jsstatus1; scalar_t__ addr; struct target_control* active_tc; struct scsi_ctrl_blk* active; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (struct initio_host*,struct scsi_ctrl_blk*) ;
 int FUNC_2 (struct initio_host*,struct scsi_ctrl_blk*) ;
 int FUNC_3 (int,scalar_t__) ;
 int FUNC_4 (char*) ;

__attribute__((used)) static int FUNC_5(struct initio_host * VAR_6)
{
 struct scsi_ctrl_blk *VAR_7 = VAR_6->active;
 struct target_control *VAR_8 = VAR_6->active_tc;




 FUNC_2(VAR_6, VAR_7);
 FUNC_1(VAR_6, VAR_7);

 FUNC_3(VAR_8->sconfig0, VAR_6->addr + VAR_3);

 if (VAR_6->jsstatus1 & VAR_2)
  return 4;

 FUNC_3(VAR_0, VAR_6->addr + VAR_4);
 FUNC_3((FUNC_0(VAR_6->addr + VAR_5) & (VAR_1 | 7)), VAR_6->addr + VAR_5);

 return 3;
}
