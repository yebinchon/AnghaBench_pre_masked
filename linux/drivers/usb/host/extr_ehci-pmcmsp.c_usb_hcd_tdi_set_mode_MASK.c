
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct ehci_regs {int dummy; } ;
struct ehci_hcd {struct ehci_regs* regs; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct ehci_hcd*,int*) ;
 int FUNC_1 (struct ehci_hcd*,int,int*) ;
 int FUNC_2 (int ,int) ;

__attribute__((used)) static void FUNC_3(struct ehci_hcd *VAR_7)
{
 u8 *VAR_8;
 u8 *VAR_9;
 u8 *VAR_10;
 u32 VAR_11;
 struct ehci_regs *VAR_12 = VAR_7->regs;


 VAR_8 = (u8 *)VAR_12 + VAR_5;
 VAR_9 = (u8 *)VAR_12 + VAR_6;
 VAR_10 = (u8 *)VAR_12 + VAR_4;


 VAR_11 = FUNC_0(VAR_7, (u32 *)VAR_8);
 FUNC_1(VAR_7, (VAR_11 | VAR_2),
   (u32 *)VAR_8);


 VAR_11 = FUNC_0(VAR_7, (u32 *)VAR_9);
 VAR_11 = VAR_11 & ~VAR_3;
 FUNC_1(VAR_7, VAR_11, (u32 *)VAR_9);


 FUNC_1(VAR_7, VAR_1, (u32 *)VAR_10);


 FUNC_2(VAR_0, 1);
}
