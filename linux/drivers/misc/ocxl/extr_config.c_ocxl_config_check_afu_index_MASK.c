
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct pci_dev {int dev; } ;
struct ocxl_fn_config {scalar_t__ dvsec_afu_info_pos; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,char*,int,int) ;
 int FUNC_1 (int *,char*,int,...) ;
 int FUNC_2 (struct pci_dev*,scalar_t__,int) ;
 int FUNC_3 (struct pci_dev*,struct ocxl_fn_config*,int*,int*) ;

int FUNC_4(struct pci_dev *VAR_3,
    struct ocxl_fn_config *VAR_4, int VAR_5)
{
 int VAR_6;
 u16 VAR_7;
 u16 VAR_8, VAR_9;

 FUNC_2(VAR_3,
   VAR_4->dvsec_afu_info_pos + VAR_0,
   VAR_5);

 VAR_6 = FUNC_3(VAR_3, VAR_4, &VAR_8, &VAR_7);
 if (VAR_6)
  return VAR_6;


 if (!VAR_7 && !VAR_8)
  return 0;

 FUNC_0(&VAR_3->dev, "AFU descriptor template version %d.%d\n",
  VAR_7 >> 8, VAR_7 & 0xFF);

 switch (VAR_7) {
 case 0x0005:
 case 0x0100:
  VAR_9 = VAR_1;
  break;
 case 0x0101:
  VAR_9 = VAR_2;
  break;
 default:
  FUNC_1(&VAR_3->dev, "Unknown AFU template version %#x\n",
   VAR_7);
  VAR_9 = VAR_8;
 }
 if (VAR_8 != VAR_9)
  FUNC_1(&VAR_3->dev,
   "Unexpected template length %#x in AFU information, expected %#x for version %#x\n",
   VAR_8, VAR_9, VAR_7);
 return 1;
}
