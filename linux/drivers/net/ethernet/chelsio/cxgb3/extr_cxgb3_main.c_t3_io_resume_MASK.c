
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dummy; } ;
struct adapter {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct adapter*,char*,int ) ;
 struct adapter* FUNC_1 (struct pci_dev*) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 (struct adapter*,int ) ;
 int FUNC_5 (struct adapter*) ;

__attribute__((used)) static void FUNC_6(struct pci_dev *VAR_1)
{
 struct adapter *VAR_2 = FUNC_1(VAR_1);

 FUNC_0(VAR_2, "adapter recovering, PEX ERR 0x%x\n",
   FUNC_4(VAR_2, VAR_0));

 FUNC_2();
 FUNC_5(VAR_2);
 FUNC_3();
}
