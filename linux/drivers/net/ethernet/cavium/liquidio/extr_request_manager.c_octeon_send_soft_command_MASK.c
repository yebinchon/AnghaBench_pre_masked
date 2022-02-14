
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct TYPE_7__ {scalar_t__ rptr; int irh; scalar_t__ dptr; int ih2; } ;
struct TYPE_6__ {scalar_t__ rptr; int irh; scalar_t__ dptr; int ih3; } ;
struct TYPE_8__ {TYPE_3__ cmd2; TYPE_2__ cmd3; } ;
struct octeon_soft_command {size_t iq_no; TYPE_4__ cmd; scalar_t__ expiry_time; scalar_t__ dmarptr; void** status_word; scalar_t__ dmadptr; } ;
struct octeon_instr_queue {int allow_soft_cmds; } ;
struct octeon_instr_irh {scalar_t__ rflag; } ;
struct octeon_instr_ih3 {scalar_t__ dlengsz; } ;
struct octeon_instr_ih2 {scalar_t__ dlengsz; } ;
struct octeon_device {TYPE_1__* pci_dev; struct octeon_instr_queue** instr_queue; } ;
struct TYPE_5__ {int dev; } ;


 void* VAR_0 ;
 int FUNC_0 (struct octeon_device*,size_t,int ,int) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (struct octeon_device*) ;
 scalar_t__ FUNC_2 (struct octeon_device*) ;
 int VAR_3 ;
 int FUNC_3 (int) ;
 int FUNC_4 (int *,char*,size_t) ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (struct octeon_device*,size_t,int,TYPE_4__*,struct octeon_soft_command*,scalar_t__,int ) ;

int FUNC_7(struct octeon_device *VAR_6,
        struct octeon_soft_command *VAR_7)
{
 struct octeon_instr_queue *VAR_8;
 struct octeon_instr_ih2 *VAR_9;
 struct octeon_instr_ih3 *VAR_10;
 struct octeon_instr_irh *VAR_11;
 u32 VAR_12;

 VAR_8 = VAR_6->instr_queue[VAR_7->iq_no];
 if (!VAR_8->allow_soft_cmds) {
  FUNC_4(&VAR_6->pci_dev->dev, "Soft commands are not allowed on Queue %d\n",
   VAR_7->iq_no);
  FUNC_0(VAR_6, VAR_7->iq_no, VAR_4, 1);
  return VAR_1;
 }

 if (FUNC_1(VAR_6) || FUNC_2(VAR_6)) {
  VAR_10 = (struct octeon_instr_ih3 *)&VAR_7->cmd.cmd3.ih3;
  if (VAR_10->dlengsz) {
   FUNC_3(!VAR_7->dmadptr);
   VAR_7->cmd.cmd3.dptr = VAR_7->dmadptr;
  }
  VAR_11 = (struct octeon_instr_irh *)&VAR_7->cmd.cmd3.irh;
  if (VAR_11->rflag) {
   FUNC_3(!VAR_7->dmarptr);
   FUNC_3(!VAR_7->status_word);
   *VAR_7->status_word = VAR_0;
   VAR_7->cmd.cmd3.rptr = VAR_7->dmarptr;
  }
  VAR_12 = (u32)VAR_10->dlengsz;
 } else {
  VAR_9 = (struct octeon_instr_ih2 *)&VAR_7->cmd.cmd2.ih2;
  if (VAR_9->dlengsz) {
   FUNC_3(!VAR_7->dmadptr);
   VAR_7->cmd.cmd2.dptr = VAR_7->dmadptr;
  }
  VAR_11 = (struct octeon_instr_irh *)&VAR_7->cmd.cmd2.irh;
  if (VAR_11->rflag) {
   FUNC_3(!VAR_7->dmarptr);
   FUNC_3(!VAR_7->status_word);
   *VAR_7->status_word = VAR_0;
   VAR_7->cmd.cmd2.rptr = VAR_7->dmarptr;
  }
  VAR_12 = (u32)VAR_9->dlengsz;
 }

 VAR_7->expiry_time = VAR_5 + FUNC_5(VAR_2);

 return (FUNC_6(VAR_6, VAR_7->iq_no, 1, &VAR_7->cmd, VAR_7,
        VAR_12, VAR_3));
}
