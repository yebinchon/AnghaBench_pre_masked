
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct brcmf_pciedev_info {scalar_t__ state; } ;
struct brcmf_pcie_ringbuf {struct brcmf_pciedev_info* devinfo; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct brcmf_pciedev_info*,int ,int) ;

__attribute__((used)) static int FUNC_2(void *VAR_4)
{
 struct brcmf_pcie_ringbuf *VAR_5 = (struct brcmf_pcie_ringbuf *)VAR_4;
 struct brcmf_pciedev_info *VAR_6 = VAR_5->devinfo;

 if (VAR_6->state != VAR_0)
  return -VAR_2;

 FUNC_0(VAR_3, "RING !\n");

 FUNC_1(VAR_6, VAR_1, 1);

 return 0;
}
