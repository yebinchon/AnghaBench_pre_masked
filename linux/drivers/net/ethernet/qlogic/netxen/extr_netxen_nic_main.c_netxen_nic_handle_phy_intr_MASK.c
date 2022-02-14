
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int pci_func; int revision_id; } ;
struct netxen_adapter {int physical_port; TYPE_1__ ahw; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct netxen_adapter*,int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (struct netxen_adapter*,int) ;

__attribute__((used)) static void FUNC_4(struct netxen_adapter *VAR_4)
{
 u32 VAR_5, VAR_6, VAR_7;

 VAR_6 = VAR_4->physical_port;

 if (FUNC_1(VAR_4->ahw.revision_id)) {
  VAR_5 = FUNC_0(VAR_4, VAR_1);
  VAR_5 = FUNC_2(VAR_4->ahw.pci_func, VAR_5);
  VAR_7 = (VAR_5 == VAR_3);
 } else {
  VAR_5 = FUNC_0(VAR_4, VAR_0);
  VAR_5 = (VAR_5 >> VAR_6*8) & 0xff;
  VAR_7 = (VAR_5 == VAR_2);
 }

 FUNC_3(VAR_4, VAR_7);
}
