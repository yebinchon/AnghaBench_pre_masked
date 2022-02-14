
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct rtl8169_private {TYPE_1__* pci_dev; } ;
struct TYPE_2__ {int devfn; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct rtl8169_private*,int ,int) ;
 int VAR_5 ;
 int FUNC_2 (struct rtl8169_private*,int *,int,int) ;

__attribute__((used)) static void FUNC_3(struct rtl8169_private *VAR_6, int VAR_7, int VAR_8)
{
 u32 VAR_9 = FUNC_0(VAR_6->pci_dev->devfn);

 FUNC_1(VAR_6, VAR_4, VAR_8);
 FUNC_1(VAR_6, VAR_0, VAR_3 | (VAR_7 & VAR_1) |
  VAR_2 | VAR_9 << 16);

 FUNC_2(VAR_6, &VAR_5, 10, 100);
}
