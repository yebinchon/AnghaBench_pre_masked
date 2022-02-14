
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
struct pci_dev {int dummy; } ;
struct cxl {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct pci_dev*,int*,int *,int*) ;
 int FUNC_1 (struct cxl*,int ,int) ;

__attribute__((used)) static int FUNC_2(struct cxl *VAR_5, struct pci_dev *VAR_6)
{
 u64 VAR_7, VAR_8;
 u64 VAR_9;
 u32 VAR_10;
 u64 VAR_11;
 int VAR_12;

 VAR_12 = FUNC_0(VAR_6, &VAR_9, &VAR_10, &VAR_11);
 if (VAR_12)
  return VAR_12;

 VAR_7 = 0x0000900000000000ULL;
 VAR_7 |= (0x2ULL << (63-38));

 VAR_7 |= (VAR_9 << (63-5));
 VAR_7 |= (VAR_11 << (63-13));

 FUNC_1(VAR_5, VAR_0, VAR_7);
 FUNC_1(VAR_5, VAR_2, 0x20000000200ULL);

 FUNC_1(VAR_5, VAR_3, 0x00000000FFFFFFFFULL);

 VAR_8 = (0x2ULL << (63-3));
 VAR_8 |= (0x1ULL << (63-6));
 VAR_8 |= 0x1ULL;
 FUNC_1(VAR_5, VAR_1, VAR_8);

 FUNC_1(VAR_5, VAR_4, 0x0000FF7C00000000ULL);

 return 0;
}
