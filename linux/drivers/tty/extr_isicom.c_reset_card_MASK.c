
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dev; } ;
struct isi_board {unsigned long base; int port_count; int shift_count; } ;


 int VAR_0 ;
 int FUNC_0 (int *,char*,unsigned int const,...) ;
 int FUNC_1 (int *,char*,unsigned int const) ;
 int FUNC_2 (int *,char*) ;
 int FUNC_3 (int *,char*,unsigned int const,unsigned long) ;
 int FUNC_4 (unsigned long) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int ,unsigned long) ;
 struct isi_board* FUNC_7 (struct pci_dev*) ;

__attribute__((used)) static int FUNC_8(struct pci_dev *VAR_1,
 const unsigned int VAR_2, unsigned int *VAR_3)
{
 struct isi_board *VAR_4 = FUNC_7(VAR_1);
 unsigned long VAR_5 = VAR_4->base;
 unsigned int VAR_6, VAR_7 = 0;
 int VAR_8 = 0;

 FUNC_0(&VAR_1->dev, "ISILoad:Resetting Card%d at 0x%lx\n", VAR_2 + 1,
  VAR_5);

 FUNC_4(VAR_5 + 0x8);

 FUNC_5(10);

 FUNC_6(0, VAR_5 + 0x8);

 FUNC_5(1000);

 VAR_6 = FUNC_4(VAR_5 + 0x4) & 0xff;

 if (VAR_6 != 0xa5 && VAR_6 != 0xbb && VAR_6 != 0xcc && VAR_6 != 0xdd &&
   VAR_6 != 0xee) {
  FUNC_3(&VAR_1->dev, "ISILoad:Card%u reset failure (Possible "
   "bad I/O Port Address 0x%lx).\n", VAR_2 + 1, VAR_5);
  FUNC_0(&VAR_1->dev, "Sig=0x%x\n", VAR_6);
  VAR_8 = -VAR_0;
  goto end;
 }

 FUNC_5(10);

 VAR_7 = FUNC_4(VAR_5 + 0x2);
 if (!(FUNC_4(VAR_5 + 0xe) & 0x1) || (VAR_7 != 0 && VAR_7 != 4 &&
    VAR_7 != 8 && VAR_7 != 16)) {
  FUNC_1(&VAR_1->dev, "ISILoad:PCI Card%d reset failure.\n",
   VAR_2 + 1);
  VAR_8 = -VAR_0;
  goto end;
 }

 switch (VAR_6) {
 case 0xa5:
 case 0xbb:
 case 0xdd:
  VAR_4->port_count = (VAR_7 == 4) ? 4 : 8;
  VAR_4->shift_count = 12;
  break;
 case 0xcc:
 case 0xee:
  VAR_4->port_count = 16;
  VAR_4->shift_count = 11;
  break;
 }
 FUNC_2(&VAR_1->dev, "-Done\n");
 *VAR_3 = VAR_6;

end:
 return VAR_8;
}
