
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u8 ;
typedef scalar_t__ u16 ;
struct TYPE_8__ {int bus_id; int device; int func; } ;
struct iavf_hw {int debug_mask; TYPE_4__ bus; } ;
struct TYPE_6__ {int addr_low; int addr_high; } ;
struct TYPE_5__ {int param1; int param0; } ;
struct TYPE_7__ {TYPE_2__ external; TYPE_1__ internal; } ;
struct iavf_aq_desc {scalar_t__ datalen; TYPE_3__ params; int cookie_low; int cookie_high; scalar_t__ retval; scalar_t__ flags; scalar_t__ opcode; } ;
typedef int prefix ;
typedef enum iavf_debug_mask { ____Placeholder_iavf_debug_mask } iavf_debug_mask ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct iavf_hw*,int,char*,...) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,char*,int ,int,int,int *,scalar_t__,int) ;
 int FUNC_4 (char*,int,char*,int,int,int) ;

void FUNC_5(struct iavf_hw *VAR_2, enum iavf_debug_mask VAR_3, void *VAR_4,
     void *VAR_5, u16 VAR_6)
{
 struct iavf_aq_desc *VAR_7 = (struct iavf_aq_desc *)VAR_4;
 u8 *VAR_8 = (u8 *)VAR_5;

 if ((!(VAR_3 & VAR_2->debug_mask)) || !VAR_4)
  return;

 FUNC_0(VAR_2, VAR_3,
     "AQ CMD: opcode 0x%04X, flags 0x%04X, datalen 0x%04X, retval 0x%04X\n",
     FUNC_1(VAR_7->opcode),
     FUNC_1(VAR_7->flags),
     FUNC_1(VAR_7->datalen),
     FUNC_1(VAR_7->retval));
 FUNC_0(VAR_2, VAR_3, "\tcookie (h,l) 0x%08X 0x%08X\n",
     FUNC_2(VAR_7->cookie_high),
     FUNC_2(VAR_7->cookie_low));
 FUNC_0(VAR_2, VAR_3, "\tparam (0,1)  0x%08X 0x%08X\n",
     FUNC_2(VAR_7->params.internal.param0),
     FUNC_2(VAR_7->params.internal.param1));
 FUNC_0(VAR_2, VAR_3, "\taddr (h,l)   0x%08X 0x%08X\n",
     FUNC_2(VAR_7->params.external.addr_high),
     FUNC_2(VAR_7->params.external.addr_low));

 if (VAR_5 && VAR_7->datalen) {
  u16 VAR_9 = FUNC_1(VAR_7->datalen);

  FUNC_0(VAR_2, VAR_3, "AQ CMD Buffer:\n");
  if (VAR_6 < VAR_9)
   VAR_9 = VAR_6;

  if (VAR_2->debug_mask & VAR_3) {
   char VAR_10[27];

   FUNC_4(VAR_10, sizeof(VAR_10),
     "iavf %02x:%02x.%x: \t0x",
     VAR_2->bus.bus_id,
     VAR_2->bus.device,
     VAR_2->bus.func);

   FUNC_3(VAR_1, VAR_10, VAR_0,
           16, 1, VAR_8, VAR_9, 0);
  }
 }
}
