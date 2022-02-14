
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct device {int dummy; } ;
struct brcmf_pciedev_info {int dummy; } ;
struct brcmf_pciedev {struct brcmf_pciedev_info* devinfo; } ;
struct brcmf_fw_request {int dummy; } ;
struct TYPE_2__ {struct brcmf_pciedev* pcie; } ;
struct brcmf_bus {TYPE_1__ bus_priv; } ;


 int VAR_0 ;
 int FUNC_0 (struct device*) ;
 int FUNC_1 (struct device*,struct brcmf_fw_request*,int ) ;
 int FUNC_2 (struct brcmf_pciedev_info*,int) ;
 struct brcmf_fw_request* FUNC_3 (struct brcmf_pciedev_info*) ;
 int FUNC_4 (struct brcmf_pciedev_info*) ;
 int FUNC_5 (struct brcmf_pciedev_info*) ;
 int FUNC_6 (struct brcmf_pciedev_info*) ;
 int FUNC_7 (struct brcmf_pciedev_info*) ;
 int VAR_1 ;
 int FUNC_8 (struct device*,char*) ;
 struct brcmf_bus* FUNC_9 (struct device*) ;
 int FUNC_10 (struct brcmf_fw_request*) ;

__attribute__((used)) static int FUNC_11(struct device *VAR_2)
{
 struct brcmf_bus *VAR_3 = FUNC_9(VAR_2);
 struct brcmf_pciedev *VAR_4 = VAR_3->bus_priv.pcie;
 struct brcmf_pciedev_info *VAR_5 = VAR_4->devinfo;
 struct brcmf_fw_request *VAR_6;
 int VAR_7;

 FUNC_2(VAR_5, 1);

 FUNC_0(VAR_2);

 FUNC_4(VAR_5);
 FUNC_6(VAR_5);
 FUNC_5(VAR_5);
 FUNC_7(VAR_5);

 VAR_6 = FUNC_3(VAR_5);
 if (!VAR_6) {
  FUNC_8(VAR_2, "Failed to prepare FW request\n");
  return -VAR_0;
 }

 VAR_7 = FUNC_1(VAR_2, VAR_6, VAR_1);
 if (VAR_7) {
  FUNC_8(VAR_2, "Failed to prepare FW request\n");
  FUNC_10(VAR_6);
 }

 return VAR_7;
}
