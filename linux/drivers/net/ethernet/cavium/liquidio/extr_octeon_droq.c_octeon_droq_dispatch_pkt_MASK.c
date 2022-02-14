
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ subcode; scalar_t__ opcode; } ;
union octeon_rh {TYPE_3__ r; } ;
typedef int u32 ;
typedef int u16 ;
struct octeon_recv_info {TYPE_1__* recv_pkt; struct __dispatch* rsvd; } ;
struct octeon_droq_info {scalar_t__ length; } ;
struct TYPE_8__ {int dropped_nodispatch; int dropped_nomem; } ;
struct octeon_droq {TYPE_4__ stats; int dispatch_list; int read_idx; int buffer_size; } ;
struct octeon_device {TYPE_2__* pci_dev; } ;
struct __dispatch {int list; scalar_t__ disp_fn; struct octeon_recv_info* rinfo; } ;
typedef scalar_t__ octeon_dispatch_fn_t ;
struct TYPE_6__ {int dev; } ;
struct TYPE_5__ {union octeon_rh rh; } ;


 int FUNC_0 (int *,char*,unsigned int,unsigned int) ;
 int FUNC_1 (int *,int *) ;
 struct octeon_recv_info* FUNC_2 (struct octeon_device*,struct octeon_droq*,int,int ) ;
 int FUNC_3 (int ,int) ;
 scalar_t__ FUNC_4 (struct octeon_device*,int ,int ) ;

__attribute__((used)) static int
FUNC_5(struct octeon_device *VAR_0,
    struct octeon_droq *VAR_1,
    union octeon_rh *VAR_2,
    struct octeon_droq_info *VAR_3)
{
 u32 VAR_4;
 octeon_dispatch_fn_t VAR_5;
 struct octeon_recv_info *VAR_6;

 VAR_4 = FUNC_3(VAR_1->buffer_size, (u32)VAR_3->length);

 VAR_5 = FUNC_4(VAR_0, (u16)VAR_2->r.opcode,
          (u16)VAR_2->r.subcode);
 if (VAR_5) {
  VAR_6 = FUNC_2(VAR_0, VAR_1, VAR_4, VAR_1->read_idx);
  if (VAR_6) {
   struct __dispatch *VAR_7 = VAR_6->rsvd;

   VAR_7->rinfo = VAR_6;
   VAR_7->disp_fn = VAR_5;
   VAR_6->recv_pkt->rh = *VAR_2;
   FUNC_1(&VAR_7->list,
          &VAR_1->dispatch_list);
  } else {
   VAR_1->stats.dropped_nomem++;
  }
 } else {
  FUNC_0(&VAR_0->pci_dev->dev, "DROQ: No dispatch function (opcode %u/%u)\n",
   (unsigned int)VAR_2->r.opcode,
   (unsigned int)VAR_2->r.subcode);
  VAR_1->stats.dropped_nodispatch++;
 }

 return VAR_4;
}
