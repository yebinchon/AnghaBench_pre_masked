
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct niu {int port; int ipp_off; int pcs_off; int xpcs_off; int device; scalar_t__ regs; scalar_t__ mac_regs; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int ,char*,int) ;

__attribute__((used)) static int FUNC_1(struct niu *VAR_5)
{
 switch (VAR_5->port) {
 case 0:
  VAR_5->mac_regs = VAR_5->regs + VAR_3;
  VAR_5->ipp_off = 0x00000;
  VAR_5->pcs_off = 0x04000;
  VAR_5->xpcs_off = 0x02000;
  break;

 case 1:
  VAR_5->mac_regs = VAR_5->regs + VAR_4;
  VAR_5->ipp_off = 0x08000;
  VAR_5->pcs_off = 0x0a000;
  VAR_5->xpcs_off = 0x08000;
  break;

 case 2:
  VAR_5->mac_regs = VAR_5->regs + VAR_0;
  VAR_5->ipp_off = 0x04000;
  VAR_5->pcs_off = 0x0e000;
  VAR_5->xpcs_off = ~0UL;
  break;

 case 3:
  VAR_5->mac_regs = VAR_5->regs + VAR_1;
  VAR_5->ipp_off = 0x0c000;
  VAR_5->pcs_off = 0x12000;
  VAR_5->xpcs_off = ~0UL;
  break;

 default:
  FUNC_0(VAR_5->device, "Port %u is invalid, cannot compute MAC block offset\n", VAR_5->port);
  return -VAR_2;
 }

 return 0;
}
