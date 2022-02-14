
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct pci_bus {int number; int dev; struct faraday_pci* sysdata; } ;
struct faraday_pci {int dummy; } ;


 int FUNC_0 (unsigned int) ;
 int FUNC_1 (unsigned int) ;
 int FUNC_2 (int *,char*,int ,int ,int,int,int ) ;
 int FUNC_3 (struct faraday_pci*,int ,unsigned int,int,int,int ) ;

__attribute__((used)) static int FUNC_4(struct pci_bus *VAR_0, unsigned int VAR_1,
        int VAR_2, int VAR_3, u32 VAR_4)
{
 struct faraday_pci *VAR_5 = VAR_0->sysdata;

 FUNC_2(&VAR_0->dev,
  "[write] slt: %.2d, fnc: %d, cnf: 0x%.2X, val (%d bytes): 0x%.8X\n",
  FUNC_1(VAR_1), FUNC_0(VAR_1), VAR_2, VAR_3, VAR_4);

 return FUNC_3(VAR_5, VAR_0->number, VAR_1, VAR_2, VAR_3,
         VAR_4);
}
