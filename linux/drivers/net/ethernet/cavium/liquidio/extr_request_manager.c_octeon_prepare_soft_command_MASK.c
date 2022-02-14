
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int u8 ;
typedef void* u64 ;
typedef void* u32 ;
struct TYPE_11__ {int rdp; void** ossp; int irh; int ih2; } ;
struct TYPE_10__ {int rdp; void** ossp; int irh; int pki_ih3; int ih3; } ;
struct TYPE_12__ {TYPE_5__ cmd2; TYPE_4__ cmd3; } ;
struct octeon_soft_command {size_t iq_no; scalar_t__ rdatasize; TYPE_6__ cmd; scalar_t__ datasize; } ;
struct octeon_instr_rdp {scalar_t__ rlen; int pcie_port; } ;
struct octeon_instr_pki_ih3 {int w; int raw; int utag; int utt; int pm; int sl; int qpg; void* tagtype; void* tag; int uqpg; } ;
struct octeon_instr_irh {int opcode; int subcode; int rflag; void* ossp; } ;
struct octeon_instr_ih3 {int fsz; scalar_t__ dlengsz; int pkind; } ;
struct octeon_instr_ih2 {int raw; int rs; int fsz; scalar_t__ dlengsz; int grp; void* tag; void* tagtype; } ;
struct octeon_device {int pcie_port; TYPE_3__** instr_queue; } ;
struct octeon_config {int dummy; } ;
struct TYPE_7__ {int ctrl_qpg; int use_qpg; int pkind; } ;
struct TYPE_8__ {TYPE_1__ s; } ;
struct TYPE_9__ {TYPE_2__ txpciq; } ;


 void* VAR_0 ;
 int FUNC_0 (struct octeon_config*) ;
 void* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_1 (struct octeon_device*) ;
 scalar_t__ FUNC_2 (struct octeon_device*) ;
 int FUNC_3 (int) ;
 struct octeon_config* FUNC_4 (struct octeon_device*) ;

void
FUNC_5(struct octeon_device *VAR_6,
       struct octeon_soft_command *VAR_7,
       u8 VAR_8,
       u8 VAR_9,
       u32 VAR_10,
       u64 VAR_11,
       u64 VAR_12)
{
 struct octeon_config *VAR_13;
 struct octeon_instr_ih2 *VAR_14;
 struct octeon_instr_ih3 *VAR_15;
 struct octeon_instr_pki_ih3 *VAR_16;
 struct octeon_instr_irh *VAR_17;
 struct octeon_instr_rdp *VAR_18;

 FUNC_3(VAR_8 > 15);
 FUNC_3(VAR_9 > 127);

 VAR_13 = FUNC_4(VAR_6);

 if (FUNC_1(VAR_6) || FUNC_2(VAR_6)) {
  VAR_15 = (struct octeon_instr_ih3 *)&VAR_7->cmd.cmd3.ih3;

  VAR_15->pkind = VAR_6->instr_queue[VAR_7->iq_no]->txpciq.s.pkind;

  VAR_16 = (struct octeon_instr_pki_ih3 *)&VAR_7->cmd.cmd3.pki_ih3;

  VAR_16->w = 1;
  VAR_16->raw = 1;
  VAR_16->utag = 1;
  VAR_16->uqpg =
   VAR_6->instr_queue[VAR_7->iq_no]->txpciq.s.use_qpg;
  VAR_16->utt = 1;
  VAR_16->tag = VAR_1;
  VAR_16->tagtype = VAR_0;
  VAR_16->qpg =
   VAR_6->instr_queue[VAR_7->iq_no]->txpciq.s.ctrl_qpg;

  VAR_16->pm = 0x7;
  VAR_16->sl = 8;

  if (VAR_7->datasize)
   VAR_15->dlengsz = VAR_7->datasize;

  VAR_17 = (struct octeon_instr_irh *)&VAR_7->cmd.cmd3.irh;
  VAR_17->opcode = VAR_8;
  VAR_17->subcode = VAR_9;


  VAR_17->ossp = VAR_10;
  VAR_7->cmd.cmd3.ossp[0] = VAR_11;
  VAR_7->cmd.cmd3.ossp[1] = VAR_12;

  if (VAR_7->rdatasize) {
   VAR_18 = (struct octeon_instr_rdp *)&VAR_7->cmd.cmd3.rdp;
   VAR_18->pcie_port = VAR_6->pcie_port;
   VAR_18->rlen = VAR_7->rdatasize;

   VAR_17->rflag = 1;


   VAR_15->fsz = VAR_5;
  } else {
   VAR_17->rflag = 0;


   VAR_15->fsz = VAR_3;
  }

 } else {
  VAR_14 = (struct octeon_instr_ih2 *)&VAR_7->cmd.cmd2.ih2;
  VAR_14->tagtype = VAR_0;
  VAR_14->tag = VAR_1;
  VAR_14->raw = 1;
  VAR_14->grp = FUNC_0(VAR_13);

  if (VAR_7->datasize) {
   VAR_14->dlengsz = VAR_7->datasize;
   VAR_14->rs = 1;
  }

  VAR_17 = (struct octeon_instr_irh *)&VAR_7->cmd.cmd2.irh;
  VAR_17->opcode = VAR_8;
  VAR_17->subcode = VAR_9;


  VAR_17->ossp = VAR_10;
  VAR_7->cmd.cmd2.ossp[0] = VAR_11;
  VAR_7->cmd.cmd2.ossp[1] = VAR_12;

  if (VAR_7->rdatasize) {
   VAR_18 = (struct octeon_instr_rdp *)&VAR_7->cmd.cmd2.rdp;
   VAR_18->pcie_port = VAR_6->pcie_port;
   VAR_18->rlen = VAR_7->rdatasize;

   VAR_17->rflag = 1;

   VAR_14->fsz = VAR_4;
  } else {
   VAR_17->rflag = 0;

   VAR_14->fsz = VAR_2;
  }
 }
}
