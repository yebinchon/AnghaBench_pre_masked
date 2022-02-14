
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct ubi_volume {int vol_id; TYPE_2__* eba_tbl; struct ubi_device* ubi; } ;
struct ubi_vid_io_buf {int dummy; } ;
struct ubi_vid_hdr {scalar_t__ vol_type; int copy_flag; void* data_crc; void* data_size; int sqnum; } ;
struct ubi_device {int fm_eba_sem; int buf_mutex; scalar_t__ peb_buf; } ;
struct TYPE_4__ {TYPE_1__* entries; } ;
struct TYPE_3__ {int pnum; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 void* FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,scalar_t__,int) ;
 int FUNC_3 (scalar_t__,void const*,int) ;
 int FUNC_4 (scalar_t__,int,int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int) ;
 struct ubi_vid_hdr* FUNC_8 (struct ubi_vid_io_buf*) ;
 int FUNC_9 (struct ubi_device*,scalar_t__,int,int ,int) ;
 int FUNC_10 (struct ubi_device*,int,struct ubi_vid_io_buf*,int) ;
 int FUNC_11 (struct ubi_device*,scalar_t__,int,int ,int) ;
 int FUNC_12 (struct ubi_device*,int,struct ubi_vid_io_buf*) ;
 int FUNC_13 (struct ubi_device*,char*,...) ;
 int FUNC_14 (struct ubi_device*) ;
 int FUNC_15 (struct ubi_device*,char*,int) ;
 int FUNC_16 (struct ubi_device*) ;
 int FUNC_17 (struct ubi_device*,int,int,int,int) ;
 int FUNC_18 (int *) ;

__attribute__((used)) static int FUNC_19(struct ubi_volume *VAR_4, int VAR_5, int VAR_6,
      const void *VAR_7, int VAR_8, int VAR_9,
      struct ubi_vid_io_buf *VAR_10, bool *VAR_11)
{
 struct ubi_device *VAR_12 = VAR_4->ubi;
 struct ubi_vid_hdr *VAR_13;
 int VAR_14, VAR_15, VAR_16 = VAR_4->vol_id, VAR_17;
 uint32_t VAR_18;

 *VAR_11 = 0;

 VAR_14 = FUNC_16(VAR_12);
 if (VAR_14 < 0) {
  VAR_15 = VAR_14;
  goto out_put;
 }

 FUNC_13(VAR_12, "recover PEB %d, move data to PEB %d",
  VAR_5, VAR_14);

 VAR_15 = FUNC_10(VAR_12, VAR_5, VAR_10, 1);
 if (VAR_15 && VAR_15 != VAR_2) {
  if (VAR_15 > 0)
   VAR_15 = -VAR_0;
  goto out_put;
 }

 VAR_13 = FUNC_8(VAR_10);
 FUNC_7(VAR_13->vol_type == VAR_3);

 FUNC_5(&VAR_12->buf_mutex);
 FUNC_4(VAR_12->peb_buf + VAR_8, 0xFF, VAR_9);


 if (VAR_8 > 0) {
  VAR_15 = FUNC_9(VAR_12, VAR_12->peb_buf, VAR_5, 0, VAR_8);
  if (VAR_15 && VAR_15 != VAR_2)
   goto out_unlock;
 }

 *VAR_11 = 1;

 FUNC_3(VAR_12->peb_buf + VAR_8, VAR_7, VAR_9);

 VAR_17 = VAR_8 + VAR_9;
 VAR_18 = FUNC_2(VAR_1, VAR_12->peb_buf, VAR_17);
 VAR_13->sqnum = FUNC_1(FUNC_14(VAR_12));
 VAR_13->copy_flag = 1;
 VAR_13->data_size = FUNC_0(VAR_17);
 VAR_13->data_crc = FUNC_0(VAR_18);
 VAR_15 = FUNC_12(VAR_12, VAR_14, VAR_10);
 if (VAR_15)
  goto out_unlock;

 VAR_15 = FUNC_11(VAR_12, VAR_12->peb_buf, VAR_14, 0, VAR_17);

out_unlock:
 FUNC_6(&VAR_12->buf_mutex);

 if (!VAR_15)
  VAR_4->eba_tbl->entries[VAR_6].pnum = VAR_14;

out_put:
 FUNC_18(&VAR_12->fm_eba_sem);

 if (!VAR_15) {
  FUNC_17(VAR_12, VAR_16, VAR_6, VAR_5, 1);
  FUNC_13(VAR_12, "data was successfully recovered");
 } else if (VAR_14 >= 0) {




  FUNC_17(VAR_12, VAR_16, VAR_6, VAR_14, 1);
  FUNC_15(VAR_12, "failed to write to PEB %d", VAR_14);
 }

 return VAR_15;
}
