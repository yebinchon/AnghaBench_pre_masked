
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct pci_dev {int dummy; } ;


 int FUNC_0 (struct pci_dev*,char*,char const*,int,int) ;
 int FUNC_1 (struct pci_dev*,unsigned int,int*) ;

__attribute__((used)) static void FUNC_2(struct pci_dev *VAR_0, unsigned VAR_1,
        const char *VAR_2)
{
 u32 VAR_3;
 u32 VAR_4, VAR_5;

 FUNC_1(VAR_0, VAR_1, &VAR_3);


 if (!(VAR_3 & 1))
  return;


 VAR_5 = VAR_3 & 0xfffc;
 VAR_4 = (VAR_3 >> 16) & 0xfc;
 VAR_4 |= 3;





 FUNC_0(VAR_0, "%s PIO at %04x (mask %04x)\n", VAR_2, VAR_5, VAR_4);
}
