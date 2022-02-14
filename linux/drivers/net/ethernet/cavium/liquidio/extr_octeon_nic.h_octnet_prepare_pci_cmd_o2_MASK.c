
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_13__ {int tsflag; int tnl_csum; int transport_csum; int ip_csum; } ;
union octnic_packet_params {scalar_t__ u32; TYPE_6__ s; } ;
struct TYPE_11__ {int gatherptrs; int datasize; } ;
struct TYPE_14__ {size_t iq_no; int timestamp; int tnl_csum; int transport_csum; int ip_csum; TYPE_4__ u; int gather; } ;
union octnic_cmd_setup {TYPE_7__ s; } ;
struct TYPE_12__ {int irh; int ih2; } ;
union octeon_instr_64B {TYPE_5__ cmd2; } ;
typedef scalar_t__ u32 ;
struct octeon_instr_irh {scalar_t__ ossp; int subcode; int opcode; } ;
struct octeon_instr_ih2 {int raw; int qos; int gather; int dlengsz; scalar_t__ tag; int grp; int tagtype; int fsz; } ;
struct octeon_device {TYPE_3__** instr_queue; } ;
struct TYPE_8__ {scalar_t__ port; } ;
struct TYPE_9__ {TYPE_1__ s; } ;
struct TYPE_10__ {TYPE_2__ txpciq; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (union octeon_instr_64B*,int ,int) ;

__attribute__((used)) static inline void
FUNC_2(struct octeon_device *VAR_5,
     union octeon_instr_64B *VAR_6,
     union octnic_cmd_setup *VAR_7, u32 VAR_8)
{
 struct octeon_instr_ih2 *VAR_9;
 struct octeon_instr_irh *VAR_10;
 union octnic_packet_params VAR_11;
 int VAR_12;

 FUNC_1(VAR_6, 0, sizeof(union octeon_instr_64B));

 VAR_9 = (struct octeon_instr_ih2 *)&VAR_6->cmd2.ih2;




 VAR_9->fsz = VAR_1;

 VAR_9->tagtype = VAR_4;
 VAR_9->grp = VAR_0;

 VAR_12 = (int)VAR_5->instr_queue[VAR_7->s.iq_no]->txpciq.s.port;

 if (VAR_8)
  VAR_9->tag = VAR_8;
 else
  VAR_9->tag = FUNC_0(VAR_12);

 VAR_9->raw = 1;
 VAR_9->qos = (VAR_12 & 3) + 4;

 if (!VAR_7->s.gather) {
  VAR_9->dlengsz = VAR_7->s.u.datasize;
 } else {
  VAR_9->gather = 1;
  VAR_9->dlengsz = VAR_7->s.u.gatherptrs;
 }

 VAR_10 = (struct octeon_instr_irh *)&VAR_6->cmd2.irh;

 VAR_10->opcode = VAR_2;
 VAR_10->subcode = VAR_3;

 VAR_11.u32 = 0;

 VAR_11.s.ip_csum = VAR_7->s.ip_csum;
 VAR_11.s.transport_csum = VAR_7->s.transport_csum;
 VAR_11.s.tnl_csum = VAR_7->s.tnl_csum;
 VAR_11.s.tsflag = VAR_7->s.timestamp;

 VAR_10->ossp = VAR_11.u32;
}
