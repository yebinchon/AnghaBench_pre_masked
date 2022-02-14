
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct st_hba {TYPE_3__* pdev; struct st_frame* copy_buffer; } ;
struct TYPE_4__ {int build; int oem; int minor; int major; } ;
struct st_frame {int id; int subid; int irq_vec; scalar_t__ irq_level; int slot; int bus; TYPE_1__ drv_ver; scalar_t__ rom_addr; scalar_t__ base; } ;
struct st_ccb {int cmd; } ;
struct TYPE_6__ {int vendor; int device; int subsystem_vendor; int subsystem_device; int irq; int devfn; TYPE_2__* bus; } ;
struct TYPE_5__ {int number; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (scalar_t__,int ,int) ;
 unsigned long FUNC_1 (TYPE_3__*,int ) ;
 int FUNC_2 (int ,struct st_frame*,size_t) ;
 int FUNC_3 (int ,struct st_frame*,size_t) ;

__attribute__((used)) static void FUNC_4(struct st_hba *VAR_4, struct st_ccb *VAR_5)
{
 struct st_frame *VAR_6;
 size_t VAR_7 = sizeof(struct st_frame);

 VAR_6 = VAR_4->copy_buffer;
 FUNC_3(VAR_5->cmd, VAR_6, VAR_7);
 FUNC_0(VAR_6->base, 0, sizeof(u32)*6);
 *(unsigned long *)(VAR_6->base) = FUNC_1(VAR_4->pdev, 0);
 VAR_6->rom_addr = 0;

 VAR_6->drv_ver.major = VAR_2;
 VAR_6->drv_ver.minor = VAR_3;
 VAR_6->drv_ver.oem = VAR_1;
 VAR_6->drv_ver.build = VAR_0;

 VAR_6->bus = VAR_4->pdev->bus->number;
 VAR_6->slot = VAR_4->pdev->devfn;
 VAR_6->irq_level = 0;
 VAR_6->irq_vec = VAR_4->pdev->irq;
 VAR_6->id = VAR_4->pdev->vendor << 16 | VAR_4->pdev->device;
 VAR_6->subid =
  VAR_4->pdev->subsystem_vendor << 16 | VAR_4->pdev->subsystem_device;

 FUNC_2(VAR_5->cmd, VAR_6, VAR_7);
}
