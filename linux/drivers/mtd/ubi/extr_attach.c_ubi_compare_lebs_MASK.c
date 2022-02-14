
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* uint32_t ;
struct ubi_vid_io_buf {int dummy; } ;
struct ubi_vid_hdr {int data_crc; int data_size; int copy_flag; int sqnum; } ;
struct ubi_device {int buf_mutex; int peb_buf; } ;
struct ubi_ainf_peb {unsigned long long sqnum; int pnum; int copy_flag; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 void* FUNC_0 (int ) ;
 unsigned long long FUNC_1 (int ) ;
 void* FUNC_2 (int ,int ,int) ;
 int FUNC_3 (char*,int,...) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 struct ubi_vid_io_buf* FUNC_7 (struct ubi_device*,int ) ;
 int FUNC_8 (struct ubi_device*,char*,...) ;
 int FUNC_9 (struct ubi_vid_io_buf*) ;
 struct ubi_vid_hdr* FUNC_10 (struct ubi_vid_io_buf*) ;
 int FUNC_11 (struct ubi_device*,int ,int,int ,int) ;
 int FUNC_12 (struct ubi_device*,int,struct ubi_vid_io_buf*,int ) ;

int FUNC_13(struct ubi_device *VAR_6, const struct ubi_ainf_peb *VAR_7,
   int VAR_8, const struct ubi_vid_hdr *VAR_9)
{
 int VAR_10, VAR_11, VAR_12, VAR_13 = 0, VAR_14 = 0;
 uint32_t VAR_15, VAR_16;
 struct ubi_vid_io_buf *VAR_17 = ((void*)0);
 unsigned long long VAR_18 = FUNC_1(VAR_9->sqnum);

 if (VAR_18 == VAR_7->sqnum) {
  FUNC_8(VAR_6, "unsupported on-flash UBI format");
  return -VAR_0;
 }


 VAR_12 = (VAR_18 > VAR_7->sqnum);
 if (VAR_12) {
  if (!VAR_9->copy_flag) {

   FUNC_3("second PEB %d is newer, copy_flag is unset",
    VAR_8);
   return 1;
  }
 } else {
  if (!VAR_7->copy_flag) {

   FUNC_3("first PEB %d is newer, copy_flag is unset",
    VAR_8);
   return VAR_13 << 1;
  }

  VAR_17 = FUNC_7(VAR_6, VAR_3);
  if (!VAR_17)
   return -VAR_2;

  VAR_8 = VAR_7->pnum;
  VAR_11 = FUNC_12(VAR_6, VAR_8, VAR_17, 0);
  if (VAR_11) {
   if (VAR_11 == VAR_5)
    VAR_13 = 1;
   else {
    FUNC_8(VAR_6, "VID of PEB %d header is bad, but it was OK earlier, err %d",
     VAR_8, VAR_11);
    if (VAR_11 > 0)
     VAR_11 = -VAR_1;

    goto out_free_vidh;
   }
  }

  VAR_9 = FUNC_10(VAR_17);
 }



 VAR_10 = FUNC_0(VAR_9->data_size);

 FUNC_5(&VAR_6->buf_mutex);
 VAR_11 = FUNC_11(VAR_6, VAR_6->peb_buf, VAR_8, 0, VAR_10);
 if (VAR_11 && VAR_11 != VAR_5 && !FUNC_4(VAR_11))
  goto out_unlock;

 VAR_15 = FUNC_0(VAR_9->data_crc);
 VAR_16 = FUNC_2(VAR_4, VAR_6->peb_buf, VAR_10);
 if (VAR_16 != VAR_15) {
  FUNC_3("PEB %d CRC error: calculated %#08x, must be %#08x",
   VAR_8, VAR_16, VAR_15);
  VAR_14 = 1;
  VAR_13 = 0;
  VAR_12 = !VAR_12;
 } else {
  FUNC_3("PEB %d CRC is OK", VAR_8);
  VAR_13 |= !!VAR_11;
 }
 FUNC_6(&VAR_6->buf_mutex);

 FUNC_9(VAR_17);

 if (VAR_12)
  FUNC_3("second PEB %d is newer, copy_flag is set", VAR_8);
 else
  FUNC_3("first PEB %d is newer, copy_flag is set", VAR_8);

 return VAR_12 | (VAR_13 << 1) | (VAR_14 << 2);

out_unlock:
 FUNC_6(&VAR_6->buf_mutex);
out_free_vidh:
 FUNC_9(VAR_17);
 return VAR_11;
}
