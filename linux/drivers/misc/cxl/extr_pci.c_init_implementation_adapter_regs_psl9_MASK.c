
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
struct pci_dev {int dev; } ;
struct cxl {TYPE_1__* native; } ;
struct TYPE_2__ {int no_data_cache; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (struct pci_dev*,int*,int*,int*) ;
 int FUNC_1 (struct pci_dev*,int,int*) ;
 int FUNC_2 (struct cxl*,int ) ;
 int FUNC_3 (struct cxl*,int ,int) ;
 int FUNC_4 (int *,char*) ;

__attribute__((used)) static int FUNC_5(struct cxl *VAR_9,
       struct pci_dev *VAR_10)
{
 u64 VAR_11, VAR_12;
 u64 VAR_13;
 u32 VAR_14;
 u64 VAR_15;
 u64 VAR_16;
 int VAR_17;

 VAR_17 = FUNC_0(VAR_10, &VAR_13, &VAR_14, &VAR_15);
 if (VAR_17)
  return VAR_17;

 VAR_17 = FUNC_1(VAR_10, VAR_15, &VAR_11);
 if (VAR_17)
  return VAR_17;

 FUNC_3(VAR_9, VAR_7, VAR_11);


 VAR_12 = (0x2ULL << (63-3));
 VAR_12 |= (0x1ULL << (63-6));
 VAR_12 |= 0x1ULL;
 FUNC_3(VAR_9, VAR_4, VAR_12);




 FUNC_3(VAR_9, VAR_3, 0x0001001000012A10ULL);
 FUNC_3(VAR_9, VAR_6, 0x51F8000000000005ULL);


 FUNC_3(VAR_9, VAR_8, 0x0000040007FFC200ULL);

 if (VAR_14 == 3) {

  FUNC_3(VAR_9, VAR_1, 0x40000FF3FFFF0000ULL);
 }


 FUNC_3(VAR_9, VAR_0, 0x800F000200000000ULL);


 FUNC_3(VAR_9, VAR_2, 0xC000000000000000ULL);





 VAR_16 = FUNC_2(VAR_9, VAR_2);
 if (VAR_16 & VAR_5) {
  FUNC_4(&VAR_10->dev, "No data-cache present\n");
  VAR_9->native->no_data_cache = 1;
 }

 return 0;
}
