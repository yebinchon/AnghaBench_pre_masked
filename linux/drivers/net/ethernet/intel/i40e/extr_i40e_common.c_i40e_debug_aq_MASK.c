
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
typedef scalar_t__ u16 ;
struct TYPE_8__ {int bus_id; int device; int func; } ;
struct i40e_hw {int debug_mask; TYPE_4__ bus; } ;
struct TYPE_6__ {int addr_low; int addr_high; } ;
struct TYPE_5__ {int param1; int param0; } ;
struct TYPE_7__ {TYPE_2__ external; TYPE_1__ internal; } ;
struct i40e_aq_desc {TYPE_3__ params; int cookie_low; int cookie_high; int retval; int datalen; int flags; int opcode; } ;
typedef int prefix ;
typedef enum i40e_debug_mask { ____Placeholder_i40e_debug_mask } i40e_debug_mask ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct i40e_hw*,int,char*,...) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,char*,int ,int,int,int *,scalar_t__,int) ;
 int FUNC_4 (char*,int,char*,int,int,int) ;

void FUNC_5(struct i40e_hw *VAR_4, enum i40e_debug_mask VAR_5, void *VAR_6,
     void *VAR_7, u16 VAR_8)
{
 struct i40e_aq_desc *VAR_9 = (struct i40e_aq_desc *)VAR_6;
 u32 VAR_10 = VAR_4->debug_mask & VAR_5;
 char VAR_11[27];
 u16 VAR_12;
 u8 *VAR_13 = (u8 *)VAR_7;

 if (!VAR_10 || !VAR_6)
  return;

 VAR_12 = FUNC_1(VAR_9->datalen);

 FUNC_0(VAR_4, VAR_5 & VAR_1,
     "AQ CMD: opcode 0x%04X, flags 0x%04X, datalen 0x%04X, retval 0x%04X\n",
     FUNC_1(VAR_9->opcode),
     FUNC_1(VAR_9->flags),
     FUNC_1(VAR_9->datalen),
     FUNC_1(VAR_9->retval));
 FUNC_0(VAR_4, VAR_5 & VAR_1,
     "\tcookie (h,l) 0x%08X 0x%08X\n",
     FUNC_2(VAR_9->cookie_high),
     FUNC_2(VAR_9->cookie_low));
 FUNC_0(VAR_4, VAR_5 & VAR_1,
     "\tparam (0,1)  0x%08X 0x%08X\n",
     FUNC_2(VAR_9->params.internal.param0),
     FUNC_2(VAR_9->params.internal.param1));
 FUNC_0(VAR_4, VAR_5 & VAR_1,
     "\taddr (h,l)   0x%08X 0x%08X\n",
     FUNC_2(VAR_9->params.external.addr_high),
     FUNC_2(VAR_9->params.external.addr_low));

 if (VAR_7 && VAR_8 != 0 && VAR_12 != 0 &&
     (VAR_10 & VAR_2)) {
  FUNC_0(VAR_4, VAR_5, "AQ CMD Buffer:\n");
  if (VAR_8 < VAR_12)
   VAR_12 = VAR_8;

  FUNC_4(VAR_11, sizeof(VAR_11),
    "i40e %02x:%02x.%x: \t0x",
    VAR_4->bus.bus_id,
    VAR_4->bus.device,
    VAR_4->bus.func);

  FUNC_3(VAR_3, VAR_11, VAR_0,
          16, 1, VAR_13, VAR_12, 0);
 }
}
