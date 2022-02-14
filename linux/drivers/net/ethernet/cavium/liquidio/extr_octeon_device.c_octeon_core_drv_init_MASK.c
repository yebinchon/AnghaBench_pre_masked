
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_9__ ;
typedef struct TYPE_17__ TYPE_8__ ;
typedef struct TYPE_16__ TYPE_7__ ;
typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int u64 ;
typedef scalar_t__ u32 ;
struct TYPE_11__ {scalar_t__ app_mode; int pkind; int app_cap_flags; scalar_t__ num_gmx_ports; scalar_t__ max_nic_ports; } ;
struct TYPE_12__ {TYPE_2__ r_core_drv_init; } ;
struct octeon_recv_pkt {scalar_t__* buffer_size; scalar_t__ buffer_count; int * buffer_ptr; TYPE_3__ rh; } ;
struct octeon_recv_info {struct octeon_recv_pkt* recv_pkt; } ;
struct TYPE_17__ {char* name; char* serial_number; int minor; int major; } ;
struct TYPE_16__ {int pkind; scalar_t__ app_mode; } ;
struct TYPE_10__ {scalar_t__ max_nic_ports; scalar_t__ app_mode; int app_cap_flags; scalar_t__ num_gmx_ports; } ;
struct octeon_device {scalar_t__ num_iqs; size_t octeon_id; TYPE_9__* pci_dev; TYPE_8__ boardinfo; int status; TYPE_7__ pfvf_hsword; TYPE_6__** instr_queue; TYPE_1__ fw_info; scalar_t__ app_mode; } ;
struct octeon_core_setup {int corefreq; int board_rev_minor; int board_rev_major; int board_serial_number; int boardname; } ;
typedef int app_name ;
struct TYPE_18__ {int dev; } ;
struct TYPE_13__ {int pkind; } ;
struct TYPE_14__ {TYPE_4__ s; } ;
struct TYPE_15__ {TYPE_5__ txpciq; } ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct octeon_device*,int ) ;
 int FUNC_2 (int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_3 (struct octeon_device*) ;
 scalar_t__ FUNC_4 (struct octeon_device*) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_5 (int *) ;
 int FUNC_6 (int *,int ) ;
 int VAR_6 ;
 int VAR_7 ;
 struct octeon_core_setup* VAR_8 ;
 int FUNC_7 (int *,char*,scalar_t__,scalar_t__) ;
 int FUNC_8 (int *,char*,scalar_t__,...) ;
 int FUNC_9 (int *,char*,char*,int ) ;
 int FUNC_10 (scalar_t__) ;
 scalar_t__ FUNC_11 (int ) ;
 int FUNC_12 (struct octeon_core_setup*,scalar_t__,int) ;
 int FUNC_13 (struct octeon_recv_info*) ;
 int FUNC_14 (int *,int) ;
 int FUNC_15 (int ) ;
 int FUNC_16 (char*,int ,int) ;

int FUNC_17(struct octeon_recv_info *VAR_9, void *VAR_10)
{
 u32 VAR_11;
 char VAR_12[16];
 struct octeon_device *VAR_13 = (struct octeon_device *)VAR_10;
 struct octeon_recv_pkt *VAR_14 = VAR_9->recv_pkt;
 struct octeon_core_setup *VAR_15 = ((void*)0);
 u32 VAR_16 = 0;

 if (FUNC_4(VAR_13))
  VAR_16 =
   FUNC_0(FUNC_1(VAR_13, VAR_7));
 else if (FUNC_3(VAR_13))
  VAR_16 =
   FUNC_0(FUNC_1(VAR_13, VAR_6));

 if (FUNC_5(&VAR_13->status) >= VAR_3) {
  FUNC_8(&VAR_13->pci_dev->dev, "Received CORE OK when device state is 0x%x\n",
   FUNC_5(&VAR_13->status));
  goto core_drv_init_err;
 }

 FUNC_16(VAR_12,
  FUNC_10(
  (u32)VAR_14->rh.r_core_drv_init.app_mode),
  sizeof(VAR_12) - 1);
 VAR_13->app_mode = (u32)VAR_14->rh.r_core_drv_init.app_mode;
 if (VAR_14->rh.r_core_drv_init.app_mode == VAR_0) {
  VAR_13->fw_info.max_nic_ports =
   (u32)VAR_14->rh.r_core_drv_init.max_nic_ports;
  VAR_13->fw_info.num_gmx_ports =
   (u32)VAR_14->rh.r_core_drv_init.num_gmx_ports;
 }

 if (VAR_13->fw_info.max_nic_ports < VAR_16) {
  FUNC_8(&VAR_13->pci_dev->dev,
   "Config has more ports than firmware allows (%d > %d).\n",
   VAR_16, VAR_13->fw_info.max_nic_ports);
  goto core_drv_init_err;
 }
 VAR_13->fw_info.app_cap_flags = VAR_14->rh.r_core_drv_init.app_cap_flags;
 VAR_13->fw_info.app_mode = (u32)VAR_14->rh.r_core_drv_init.app_mode;
 VAR_13->pfvf_hsword.app_mode = (u32)VAR_14->rh.r_core_drv_init.app_mode;

 VAR_13->pfvf_hsword.pkind = VAR_14->rh.r_core_drv_init.pkind;

 for (VAR_11 = 0; VAR_11 < VAR_13->num_iqs; VAR_11++)
  VAR_13->instr_queue[VAR_11]->txpciq.s.pkind = VAR_13->pfvf_hsword.pkind;

 FUNC_6(&VAR_13->status, VAR_2);

 VAR_15 = &VAR_8[VAR_13->octeon_id];

 if (VAR_14->buffer_size[0] != (sizeof(*VAR_15) + VAR_4)) {
  FUNC_7(&VAR_13->pci_dev->dev, "Core setup bytes expected %u found %d\n",
   (u32)sizeof(*VAR_15),
   VAR_14->buffer_size[0]);
 }

 FUNC_12(VAR_15, FUNC_11(
        VAR_14->buffer_ptr[0]) + VAR_4, sizeof(*VAR_15));

 FUNC_16(VAR_13->boardinfo.name, VAR_15->boardname, VAR_1);
 FUNC_16(VAR_13->boardinfo.serial_number, VAR_15->board_serial_number,
  VAR_5);

 FUNC_14((u64 *)VAR_15, (sizeof(*VAR_15) >> 3));

 VAR_13->boardinfo.major = VAR_15->board_rev_major;
 VAR_13->boardinfo.minor = VAR_15->board_rev_minor;

 FUNC_9(&VAR_13->pci_dev->dev,
   "Running %s (%llu Hz)\n",
   VAR_12, FUNC_2(VAR_15->corefreq));

core_drv_init_err:
 for (VAR_11 = 0; VAR_11 < VAR_14->buffer_count; VAR_11++)
  FUNC_15(VAR_14->buffer_ptr[VAR_11]);
 FUNC_13(VAR_9);
 return 0;
}
