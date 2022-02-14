
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct pci_dev {int dummy; } ;


 int FUNC_0 (struct pci_dev*,char*,char const*,int,int) ;
 int FUNC_1 (struct pci_dev*,unsigned int,int*) ;

__attribute__((used)) static void FUNC_2(struct pci_dev *VAR_0, unsigned VAR_1,
        const char *VAR_2, int VAR_3)
{
 u32 VAR_4;
 u32 VAR_5, VAR_6;

 FUNC_1(VAR_0, VAR_1, &VAR_4);


 if (!(VAR_4 & 1))
  return;
 VAR_6 = VAR_4 & 0xfffc;
 if (VAR_3) {






  VAR_5 = 16;
 } else {
  VAR_5 = 128;
 }
 VAR_6 &= ~(VAR_5-1);





 FUNC_0(VAR_0, "%s PIO at %04x-%04x\n", VAR_2, VAR_6, VAR_6+VAR_5-1);
}
