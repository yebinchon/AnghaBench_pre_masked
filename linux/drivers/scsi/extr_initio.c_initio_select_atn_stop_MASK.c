
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scsi_ctrl_blk {int next_state; size_t target; int status; } ;
struct initio_host {scalar_t__ addr; int * targets; int * active_tc; struct scsi_ctrl_blk* active; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_1(struct initio_host * VAR_3, struct scsi_ctrl_blk * VAR_4)
{
 VAR_4->status |= VAR_0;
 VAR_4->next_state = 0x1;
 VAR_3->active = VAR_4;
 VAR_3->active_tc = &VAR_3->targets[VAR_4->target];
 FUNC_0(VAR_1, VAR_3->addr + VAR_2);
}
