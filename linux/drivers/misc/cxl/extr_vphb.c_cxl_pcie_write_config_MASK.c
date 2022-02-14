
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct pci_bus {int dummy; } ;
struct cxl_afu {int dummy; } ;
struct TYPE_2__ {int (* afu_cr_write8 ) (struct cxl_afu*,int,int,int) ;int (* afu_cr_write16 ) (struct cxl_afu*,int,int,int) ;int (* afu_cr_write32 ) (struct cxl_afu*,int,int,int) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct cxl_afu*) ;
 int FUNC_2 (struct cxl_afu*) ;
 TYPE_1__* VAR_3 ;
 int FUNC_3 (struct pci_bus*,unsigned int,struct cxl_afu*,int*) ;
 struct cxl_afu* FUNC_4 (struct pci_bus*) ;
 int FUNC_5 (struct cxl_afu*,int,int,int) ;
 int FUNC_6 (struct cxl_afu*,int,int,int) ;
 int FUNC_7 (struct cxl_afu*,int,int,int) ;

__attribute__((used)) static int FUNC_8(struct pci_bus *VAR_4, unsigned int VAR_5,
     int VAR_6, int VAR_7, u32 VAR_8)
{
 int VAR_9, VAR_10;
 struct cxl_afu *VAR_11;

 VAR_11 = FUNC_4(VAR_4);

 if (VAR_11 == ((void*)0) || !FUNC_1(VAR_11))
  return VAR_0;

 VAR_9 = FUNC_3(VAR_4, VAR_5, VAR_11, &VAR_10);
 if (VAR_9)
  goto out;

 switch (VAR_7) {
 case 1:
  VAR_9 = VAR_3->afu_cr_write8(VAR_11, VAR_10, VAR_6, VAR_8 & 0xff);
  break;
 case 2:
  VAR_9 = VAR_3->afu_cr_write16(VAR_11, VAR_10, VAR_6, VAR_8 & 0xffff);
  break;
 case 4:
  VAR_9 = VAR_3->afu_cr_write32(VAR_11, VAR_10, VAR_6, VAR_8);
  break;
 default:
  FUNC_0(1);
 }

out:
 FUNC_2(VAR_11);
 return VAR_9 ? VAR_1 : VAR_2;
}
