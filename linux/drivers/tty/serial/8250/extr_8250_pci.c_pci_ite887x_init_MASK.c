
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct resource {int start; } ;
struct pci_dev {int dev; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 short const VAR_5 ;
 short const VAR_6 ;
 short const VAR_7 ;
 short const VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (short const) ;
 int FUNC_2 (char*,struct pci_dev*) ;
 int FUNC_3 (struct pci_dev*,scalar_t__,int*) ;
 int FUNC_4 (struct pci_dev*,scalar_t__,short const) ;
 int FUNC_5 (int,int ) ;
 struct resource* FUNC_6 (short const,int ,char*) ;

__attribute__((used)) static int FUNC_7(struct pci_dev *VAR_11)
{

 static const short VAR_12[] = { 0x2a0, 0x2c0, 0x220, 0x240, 0x1e0,
       0x200, 0x280, 0 };
 int VAR_13, VAR_14, VAR_15;
 struct resource *VAR_16 = ((void*)0);
 u32 VAR_17, VAR_18, VAR_19;


 VAR_14 = 0;
 while (VAR_12[VAR_14] && VAR_16 == ((void*)0)) {
  VAR_16 = FUNC_6(VAR_12[VAR_14], VAR_2,
        "ite887x");
  if (VAR_16 != ((void*)0)) {

   FUNC_4(VAR_11, VAR_4,
    VAR_5 | VAR_8 |
    VAR_6 | VAR_12[VAR_14]);

   FUNC_4(VAR_11, VAR_1,
        VAR_12[VAR_14]);
   VAR_13 = FUNC_1(VAR_12[VAR_14]);
   if (VAR_13 != 0xff) {

    break;
   }
   FUNC_5(VAR_16->start, VAR_2);
   VAR_16 = ((void*)0);
  }
  VAR_14++;
 }

 if (!VAR_12[VAR_14]) {
  FUNC_0(&VAR_11->dev, "ite887x: could not find iobase\n");
  return -VAR_0;
 }


 VAR_15 = FUNC_1(VAR_16->start + 0x18) & 0x0f;

 switch (VAR_15) {
 case 0x2:
 case 0xa:
  VAR_13 = 0;
  break;
 case 0xe:
  VAR_13 = 2;
  break;
 case 0x6:
  VAR_13 = 1;
  break;
 case 0x8:
  VAR_13 = 2;
  break;
 default:
  FUNC_2("Unknown ITE887x", VAR_11);
  VAR_13 = -VAR_0;
 }


 for (VAR_14 = 0; VAR_14 < VAR_13; VAR_14++) {

  FUNC_3(VAR_11, VAR_9 + (0x4 * (VAR_14 + 1)),
        &VAR_19);
  VAR_19 &= 0x0000FF00;
  FUNC_4(VAR_11, VAR_4 + (0x4 * (VAR_14 + 1)),
   VAR_5 | VAR_8 |
   VAR_7 | VAR_19);


  FUNC_3(VAR_11, VAR_10, &VAR_18);
  VAR_18 &= ~(0xffff << (16 * VAR_14));
  VAR_18 |= (VAR_19 << (16 * VAR_14));
  FUNC_4(VAR_11, VAR_10, VAR_18);


  FUNC_3(VAR_11, VAR_3, &VAR_17);

  VAR_17 &= ~(0xf << (12 - 4 * VAR_14));

  VAR_17 |= 1 << (23 - VAR_14);

  FUNC_4(VAR_11, VAR_3, VAR_17);
 }

 if (VAR_13 <= 0) {

  FUNC_5(VAR_16->start, VAR_2);
 }

 return VAR_13;
}
