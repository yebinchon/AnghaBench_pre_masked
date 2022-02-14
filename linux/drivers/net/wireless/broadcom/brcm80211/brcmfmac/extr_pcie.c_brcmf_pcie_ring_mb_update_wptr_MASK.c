
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct brcmf_pciedev_info {scalar_t__ state; int (* read_ptr ) (struct brcmf_pciedev_info*,int ) ;} ;
struct brcmf_commonring {int r_ptr; int w_ptr; } ;
struct brcmf_pcie_ringbuf {int id; int w_idx_addr; struct brcmf_commonring commonring; struct brcmf_pciedev_info* devinfo; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*,int ,int ,int ) ;
 int FUNC_1 (struct brcmf_pciedev_info*,int ) ;

__attribute__((used)) static int FUNC_2(void *VAR_3)
{
 struct brcmf_pcie_ringbuf *VAR_4 = (struct brcmf_pcie_ringbuf *)VAR_3;
 struct brcmf_pciedev_info *VAR_5 = VAR_4->devinfo;
 struct brcmf_commonring *VAR_6 = &VAR_4->commonring;

 if (VAR_5->state != VAR_0)
  return -VAR_1;

 VAR_6->w_ptr = VAR_5->read_ptr(VAR_5, VAR_4->w_idx_addr);

 FUNC_0(VAR_2, "R w_ptr %d (%d), ring %d\n", VAR_6->w_ptr,
    VAR_6->r_ptr, VAR_4->id);

 return 0;
}
