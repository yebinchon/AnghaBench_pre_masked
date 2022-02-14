
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct resource {int start; int end; int flags; } ;
struct mfd_cell {unsigned int id; char* name; int pdata_size; int num_resources; struct resource* resources; struct kpc_core_device_platdata* platform_data; } ;
struct kpc_core_device_platdata {int ddna; int ssid; int hardware_revision; int build_version; int card_id; } ;
struct kp2000_device {int card_num; int regs_base_resource; TYPE_1__* pdev; int ddna; int ssid; int hardware_revision; int build_version; int card_id; } ;
struct core_table_entry {int offset; int length; int type; } ;
typedef int resources ;
struct TYPE_2__ {int irq; int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct core_table_entry const) ;
 int FUNC_1 (struct core_table_entry const) ;
 int FUNC_2 (struct kp2000_device*) ;
 int FUNC_3 (int *,char*,int ,int ,int ,int,int,int) ;
 int FUNC_4 (struct resource**,int ,int) ;
 int FUNC_5 (int ,int,struct mfd_cell*,int,int *,int ,int *) ;

__attribute__((used)) static int FUNC_6(unsigned int VAR_2, struct kp2000_device *VAR_3,
       char *VAR_4, const struct core_table_entry VAR_5)
{
 struct mfd_cell VAR_6 = { .id = VAR_2, .name = VAR_4 };
 struct resource VAR_7[2];

 struct kpc_core_device_platdata VAR_8 = {
  .card_id = VAR_3->card_id,
  .build_version = VAR_3->build_version,
  .hardware_revision = VAR_3->hardware_revision,
  .ssid = VAR_3->ssid,
  .ddna = VAR_3->ddna,
 };

 FUNC_3(&VAR_3->pdev->dev, "Found Basic core: type = %02d  dma = %02x / %02x  offset = 0x%x  length = 0x%x (%d regs)\n", VAR_5.type, FUNC_1(VAR_5), FUNC_0(VAR_5), VAR_5.offset, VAR_5.length, VAR_5.length / 8);

 VAR_6.platform_data = &VAR_8;
 VAR_6.pdata_size = sizeof(struct kpc_core_device_platdata);
 VAR_6.num_resources = 2;

 FUNC_4(&VAR_7, 0, sizeof(VAR_7));

 VAR_7[0].start = VAR_5.offset;
 VAR_7[0].end = VAR_5.offset + (VAR_5.length - 1);
 VAR_7[0].flags = VAR_1;

 VAR_7[1].start = VAR_3->pdev->irq;
 VAR_7[1].end = VAR_3->pdev->irq;
 VAR_7[1].flags = VAR_0;

 VAR_6.resources = VAR_7;

 return FUNC_5(FUNC_2(VAR_3),
          VAR_3->card_num * 100,
          &VAR_6,
          1,
          &VAR_3->regs_base_resource,
          0,
          ((void*)0));
}
