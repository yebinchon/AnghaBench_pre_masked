
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct firmware {scalar_t__ size; scalar_t__ data; } ;
struct brcmf_pciedev_info {scalar_t__ fw_name; scalar_t__ nvram_name; TYPE_2__* ci; TYPE_1__* pdev; } ;
struct brcmf_bus {int dummy; } ;
struct TYPE_4__ {scalar_t__ rambase; scalar_t__ ramsize; } ;
struct TYPE_3__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*,...) ;
 int FUNC_1 (struct brcmf_bus*,char*,...) ;
 int FUNC_2 (void*) ;
 int FUNC_3 (struct brcmf_pciedev_info*,scalar_t__,void*,scalar_t__) ;
 int FUNC_4 (struct brcmf_pciedev_info*) ;
 int FUNC_5 (struct brcmf_pciedev_info*,scalar_t__) ;
 int FUNC_6 (struct brcmf_pciedev_info*,scalar_t__) ;
 scalar_t__ FUNC_7 (struct brcmf_pciedev_info*,scalar_t__) ;
 int FUNC_8 (struct brcmf_pciedev_info*,scalar_t__,int ) ;
 struct brcmf_bus* FUNC_9 (int *) ;
 scalar_t__ FUNC_10 (scalar_t__) ;
 int FUNC_11 (int) ;
 int FUNC_12 (struct firmware const*) ;

__attribute__((used)) static int FUNC_13(struct brcmf_pciedev_info *VAR_3,
     const struct firmware *VAR_4, void *VAR_5,
     u32 VAR_6)
{
 struct brcmf_bus *VAR_7 = FUNC_9(&VAR_3->pdev->dev);
 u32 VAR_8;
 u32 VAR_9;
 u32 VAR_10;
 int VAR_11;
 u32 VAR_12;
 u32 VAR_13;

 FUNC_0(VAR_2, "Halt ARM.\n");
 VAR_11 = FUNC_4(VAR_3);
 if (VAR_11)
  return VAR_11;

 FUNC_0(VAR_2, "Download FW %s\n", VAR_3->fw_name);
 FUNC_3(VAR_3, VAR_3->ci->rambase,
      (void *)VAR_4->data, VAR_4->size);

 VAR_13 = FUNC_10(VAR_4->data);
 FUNC_12(VAR_4);




 FUNC_8(VAR_3, VAR_3->ci->ramsize - 4, 0);

 if (VAR_5) {
  FUNC_0(VAR_2, "Download NVRAM %s\n", VAR_3->nvram_name);
  VAR_12 = VAR_3->ci->rambase + VAR_3->ci->ramsize -
     VAR_6;
  FUNC_3(VAR_3, VAR_12, VAR_5, VAR_6);
  FUNC_2(VAR_5);
 } else {
  FUNC_0(VAR_2, "No matching NVRAM file found %s\n",
     VAR_3->nvram_name);
 }

 VAR_9 = FUNC_7(VAR_3,
             VAR_3->ci->ramsize -
             4);
 FUNC_0(VAR_2, "Bring ARM in running state\n");
 VAR_11 = FUNC_5(VAR_3, VAR_13);
 if (VAR_11)
  return VAR_11;

 FUNC_0(VAR_2, "Wait for FW init\n");
 VAR_8 = VAR_9;
 VAR_10 = VAR_0 / 50;
 while ((VAR_8 == VAR_9) && (VAR_10)) {
  FUNC_11(50);
  VAR_8 = FUNC_7(VAR_3,
             VAR_3->ci->ramsize -
             4);
  VAR_10--;
 }
 if (VAR_8 == VAR_9) {
  FUNC_1(VAR_7, "FW failed to initialize\n");
  return -VAR_1;
 }
 if (VAR_8 < VAR_3->ci->rambase ||
     VAR_8 >= VAR_3->ci->rambase + VAR_3->ci->ramsize) {
  FUNC_1(VAR_7, "Invalid shared RAM address 0x%08x\n",
     VAR_8);
  return -VAR_1;
 }
 FUNC_0(VAR_2, "Shared RAM addr: 0x%08x\n", VAR_8);

 return (FUNC_6(VAR_3, VAR_8));
}
