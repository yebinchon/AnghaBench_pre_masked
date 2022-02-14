
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {int groups; int * class; int release; } ;
struct TYPE_6__ {int max_size; scalar_t__ size; scalar_t__ used; } ;
struct TYPE_5__ {int max_size; scalar_t__ size; scalar_t__ used; } ;
struct ubi_device {int ubi_num; int vid_hdr_offset; int autoresize_vol_id; int fm_disabled; int peb_size; int bgt_name; int flash_size; int leb_size; int min_io_size; int max_write_size; int hdrs_min_io_size; int vid_hdr_aloffset; int leb_start; int good_peb_count; int bad_peb_count; int corr_peb_count; int vol_count; int vtbl_slots; int avail_pebs; int rsvd_pebs; int beb_rsvd_pebs; int thread_enabled; TYPE_3__ dev; int fm_buf; int peb_buf; int vtbl; int wl_lock; int bgt_thread; int image_seq; int mean_ec; int max_ec; int fm_size; int fm_eba_sem; int fm_protect; int volumes_lock; int device_mutex; int ckvol_mutex; int buf_mutex; TYPE_2__ fm_wl_pool; TYPE_1__ fm_pool; struct mtd_info* mtd; } ;
struct mtd_info {int index; scalar_t__ type; int name; int size; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_1 (int ) ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_2 (struct ubi_device*,int) ;
 int VAR_17 ;
 int FUNC_3 (TYPE_3__*) ;
 int VAR_18 ;
 scalar_t__ VAR_19 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct ubi_device*,int) ;
 int FUNC_6 (int ,struct ubi_device*,char*,int) ;
 struct ubi_device* FUNC_7 (int,int ) ;
 int FUNC_8 (int,int ) ;
 int FUNC_9 (int,int ) ;
 scalar_t__ FUNC_10 (int ,struct mtd_info*) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (char*,int,...) ;
 int FUNC_13 (TYPE_3__*) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (int *) ;
 int FUNC_17 (struct ubi_device*,int ) ;
 int FUNC_18 (struct ubi_device*) ;
 int VAR_20 ;
 int FUNC_19 (struct ubi_device*) ;
 int FUNC_20 (struct ubi_device*) ;
 int VAR_21 ;
 struct ubi_device** VAR_22 ;
 int FUNC_21 (struct ubi_device*) ;
 int FUNC_22 (struct ubi_device*,char*,int,...) ;
 int FUNC_23 (struct ubi_device*) ;
 int FUNC_24 (struct ubi_device*,char*,int,...) ;
 int FUNC_25 (struct ubi_device*,int ,int *) ;
 int VAR_23 ;
 int FUNC_26 (struct ubi_device*) ;
 int FUNC_27 (struct ubi_device*) ;
 int FUNC_28 (struct ubi_device*) ;
 int FUNC_29 (int ) ;
 int FUNC_30 (int) ;
 int FUNC_31 (int ) ;
 int FUNC_32 (int ) ;

int FUNC_33(struct mtd_info *VAR_24, int VAR_25,
         int VAR_26, int VAR_27)
{
 struct ubi_device *VAR_28;
 int VAR_29, VAR_30;

 if (VAR_27 < 0 || VAR_27 > VAR_7)
  return -VAR_3;

 if (!VAR_27)
  VAR_27 = VAR_0;







 for (VAR_29 = 0; VAR_29 < VAR_15; VAR_29++) {
  VAR_28 = VAR_22[VAR_29];
  if (VAR_28 && VAR_24->index == VAR_28->mtd->index) {
   FUNC_12("ubi: mtd%d is already attached to ubi%d\n",
    VAR_24->index, VAR_29);
   return -VAR_2;
  }
 }
 if (VAR_24->type == VAR_9) {
  FUNC_12("ubi: refuse attaching mtd%d - it is already emulated on top of UBI\n",
   VAR_24->index);
  return -VAR_3;
 }






 if (VAR_24->type == VAR_8) {
  FUNC_12("ubi: refuse attaching mtd%d - MLC NAND is not supported\n",
   VAR_24->index);
  return -VAR_3;
 }

 if (VAR_25 == VAR_10) {

  for (VAR_25 = 0; VAR_25 < VAR_15; VAR_25++)
   if (!VAR_22[VAR_25])
    break;
  if (VAR_25 == VAR_15) {
   FUNC_12("ubi: only %d UBI devices may be created\n",
    VAR_15);
   return -VAR_4;
  }
 } else {
  if (VAR_25 >= VAR_15)
   return -VAR_3;


  if (VAR_22[VAR_25]) {
   FUNC_12("ubi: ubi%i already exists\n", VAR_25);
   return -VAR_2;
  }
 }

 VAR_28 = FUNC_7(sizeof(struct ubi_device), VAR_6);
 if (!VAR_28)
  return -VAR_5;

 FUNC_3(&VAR_28->dev);
 VAR_28->dev.release = VAR_17;
 VAR_28->dev.class = &VAR_20;
 VAR_28->dev.groups = VAR_21;

 VAR_28->mtd = VAR_24;
 VAR_28->ubi_num = VAR_25;
 VAR_28->vid_hdr_offset = VAR_26;
 VAR_28->autoresize_vol_id = -1;
 VAR_28->fm_disabled = 1;

 FUNC_11(&VAR_28->buf_mutex);
 FUNC_11(&VAR_28->ckvol_mutex);
 FUNC_11(&VAR_28->device_mutex);
 FUNC_15(&VAR_28->volumes_lock);
 FUNC_4(&VAR_28->fm_protect);
 FUNC_4(&VAR_28->fm_eba_sem);

 FUNC_24(VAR_28, "attaching mtd%d", VAR_24->index);

 VAR_30 = FUNC_5(VAR_28, VAR_27);
 if (VAR_30)
  goto out_free;

 VAR_30 = -VAR_5;
 VAR_28->peb_buf = FUNC_30(VAR_28->peb_size);
 if (!VAR_28->peb_buf)
  goto out_free;







 VAR_30 = FUNC_17(VAR_28, 0);
 if (VAR_30) {
  FUNC_22(VAR_28, "failed to attach mtd%d, error %d",
   VAR_24->index, VAR_30);
  goto out_free;
 }

 if (VAR_28->autoresize_vol_id != -1) {
  VAR_30 = FUNC_2(VAR_28, VAR_28->autoresize_vol_id);
  if (VAR_30)
   goto out_detach;
 }


 VAR_22[VAR_25] = VAR_28;

 VAR_30 = FUNC_28(VAR_28);
 if (VAR_30)
  goto out_detach;

 VAR_30 = FUNC_20(VAR_28);
 if (VAR_30)
  goto out_uif;

 VAR_28->bgt_thread = FUNC_6(VAR_23, VAR_28, "%s", VAR_28->bgt_name);
 if (FUNC_0(VAR_28->bgt_thread)) {
  VAR_30 = FUNC_1(VAR_28->bgt_thread);
  FUNC_22(VAR_28, "cannot spawn \"%s\", error %d",
   VAR_28->bgt_name, VAR_30);
  goto out_debugfs;
 }

 FUNC_24(VAR_28, "attached mtd%d (name \"%s\", size %llu MiB)",
  VAR_24->index, VAR_24->name, VAR_28->flash_size >> 20);
 FUNC_24(VAR_28, "PEB size: %d bytes (%d KiB), LEB size: %d bytes",
  VAR_28->peb_size, VAR_28->peb_size >> 10, VAR_28->leb_size);
 FUNC_24(VAR_28, "min./max. I/O unit sizes: %d/%d, sub-page size %d",
  VAR_28->min_io_size, VAR_28->max_write_size, VAR_28->hdrs_min_io_size);
 FUNC_24(VAR_28, "VID header offset: %d (aligned %d), data offset: %d",
  VAR_28->vid_hdr_offset, VAR_28->vid_hdr_aloffset, VAR_28->leb_start);
 FUNC_24(VAR_28, "good PEBs: %d, bad PEBs: %d, corrupted PEBs: %d",
  VAR_28->good_peb_count, VAR_28->bad_peb_count, VAR_28->corr_peb_count);
 FUNC_24(VAR_28, "user volume: %d, internal volumes: %d, max. volumes count: %d",
  VAR_28->vol_count - VAR_14, VAR_14,
  VAR_28->vtbl_slots);
 FUNC_24(VAR_28, "max/mean erase counter: %d/%d, WL threshold: %d, image sequence number: %u",
  VAR_28->max_ec, VAR_28->mean_ec, VAR_1,
  VAR_28->image_seq);
 FUNC_24(VAR_28, "available PEBs: %d, total reserved PEBs: %d, PEBs reserved for bad PEB handling: %d",
  VAR_28->avail_pebs, VAR_28->rsvd_pebs, VAR_28->beb_rsvd_pebs);





 FUNC_14(&VAR_28->wl_lock);
 VAR_28->thread_enabled = 1;
 FUNC_32(VAR_28->bgt_thread);
 FUNC_16(&VAR_28->wl_lock);

 FUNC_25(VAR_28, VAR_16, ((void*)0));
 return VAR_25;

out_debugfs:
 FUNC_19(VAR_28);
out_uif:
 FUNC_27(VAR_28);
out_detach:
 VAR_22[VAR_25] = ((void*)0);
 FUNC_26(VAR_28);
 FUNC_23(VAR_28);
 FUNC_29(VAR_28->vtbl);
out_free:
 FUNC_29(VAR_28->peb_buf);
 FUNC_29(VAR_28->fm_buf);
 FUNC_13(&VAR_28->dev);
 return VAR_30;
}
