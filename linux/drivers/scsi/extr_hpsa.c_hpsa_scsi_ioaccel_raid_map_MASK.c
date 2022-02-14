
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u64 ;
typedef scalar_t__ u32 ;
typedef scalar_t__ u16 ;
struct scsi_cmnd {int* cmnd; TYPE_1__* device; } ;
struct raid_map_disk_data {scalar_t__ ioaccel_handle; } ;
struct raid_map_data {scalar_t__ data_disks_per_row; scalar_t__ strip_size; scalar_t__ metadata_disks_per_row; int parity_rotation_shift; scalar_t__ row_cnt; scalar_t__ layout_map_count; int phys_blk_shift; int disk_starting_blk; int volume_blk_cnt; struct raid_map_disk_data* data; } ;
struct hpsa_scsi_dev_t {int raid_level; int offload_to_mirror; int * phys_disk; int scsi3addr; scalar_t__ in_reset; struct raid_map_data raid_map; } ;
struct ctlr_info {int dummy; } ;
struct CommandList {int phys_disk; struct scsi_cmnd* scsi_cmd; } ;
struct TYPE_2__ {struct hpsa_scsi_dev_t* hostdata; } ;


 int FUNC_0 (int) ;





 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_1 (int,scalar_t__) ;
 int FUNC_2 (struct ctlr_info*,struct CommandList*,scalar_t__,int*,int,int ,int ) ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (struct raid_map_data*,int,scalar_t__*,scalar_t__*) ;
 scalar_t__ FUNC_6 (int) ;

__attribute__((used)) static int FUNC_7(struct ctlr_info *VAR_2,
 struct CommandList *VAR_3)
{
 struct scsi_cmnd *VAR_4 = VAR_3->scsi_cmd;
 struct hpsa_scsi_dev_t *VAR_5 = VAR_4->device->hostdata;
 struct raid_map_data *VAR_6 = &VAR_5->raid_map;
 struct raid_map_disk_data *VAR_7 = &VAR_6->data[0];
 int VAR_8 = 0;
 u32 VAR_9;
 u64 VAR_10, VAR_11;
 u32 VAR_12;
 u32 VAR_13;
 u64 VAR_14, VAR_15;
 u32 VAR_16, VAR_17;
 u32 VAR_18, VAR_19;
 u64 VAR_20, VAR_21;
 u32 VAR_22;
 u64 VAR_23, VAR_24;
 u32 VAR_25, VAR_26;
 u32 VAR_27, VAR_28;
 u32 VAR_29;
 u32 VAR_30;
 u32 VAR_31, VAR_32, VAR_33;
 u32 VAR_34;
 u32 VAR_35;
 u64 VAR_36;
 u32 VAR_37;
 u8 VAR_38[16];
 u8 VAR_39;
 u16 VAR_40;



 int VAR_41;

 if (!VAR_5)
  return -1;

 if (VAR_5->in_reset)
  return -1;


 switch (VAR_4->cmnd[0]) {
 case 128:
  VAR_8 = 1;

 case 132:
  VAR_10 = (((VAR_4->cmnd[1] & 0x1F) << 16) |
    (VAR_4->cmnd[2] << 8) |
    VAR_4->cmnd[3]);
  VAR_12 = VAR_4->cmnd[4];
  if (VAR_12 == 0)
   VAR_12 = 256;
  break;
 case 131:
  VAR_8 = 1;

 case 135:
  VAR_10 =
   (((u64) VAR_4->cmnd[2]) << 24) |
   (((u64) VAR_4->cmnd[3]) << 16) |
   (((u64) VAR_4->cmnd[4]) << 8) |
   VAR_4->cmnd[5];
  VAR_12 =
   (((u32) VAR_4->cmnd[7]) << 8) |
   VAR_4->cmnd[8];
  break;
 case 130:
  VAR_8 = 1;

 case 134:
  VAR_10 =
   (((u64) VAR_4->cmnd[2]) << 24) |
   (((u64) VAR_4->cmnd[3]) << 16) |
   (((u64) VAR_4->cmnd[4]) << 8) |
   VAR_4->cmnd[5];
  VAR_12 =
   (((u32) VAR_4->cmnd[6]) << 24) |
   (((u32) VAR_4->cmnd[7]) << 16) |
   (((u32) VAR_4->cmnd[8]) << 8) |
  VAR_4->cmnd[9];
  break;
 case 129:
  VAR_8 = 1;

 case 133:
  VAR_10 =
   (((u64) VAR_4->cmnd[2]) << 56) |
   (((u64) VAR_4->cmnd[3]) << 48) |
   (((u64) VAR_4->cmnd[4]) << 40) |
   (((u64) VAR_4->cmnd[5]) << 32) |
   (((u64) VAR_4->cmnd[6]) << 24) |
   (((u64) VAR_4->cmnd[7]) << 16) |
   (((u64) VAR_4->cmnd[8]) << 8) |
   VAR_4->cmnd[9];
  VAR_12 =
   (((u32) VAR_4->cmnd[10]) << 24) |
   (((u32) VAR_4->cmnd[11]) << 16) |
   (((u32) VAR_4->cmnd[12]) << 8) |
   VAR_4->cmnd[13];
  break;
 default:
  return VAR_0;
 }
 VAR_11 = VAR_10 + VAR_12 - 1;


 if (VAR_8 && VAR_5->raid_level != 0)
  return VAR_0;


 if (VAR_11 >= FUNC_4(VAR_6->volume_blk_cnt) ||
  VAR_11 < VAR_10)
  return VAR_0;


 VAR_13 = FUNC_3(VAR_6->data_disks_per_row) *
    FUNC_3(VAR_6->strip_size);
 VAR_40 = FUNC_3(VAR_6->strip_size);
 VAR_14 = VAR_10 / VAR_13;
 VAR_15 = VAR_11 / VAR_13;
 VAR_16 = (u32) (VAR_10 - (VAR_14 * VAR_13));
 VAR_17 = (u32) (VAR_11 - (VAR_15 * VAR_13));
 VAR_18 = VAR_16 / VAR_40;
 VAR_19 = VAR_17 / VAR_40;



 if ((VAR_14 != VAR_15) || (VAR_18 != VAR_19))
  return VAR_0;


 VAR_29 = FUNC_3(VAR_6->data_disks_per_row) +
    FUNC_3(VAR_6->metadata_disks_per_row);
 VAR_34 = ((u32)(VAR_14 >> VAR_6->parity_rotation_shift)) %
    FUNC_3(VAR_6->row_cnt);
 VAR_9 = (VAR_34 * VAR_29) + VAR_18;

 switch (VAR_5->raid_level) {
 case 140:
  break;
 case 139:




  FUNC_0(FUNC_3(VAR_6->layout_map_count) != 2);
  if (VAR_5->offload_to_mirror)
   VAR_9 += FUNC_3(VAR_6->data_disks_per_row);
  VAR_5->offload_to_mirror = !VAR_5->offload_to_mirror;
  break;
 case 136:



  FUNC_0(FUNC_3(VAR_6->layout_map_count) != 3);

  VAR_41 = VAR_5->offload_to_mirror;
  FUNC_5(VAR_6, VAR_41,
    &VAR_9, &VAR_33);

  VAR_41 =
   (VAR_41 >=
   FUNC_3(VAR_6->layout_map_count) - 1)
   ? 0 : VAR_41 + 1;
  VAR_5->offload_to_mirror = VAR_41;




  break;
 case 138:
 case 137:
  if (FUNC_3(VAR_6->layout_map_count) <= 1)
   break;


  VAR_22 =
   FUNC_3(VAR_6->strip_size) *
   FUNC_3(VAR_6->data_disks_per_row);
  FUNC_0(VAR_22 == 0);
  VAR_30 = VAR_22 *
   FUNC_3(VAR_6->layout_map_count);
  VAR_31 = (VAR_10 % VAR_30) / VAR_22;
  VAR_32 = (VAR_11 % VAR_30) / VAR_22;

  if (VAR_31 != VAR_32)
   return VAR_0;
  VAR_14 = VAR_23 = VAR_20 =
      VAR_10 / VAR_30;
  VAR_24 = VAR_21 = VAR_11 / VAR_30;

  if (VAR_23 != VAR_24)
   return VAR_0;
  VAR_16 = VAR_25 =
   (u32)((VAR_10 % VAR_30) %
      VAR_22);

  VAR_26 =
   (u32)((VAR_11 % VAR_30) %
      VAR_22);

  VAR_18 = VAR_27 =
   VAR_25 / FUNC_3(VAR_6->strip_size);
  VAR_28 =
   VAR_26 / FUNC_3(VAR_6->strip_size);

  if (VAR_27 != VAR_28)
   return VAR_0;


  VAR_34 = ((u32)(VAR_14 >> VAR_6->parity_rotation_shift)) %
   FUNC_3(VAR_6->row_cnt);

  VAR_9 = (VAR_31 *
   (FUNC_3(VAR_6->row_cnt) * VAR_29)) +
   (VAR_34 * VAR_29) + VAR_18;
  break;
 default:
  return VAR_0;
 }

 if (FUNC_6(VAR_9 >= VAR_1))
  return VAR_0;

 VAR_3->phys_disk = VAR_5->phys_disk[VAR_9];
 if (!VAR_3->phys_disk)
  return VAR_0;

 VAR_35 = VAR_7[VAR_9].ioaccel_handle;
 VAR_36 = FUNC_4(VAR_6->disk_starting_blk) +
   VAR_14 * FUNC_3(VAR_6->strip_size) +
   (VAR_16 - VAR_18 *
   FUNC_3(VAR_6->strip_size));
 VAR_37 = VAR_12;


 if (VAR_6->phys_blk_shift) {
  VAR_36 <<= VAR_6->phys_blk_shift;
  VAR_37 <<= VAR_6->phys_blk_shift;
 }
 FUNC_0(VAR_37 > 0xffff);


 if (VAR_36 > 0xffffffff) {
  VAR_38[0] = VAR_8 ? 129 : 133;
  VAR_38[1] = 0;
  VAR_38[2] = (u8) (VAR_36 >> 56);
  VAR_38[3] = (u8) (VAR_36 >> 48);
  VAR_38[4] = (u8) (VAR_36 >> 40);
  VAR_38[5] = (u8) (VAR_36 >> 32);
  VAR_38[6] = (u8) (VAR_36 >> 24);
  VAR_38[7] = (u8) (VAR_36 >> 16);
  VAR_38[8] = (u8) (VAR_36 >> 8);
  VAR_38[9] = (u8) (VAR_36);
  VAR_38[10] = (u8) (VAR_37 >> 24);
  VAR_38[11] = (u8) (VAR_37 >> 16);
  VAR_38[12] = (u8) (VAR_37 >> 8);
  VAR_38[13] = (u8) (VAR_37);
  VAR_38[14] = 0;
  VAR_38[15] = 0;
  VAR_39 = 16;
 } else {
  VAR_38[0] = VAR_8 ? 131 : 135;
  VAR_38[1] = 0;
  VAR_38[2] = (u8) (VAR_36 >> 24);
  VAR_38[3] = (u8) (VAR_36 >> 16);
  VAR_38[4] = (u8) (VAR_36 >> 8);
  VAR_38[5] = (u8) (VAR_36);
  VAR_38[6] = 0;
  VAR_38[7] = (u8) (VAR_37 >> 8);
  VAR_38[8] = (u8) (VAR_37);
  VAR_38[9] = 0;
  VAR_39 = 10;
 }
 return FUNC_2(VAR_2, VAR_3, VAR_35, VAR_38, VAR_39,
      VAR_5->scsi3addr,
      VAR_5->phys_disk[VAR_9]);
}
