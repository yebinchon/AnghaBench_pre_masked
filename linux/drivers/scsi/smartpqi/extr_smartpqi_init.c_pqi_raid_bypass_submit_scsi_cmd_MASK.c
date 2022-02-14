
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef scalar_t__ u64 ;
typedef scalar_t__ u32 ;
typedef scalar_t__ u16 ;
struct scsi_cmnd {int* cmnd; } ;
struct raid_map {scalar_t__ parity_rotation_shift; int phys_blk_shift; int flags; int disk_starting_blk; TYPE_1__* disk_data; int row_cnt; int metadata_disks_per_row; int layout_map_count; int strip_size; int data_disks_per_row; int volume_blk_cnt; } ;
struct pqi_scsi_dev {scalar_t__ raid_level; int offload_to_mirror; struct raid_map* raid_map; } ;
struct pqi_queue_group {int dummy; } ;
struct pqi_encryption_info {int dummy; } ;
struct pqi_ctrl_info {int dummy; } ;
struct TYPE_2__ {scalar_t__ aio_handle; } ;


 int VAR_0 ;
 int VAR_1 ;




 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (int) ;




 scalar_t__ FUNC_1 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_2 (int*) ;
 scalar_t__ FUNC_3 (int*) ;
 scalar_t__ FUNC_4 (int*) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int *) ;
 int FUNC_7 (struct pqi_ctrl_info*,struct scsi_cmnd*,scalar_t__,int*,int,struct pqi_queue_group*,struct pqi_encryption_info*,int) ;
 int FUNC_8 (struct pqi_encryption_info*,struct raid_map*,scalar_t__) ;
 int FUNC_9 (scalar_t__,int*) ;
 int FUNC_10 (scalar_t__,int*) ;
 int FUNC_11 (scalar_t__,int*) ;
 scalar_t__ FUNC_12 (int) ;

__attribute__((used)) static int FUNC_13(struct pqi_ctrl_info *VAR_7,
 struct pqi_scsi_dev *VAR_8, struct scsi_cmnd *VAR_9,
 struct pqi_queue_group *VAR_10)
{
 struct raid_map *VAR_11;
 bool VAR_12 = 0;
 u32 VAR_13;
 u64 VAR_14;
 u64 VAR_15;
 u32 VAR_16;
 u32 VAR_17;
 u64 VAR_18;
 u64 VAR_19;
 u32 VAR_20;
 u32 VAR_21;
 u32 VAR_22;
 u32 VAR_23;
 u64 VAR_24;
 u64 VAR_25;
 u32 VAR_26;
 u64 VAR_27;
 u64 VAR_28;
 u32 VAR_29;
 u32 VAR_30;
 u32 VAR_31;
 u32 VAR_32;
 u16 VAR_33;
 u32 VAR_34;
 u16 VAR_35;
 u32 VAR_36;
 u16 VAR_37;
 u32 VAR_38;
 u32 VAR_39;
 u32 VAR_40;
 u32 VAR_41;
 u32 VAR_42;
 u64 VAR_43;
 u32 VAR_44;
 u8 VAR_45[16];
 u8 VAR_46;
 int VAR_47;
 struct pqi_encryption_info *VAR_48;
 struct pqi_encryption_info VAR_49;





 switch (VAR_9->cmnd[0]) {
 case 128:
  VAR_12 = 1;

 case 132:
  VAR_14 = (u64)(((VAR_9->cmnd[1] & 0x1f) << 16) |
   (VAR_9->cmnd[2] << 8) | VAR_9->cmnd[3]);
  VAR_16 = (u32)VAR_9->cmnd[4];
  if (VAR_16 == 0)
   VAR_16 = 256;
  break;
 case 131:
  VAR_12 = 1;

 case 135:
  VAR_14 = (u64)FUNC_3(&VAR_9->cmnd[2]);
  VAR_16 = (u32)FUNC_2(&VAR_9->cmnd[7]);
  break;
 case 130:
  VAR_12 = 1;

 case 134:
  VAR_14 = (u64)FUNC_3(&VAR_9->cmnd[2]);
  VAR_16 = FUNC_3(&VAR_9->cmnd[6]);
  break;
 case 129:
  VAR_12 = 1;

 case 133:
  VAR_14 = FUNC_4(&VAR_9->cmnd[2]);
  VAR_16 = FUNC_3(&VAR_9->cmnd[10]);
  break;
 default:

  return VAR_0;
 }


 if (VAR_12 && VAR_8->raid_level != VAR_2)
  return VAR_0;

 if (FUNC_12(VAR_16 == 0))
  return VAR_0;

 VAR_15 = VAR_14 + VAR_16 - 1;
 VAR_11 = VAR_8->raid_map;


 if (VAR_15 >= FUNC_6(&VAR_11->volume_blk_cnt) ||
  VAR_15 < VAR_14)
  return VAR_0;

 VAR_33 = FUNC_5(&VAR_11->data_disks_per_row);
 VAR_37 = FUNC_5(&VAR_11->strip_size);
 VAR_35 = FUNC_5(&VAR_11->layout_map_count);


 VAR_17 = VAR_33 * VAR_37;
 VAR_18 = VAR_14 / VAR_17;
 VAR_19 = VAR_15 / VAR_17;
 VAR_20 = (u32)(VAR_14 - (VAR_18 * VAR_17));
 VAR_21 = (u32)(VAR_15 - (VAR_19 * VAR_17));
 VAR_22 = VAR_20 / VAR_37;
 VAR_23 = VAR_21 / VAR_37;



 if (VAR_18 != VAR_19 || VAR_22 != VAR_23)
  return VAR_0;


 VAR_34 = VAR_33 +
  FUNC_5(&VAR_11->metadata_disks_per_row);
 VAR_41 = ((u32)(VAR_18 >> VAR_11->parity_rotation_shift)) %
  FUNC_5(&VAR_11->row_cnt);
 VAR_13 = (VAR_41 * VAR_34) + VAR_22;


 if (VAR_8->raid_level == VAR_3) {
  if (VAR_8->offload_to_mirror)
   VAR_13 += VAR_33;
  VAR_8->offload_to_mirror = !VAR_8->offload_to_mirror;
 } else if (VAR_8->raid_level == VAR_6) {





  VAR_47 = VAR_8->offload_to_mirror;
  if (VAR_47 == 0) {

   VAR_13 %= VAR_33;
  } else {
   do {




    VAR_40 = VAR_13 / VAR_33;

    if (VAR_47 != VAR_40) {
     if (VAR_40 <
      VAR_35 - 1) {




      VAR_13 += VAR_33;
      VAR_40++;
     } else {




      VAR_13 %= VAR_33;
      VAR_40 = 0;
     }
    }
   } while (VAR_47 != VAR_40);
  }


  VAR_47 =
   (VAR_47 >= VAR_35 - 1) ?
    0 : VAR_47 + 1;
  FUNC_0(VAR_47 >= VAR_35);
  VAR_8->offload_to_mirror = VAR_47;





 } else if ((VAR_8->raid_level == VAR_4 ||
  VAR_8->raid_level == VAR_5) && VAR_35 > 1) {


  VAR_26 = VAR_37 * VAR_33;
  VAR_36 = VAR_26 * VAR_35;
  VAR_38 = (VAR_14 % VAR_36) / VAR_26;
  VAR_39 = (VAR_15 % VAR_36) / VAR_26;

  if (VAR_38 != VAR_39)
   return VAR_0;
  VAR_18 = VAR_27 = VAR_24 =
   VAR_14 / VAR_36;
  VAR_28 = VAR_25 = VAR_15 / VAR_36;

  if (VAR_27 != VAR_28)
   return VAR_0;
  VAR_20 = VAR_29 =
   (u32)((VAR_14 % VAR_36) %
   VAR_26);

  VAR_30 =
   (u32)((VAR_15 % VAR_36) %
   VAR_26);

  VAR_22 = VAR_29 / VAR_37;
  VAR_31 = VAR_22;
  VAR_32 = VAR_30 / VAR_37;

  if (VAR_31 != VAR_32)
   return VAR_0;


  VAR_41 =
   ((u32)(VAR_18 >> VAR_11->parity_rotation_shift)) %
   FUNC_5(&VAR_11->row_cnt);

  VAR_13 = (VAR_38 *
   (FUNC_5(&VAR_11->row_cnt) *
   VAR_34)) +
   (VAR_41 * VAR_34) + VAR_22;
 }

 VAR_42 = VAR_11->disk_data[VAR_13].aio_handle;
 VAR_43 = FUNC_6(&VAR_11->disk_starting_blk) +
  VAR_18 * VAR_37 +
  (VAR_20 - VAR_22 * VAR_37);
 VAR_44 = VAR_16;


 if (VAR_11->phys_blk_shift) {
  VAR_43 <<= VAR_11->phys_blk_shift;
  VAR_44 <<= VAR_11->phys_blk_shift;
 }

 if (FUNC_12(VAR_44 > 0xffff))
  return VAR_0;


 if (VAR_43 > 0xffffffff) {
  VAR_45[0] = VAR_12 ? 129 : 133;
  VAR_45[1] = 0;
  FUNC_11(VAR_43, &VAR_45[2]);
  FUNC_10(VAR_44, &VAR_45[10]);
  VAR_45[14] = 0;
  VAR_45[15] = 0;
  VAR_46 = 16;
 } else {
  VAR_45[0] = VAR_12 ? 131 : 135;
  VAR_45[1] = 0;
  FUNC_10((u32)VAR_43, &VAR_45[2]);
  VAR_45[6] = 0;
  FUNC_9((u16)VAR_44, &VAR_45[7]);
  VAR_45[9] = 0;
  VAR_46 = 10;
 }

 if (FUNC_5(&VAR_11->flags) &
  VAR_1) {
  FUNC_8(&VAR_49, VAR_11,
   VAR_14);
  VAR_48 = &VAR_49;
 } else {
  VAR_48 = ((void*)0);
 }

 return FUNC_7(VAR_7, VAR_9, VAR_42,
  VAR_45, VAR_46, VAR_10, VAR_48, 1);
}
