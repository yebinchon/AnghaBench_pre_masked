
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct ast_vhub_ep {TYPE_1__* vhub; } ;
struct TYPE_2__ {int ep1_stalled; scalar_t__ regs; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct ast_vhub_ep*,char*,char*,...) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (scalar_t__) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (int ,scalar_t__) ;

__attribute__((used)) static int FUNC_3(struct ast_vhub_ep *VAR_7,
       u16 VAR_8, u16 VAR_9,
       bool VAR_10)
{
 int VAR_11;
 u32 VAR_12;

 VAR_11 = VAR_8 & VAR_2;
 FUNC_0(VAR_7, "%s_FEATURE(ep%d val=%02x)\n",
       VAR_10 ? "SET" : "CLEAR", VAR_11, VAR_9);

 if (VAR_11 > 1)
  return VAR_6;
 if (VAR_9 != VAR_1)
  return VAR_6;
 if (VAR_11 == 0)
  return VAR_5;

 FUNC_0(VAR_7, "%s stall on EP 1\n",
       VAR_10 ? "setting" : "clearing");

 VAR_7->vhub->ep1_stalled = VAR_10;
 VAR_12 = FUNC_1(VAR_7->vhub->regs + VAR_0);
 if (VAR_10) {
  VAR_12 |= VAR_4;
 } else {
  VAR_12 &= ~VAR_4;
  VAR_12 |= VAR_3;
 }
 FUNC_2(VAR_12, VAR_7->vhub->regs + VAR_0);

 return VAR_5;
}
