
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct ubi_volume {int vol_id; int data_pad; } ;
struct ubi_vid_io_buf {int dummy; } ;
struct ubi_vid_hdr {int copy_flag; void* sqnum; void* data_crc; void* data_size; int vol_type; void* data_pad; int compat; void* lnum; void* vol_id; } ;
struct ubi_device {int alc_mutex; int bad_allowed; scalar_t__ ro_mode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 void* FUNC_0 (int) ;
 void* FUNC_1 (int ) ;
 int FUNC_2 (int ,void const*,int) ;
 int FUNC_3 (char*,int,int) ;
 int FUNC_4 (struct ubi_device*,int,int) ;
 int FUNC_5 (struct ubi_device*,int,int) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (struct ubi_volume*,int,struct ubi_vid_io_buf*,void const*,int ,int) ;
 struct ubi_vid_io_buf* FUNC_9 (struct ubi_device*,int ) ;
 int FUNC_10 (struct ubi_device*,struct ubi_volume*,int) ;
 int FUNC_11 (struct ubi_device*,struct ubi_volume*,int,int *,int ,int ) ;
 int FUNC_12 (struct ubi_vid_io_buf*) ;
 int FUNC_13 (struct ubi_device*,int) ;
 struct ubi_vid_hdr* FUNC_14 (struct ubi_vid_io_buf*) ;
 int FUNC_15 (struct ubi_device*,char*) ;
 int FUNC_16 (struct ubi_device*) ;
 int FUNC_17 (struct ubi_device*) ;

int FUNC_18(struct ubi_device *VAR_7, struct ubi_volume *VAR_8,
         int VAR_9, const void *VAR_10, int VAR_11)
{
 int VAR_12, VAR_13, VAR_14 = VAR_8->vol_id;
 struct ubi_vid_io_buf *VAR_15;
 struct ubi_vid_hdr *VAR_16;
 uint32_t VAR_17;

 if (VAR_7->ro_mode)
  return -VAR_2;

 if (VAR_11 == 0) {




  VAR_12 = FUNC_10(VAR_7, VAR_8, VAR_9);
  if (VAR_12)
   return VAR_12;
  return FUNC_11(VAR_7, VAR_8, VAR_9, ((void*)0), 0, 0);
 }

 VAR_15 = FUNC_9(VAR_7, VAR_3);
 if (!VAR_15)
  return -VAR_1;

 VAR_16 = FUNC_14(VAR_15);

 FUNC_6(&VAR_7->alc_mutex);
 VAR_12 = FUNC_4(VAR_7, VAR_14, VAR_9);
 if (VAR_12)
  goto out_mutex;

 VAR_16->sqnum = FUNC_1(FUNC_16(VAR_7));
 VAR_16->vol_id = FUNC_0(VAR_14);
 VAR_16->lnum = FUNC_0(VAR_9);
 VAR_16->compat = FUNC_13(VAR_7, VAR_14);
 VAR_16->data_pad = FUNC_0(VAR_8->data_pad);

 VAR_17 = FUNC_2(VAR_4, VAR_10, VAR_11);
 VAR_16->vol_type = VAR_6;
 VAR_16->data_size = FUNC_0(VAR_11);
 VAR_16->copy_flag = 1;
 VAR_16->data_crc = FUNC_0(VAR_17);

 FUNC_3("change LEB %d:%d", VAR_14, VAR_9);

 for (VAR_13 = 0; VAR_13 <= VAR_5; VAR_13++) {
  VAR_12 = FUNC_8(VAR_8, VAR_9, VAR_15, VAR_10, 0, VAR_11);
  if (VAR_12 != -VAR_0 || !VAR_7->bad_allowed)
   break;

  VAR_16->sqnum = FUNC_1(FUNC_16(VAR_7));
  FUNC_15(VAR_7, "try another PEB");
 }






 if (VAR_12)
  FUNC_17(VAR_7);

 FUNC_5(VAR_7, VAR_14, VAR_9);

out_mutex:
 FUNC_7(&VAR_7->alc_mutex);
 FUNC_12(VAR_15);
 return VAR_12;
}
