
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct sis190_private {int dummy; } ;
struct pci_dev {int dummy; } ;
struct net_device {void** dev_addr; } ;


 unsigned int FUNC_0 (int const*) ;
 int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 void* FUNC_1 (int) ;
 struct sis190_private* FUNC_2 (struct net_device*) ;
 scalar_t__ FUNC_3 (struct sis190_private*) ;
 int FUNC_4 (int,int) ;
 int FUNC_5 (struct pci_dev*) ;
 struct pci_dev* FUNC_6 (int ,int const,int *) ;
 int FUNC_7 (struct pci_dev*) ;
 int FUNC_8 (struct pci_dev*,int,int*) ;
 int FUNC_9 (struct pci_dev*,int,int) ;
 int FUNC_10 (char*,int ) ;
 int FUNC_11 (struct sis190_private*,int) ;
 int FUNC_12 (int) ;

__attribute__((used)) static int FUNC_13(struct pci_dev *VAR_3,
     struct net_device *VAR_4)
{
 static const u16 VAR_5[] = { 0x0965, 0x0966, 0x0968 };
 struct sis190_private *VAR_6 = FUNC_2(VAR_4);
 struct pci_dev *VAR_7;
 u8 VAR_8, VAR_9;
 unsigned int VAR_10;

 if (FUNC_3(VAR_6))
  FUNC_10("%s: Read MAC address from APC\n", FUNC_7(VAR_3));

 for (VAR_10 = 0; VAR_10 < FUNC_0(VAR_5); VAR_10++) {
  VAR_7 = FUNC_6(VAR_2, VAR_5[VAR_10], ((void*)0));
  if (VAR_7)
   break;
 }

 if (!VAR_7) {
  if (FUNC_3(VAR_6))
   FUNC_10("%s: Can not find ISA bridge\n",
    FUNC_7(VAR_3));
  return -VAR_0;
 }


 FUNC_8(VAR_7, 0x48, &VAR_9);
 VAR_8 = (VAR_9 & ~0x02);
 FUNC_9(VAR_7, 0x48, VAR_8);
 FUNC_12(50);
 FUNC_8(VAR_7, 0x48, &VAR_8);

        for (VAR_10 = 0; VAR_10 < VAR_1; VAR_10++) {
                FUNC_4(0x9 + VAR_10, 0x78);
                VAR_4->dev_addr[VAR_10] = FUNC_1(0x79);
        }

 FUNC_4(0x12, 0x78);
 VAR_8 = FUNC_1(0x79);

 FUNC_11(VAR_6, VAR_8);


 FUNC_9(VAR_7, 0x48, VAR_9);
 FUNC_5(VAR_7);

 return 0;
}
