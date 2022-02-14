
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct pci_bus {int dummy; } ;
struct cxl_afu {int dummy; } ;
struct TYPE_2__ {int (* afu_cr_read8 ) (struct cxl_afu*,int,int,int *) ;int (* afu_cr_read16 ) (struct cxl_afu*,int,int,int *) ;int (* afu_cr_read32 ) (struct cxl_afu*,int,int,int *) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct cxl_afu*) ;
 int FUNC_2 (struct cxl_afu*) ;
 TYPE_1__* VAR_2 ;
 int FUNC_3 (struct pci_bus*,unsigned int,struct cxl_afu*,int*) ;
 struct cxl_afu* FUNC_4 (struct pci_bus*) ;
 int FUNC_5 (struct cxl_afu*,int,int,int *) ;
 int FUNC_6 (struct cxl_afu*,int,int,int *) ;
 int FUNC_7 (struct cxl_afu*,int,int,int *) ;

__attribute__((used)) static int FUNC_8(struct pci_bus *VAR_3, unsigned int VAR_4,
    int VAR_5, int VAR_6, u32 *VAR_7)
{
 int VAR_8, VAR_9;
 struct cxl_afu *VAR_10;
 u8 VAR_11;
 u16 VAR_12;
 u32 VAR_13;

 VAR_10 = FUNC_4(VAR_3);

 if (VAR_10 == ((void*)0) || !FUNC_1(VAR_10))
  return VAR_0;

 VAR_8 = FUNC_3(VAR_3, VAR_4, VAR_10, &VAR_9);
 if (VAR_8)
  goto out;

 switch (VAR_6) {
 case 1:
  VAR_8 = VAR_2->afu_cr_read8(VAR_10, VAR_9, VAR_5, &VAR_11);
  *VAR_7 = VAR_11;
  break;
 case 2:
  VAR_8 = VAR_2->afu_cr_read16(VAR_10, VAR_9, VAR_5, &VAR_12);
  *VAR_7 = VAR_12;
  break;
 case 4:
  VAR_8 = VAR_2->afu_cr_read32(VAR_10, VAR_9, VAR_5, &VAR_13);
  *VAR_7 = VAR_13;
  break;
 default:
  FUNC_0(1);
 }

out:
 FUNC_2(VAR_10);
 return VAR_8 ? VAR_0 : VAR_1;
}
