
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct ubi_volume {TYPE_2__* eba_tbl; } ;
struct ubi_vid_io_buf {int dummy; } ;
struct ubi_vid_hdr {scalar_t__ vol_type; int copy_flag; int sqnum; void* data_crc; void* data_size; void* data_pad; void* lnum; void* vol_id; } ;
struct ubi_device {int leb_size; int buf_mutex; int peb_buf; int volumes_lock; struct ubi_volume** volumes; int min_io_size; int fm_eba_sem; } ;
struct TYPE_4__ {TYPE_1__* entries; } ;
struct TYPE_3__ {int pnum; } ;


 int FUNC_0 (int,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 int FUNC_1 (void*) ;
 int FUNC_2 () ;
 void* FUNC_3 (int) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int ,int) ;
 int FUNC_6 (char*,int,...) ;
 scalar_t__ FUNC_7 (int) ;
 int FUNC_8 (struct ubi_device*,int,int) ;
 int FUNC_9 (struct ubi_device*,int,int) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int) ;
 int FUNC_16 (struct ubi_device*,int ,int) ;
 struct ubi_vid_hdr* FUNC_17 (struct ubi_vid_io_buf*) ;
 int FUNC_18 (struct ubi_device*,int ,int,int ,int) ;
 int FUNC_19 (struct ubi_device*,int,struct ubi_vid_io_buf*,int) ;
 int FUNC_20 (struct ubi_device*,int ,int,int ,int) ;
 int FUNC_21 (struct ubi_device*,int,struct ubi_vid_io_buf*) ;
 int FUNC_22 (struct ubi_device*) ;
 int FUNC_23 (struct ubi_device*,char*,int,int) ;
 int FUNC_24 (struct ubi_device*,int) ;

int FUNC_25(struct ubi_device *VAR_11, int VAR_12, int VAR_13,
       struct ubi_vid_io_buf *VAR_14)
{
 int VAR_15, VAR_16, VAR_17, VAR_18, VAR_19, VAR_20;
 struct ubi_vid_hdr *VAR_21 = FUNC_17(VAR_14);
 struct ubi_volume *VAR_22;
 uint32_t VAR_23;

 FUNC_15(FUNC_12(&VAR_11->fm_eba_sem));

 VAR_16 = FUNC_1(VAR_21->vol_id);
 VAR_17 = FUNC_1(VAR_21->lnum);

 FUNC_6("copy LEB %d:%d, PEB %d to PEB %d", VAR_16, VAR_17, VAR_12, VAR_13);

 if (VAR_21->vol_type == VAR_10) {
  VAR_18 = FUNC_1(VAR_21->data_size);
  VAR_19 = FUNC_0(VAR_18, VAR_11->min_io_size);
 } else
  VAR_18 = VAR_19 =
       VAR_11->leb_size - FUNC_1(VAR_21->data_pad);

 VAR_20 = FUNC_24(VAR_11, VAR_16);
 FUNC_13(&VAR_11->volumes_lock);






 VAR_22 = VAR_11->volumes[VAR_20];
 FUNC_14(&VAR_11->volumes_lock);
 if (!VAR_22) {

  FUNC_6("volume %d is being removed, cancel", VAR_16);
  return VAR_1;
 }
 VAR_15 = FUNC_8(VAR_11, VAR_16, VAR_17);
 if (VAR_15) {
  FUNC_6("contention on LEB %d:%d, cancel", VAR_16, VAR_17);
  return VAR_2;
 }






 if (VAR_22->eba_tbl->entries[VAR_17].pnum != VAR_12) {
  FUNC_6("LEB %d:%d is no longer mapped to PEB %d, mapped to PEB %d, cancel",
         VAR_16, VAR_17, VAR_12, VAR_22->eba_tbl->entries[VAR_17].pnum);
  VAR_15 = VAR_1;
  goto out_unlock_leb;
 }







 FUNC_10(&VAR_11->buf_mutex);
 FUNC_6("read %d bytes of data", VAR_19);
 VAR_15 = FUNC_18(VAR_11, VAR_11->peb_buf, VAR_12, 0, VAR_19);
 if (VAR_15 && VAR_15 != VAR_8) {
  FUNC_23(VAR_11, "error %d while reading data from PEB %d",
    VAR_15, VAR_12);
  VAR_15 = VAR_3;
  goto out_unlock_buf;
 }
 if (VAR_21->vol_type == VAR_9)
  VAR_19 = VAR_18 =
   FUNC_16(VAR_11, VAR_11->peb_buf, VAR_18);

 FUNC_2();
 VAR_23 = FUNC_5(VAR_7, VAR_11->peb_buf, VAR_18);
 FUNC_2();







 if (VAR_18 > 0) {
  VAR_21->copy_flag = 1;
  VAR_21->data_size = FUNC_3(VAR_18);
  VAR_21->data_crc = FUNC_3(VAR_23);
 }
 VAR_21->sqnum = FUNC_4(FUNC_22(VAR_11));

 VAR_15 = FUNC_21(VAR_11, VAR_13, VAR_14);
 if (VAR_15) {
  if (VAR_15 == -VAR_0)
   VAR_15 = VAR_6;
  goto out_unlock_buf;
 }

 FUNC_2();


 VAR_15 = FUNC_19(VAR_11, VAR_13, VAR_14, 1);
 if (VAR_15) {
  if (VAR_15 != VAR_8) {
   FUNC_23(VAR_11, "error %d while reading VID header back from PEB %d",
     VAR_15, VAR_13);
   if (FUNC_7(VAR_15))
    VAR_15 = VAR_5;
  } else
   VAR_15 = VAR_4;
  goto out_unlock_buf;
 }

 if (VAR_18 > 0) {
  VAR_15 = FUNC_20(VAR_11, VAR_11->peb_buf, VAR_13, 0, VAR_19);
  if (VAR_15) {
   if (VAR_15 == -VAR_0)
    VAR_15 = VAR_6;
   goto out_unlock_buf;
  }

  FUNC_2();
 }

 FUNC_15(VAR_22->eba_tbl->entries[VAR_17].pnum == VAR_12);
 VAR_22->eba_tbl->entries[VAR_17].pnum = VAR_13;

out_unlock_buf:
 FUNC_11(&VAR_11->buf_mutex);
out_unlock_leb:
 FUNC_9(VAR_11, VAR_16, VAR_17);
 return VAR_15;
}
