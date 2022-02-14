
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
 int FUNC_0 (int ) ;
 int FUNC_1 (struct rtl8169_private*,int ) ;
 int FUNC_2 (struct rtl8169_private*,int ,int) ;
 int VAR_4 ;
 scalar_t__ FUNC_3 (struct rtl8169_private*,int *,int,int) ;

__attribute__((used)) static u32 FUNC_4(struct rtl8169_private *VAR_5, int VAR_6)
{
 u32 VAR_7 = FUNC_0(VAR_5->pci_dev->devfn);

 FUNC_2(VAR_5, VAR_0, (VAR_6 & VAR_1) | VAR_7 << 16 |
  VAR_2);

 return FUNC_3(VAR_5, &VAR_4, 10, 100) ?
  FUNC_1(VAR_5, VAR_3) : ~0;
}
