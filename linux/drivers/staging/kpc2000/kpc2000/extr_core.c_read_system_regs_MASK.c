
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct kp2000_device {int card_id; int build_version; int build_datestamp; int build_timestamp; int core_table_length; int core_table_offset; int core_table_rev; int hardware_revision; int ddna; TYPE_1__* pdev; int ssid; scalar_t__ sysinfo_regs_base; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_0 (int *,char*,...) ;
 int FUNC_1 (int *,char*,int,int,int,int,int,int,int,int ,int) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (struct kp2000_device*) ;

__attribute__((used)) static int FUNC_4(struct kp2000_device *VAR_8)
{
 u64 VAR_9;

 VAR_9 = FUNC_2(VAR_8->sysinfo_regs_base + VAR_7);
 if (VAR_9 != VAR_1) {
  FUNC_0(&VAR_8->pdev->dev,
   "Invalid magic!  Got: 0x%016llx  Want: 0x%016llx\n",
   VAR_9, VAR_1);
  return -VAR_0;
 }

 VAR_9 = FUNC_2(VAR_8->sysinfo_regs_base + VAR_2);
 VAR_8->card_id = (VAR_9 & 0xFFFFFFFF00000000UL) >> 32;
 VAR_8->build_version = (VAR_9 & 0x00000000FFFFFFFFUL) >> 0;

 VAR_9 = FUNC_2(VAR_8->sysinfo_regs_base + VAR_4);
 VAR_8->build_datestamp = (VAR_9 & 0xFFFFFFFF00000000UL) >> 32;
 VAR_8->build_timestamp = (VAR_9 & 0x00000000FFFFFFFFUL) >> 0;

 VAR_9 = FUNC_2(VAR_8->sysinfo_regs_base + VAR_3);
 VAR_8->core_table_length = (VAR_9 & 0xFFFFFFFF00000000UL) >> 32;
 VAR_8->core_table_offset = (VAR_9 & 0x00000000FFFFFFFFUL) >> 0;

 FUNC_3(VAR_8);

 VAR_9 = FUNC_2(VAR_8->sysinfo_regs_base + VAR_6);
 VAR_8->core_table_rev = (VAR_9 & 0x0000000000000F00) >> 8;
 VAR_8->hardware_revision = (VAR_9 & 0x000000000000001F);

 VAR_9 = FUNC_2(VAR_8->sysinfo_regs_base + VAR_5);
 VAR_8->ddna = VAR_9;

 FUNC_1(&VAR_8->pdev->dev,
   "system_regs: %08x %08x %08x %08x  %02x  %d %d  %016llx  %016llx\n",
   VAR_8->card_id,
   VAR_8->build_version,
   VAR_8->build_datestamp,
   VAR_8->build_timestamp,
   VAR_8->hardware_revision,
   VAR_8->core_table_rev,
   VAR_8->core_table_length,
   VAR_8->ssid,
   VAR_8->ddna);

 if (VAR_8->core_table_rev > 1) {
  FUNC_0(&VAR_8->pdev->dev,
   "core table entry revision is higher than we can deal with, cannot continue with this card!\n");
  return 1;
 }

 return 0;
}
