
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct xhci_hcd_mtk {int uwk_vers; int uwk_reg_base; int uwk; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;


 int FUNC_0 (int) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int ,int,int,int) ;

__attribute__((used)) static void FUNC_2(struct xhci_hcd_mtk *VAR_6, bool VAR_7)
{
 u32 VAR_8, VAR_9, VAR_10;

 switch (VAR_6->uwk_vers) {
 case 129:
  VAR_8 = VAR_6->uwk_reg_base + VAR_1;
  VAR_9 = VAR_4 | FUNC_0(0xf) | VAR_5;
  VAR_10 = VAR_7 ? (VAR_4 | FUNC_0(0x8)) : 0;
  break;
 case 128:
  VAR_8 = VAR_6->uwk_reg_base + VAR_0;
  VAR_9 = VAR_2 | VAR_3;
  VAR_10 = VAR_7 ? VAR_9 : 0;
  break;
 default:
  return;
 }
 FUNC_1(VAR_6->uwk, VAR_8, VAR_9, VAR_10);
}
