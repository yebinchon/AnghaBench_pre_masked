
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ubi_vid_io_buf {int dummy; } ;
struct ubi_vid_hdr {int sqnum; void* lnum; void* data_pad; void* used_ebs; void* data_size; int compat; void* vol_id; int vol_type; } ;
struct ubi_device {int vtbl_size; } ;
struct ubi_attach_info {int erase; int max_sqnum; } ;
struct TYPE_2__ {int list; } ;
struct ubi_ainf_peb {TYPE_1__ u; int ec; int pnum; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct ubi_ainf_peb*) ;
 int FUNC_1 (struct ubi_ainf_peb*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 void* FUNC_2 (int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (char*,int) ;
 int FUNC_5 (int *,int *) ;
 int FUNC_6 (struct ubi_device*,struct ubi_attach_info*,int ,int ,struct ubi_vid_hdr*,int ) ;
 struct ubi_vid_io_buf* FUNC_7 (struct ubi_device*,int ) ;
 struct ubi_ainf_peb* FUNC_8 (struct ubi_device*,struct ubi_attach_info*) ;
 int FUNC_9 (struct ubi_attach_info*,struct ubi_ainf_peb*) ;
 int FUNC_10 (struct ubi_vid_io_buf*) ;
 struct ubi_vid_hdr* FUNC_11 (struct ubi_vid_io_buf*) ;
 int FUNC_12 (struct ubi_device*,void*,int ,int ,int ) ;
 int FUNC_13 (struct ubi_device*,int ,struct ubi_vid_io_buf*) ;

__attribute__((used)) static int FUNC_14(struct ubi_device *VAR_6, struct ubi_attach_info *VAR_7,
         int VAR_8, void *VAR_9)
{
 int VAR_10, VAR_11 = 0;
 struct ubi_vid_io_buf *VAR_12;
 struct ubi_vid_hdr *VAR_13;
 struct ubi_ainf_peb *VAR_14;

 FUNC_4("create volume table (copy #%d)", VAR_8 + 1);

 VAR_12 = FUNC_7(VAR_6, VAR_2);
 if (!VAR_12)
  return -VAR_1;

 VAR_13 = FUNC_11(VAR_12);

retry:
 VAR_14 = FUNC_8(VAR_6, VAR_7);
 if (FUNC_0(VAR_14)) {
  VAR_10 = FUNC_1(VAR_14);
  goto out_free;
 }

 VAR_13->vol_type = VAR_5;
 VAR_13->vol_id = FUNC_2(VAR_4);
 VAR_13->compat = VAR_3;
 VAR_13->data_size = VAR_13->used_ebs =
        VAR_13->data_pad = FUNC_2(0);
 VAR_13->lnum = FUNC_2(VAR_8);
 VAR_13->sqnum = FUNC_3(++VAR_7->max_sqnum);


 VAR_10 = FUNC_13(VAR_6, VAR_14->pnum, VAR_12);
 if (VAR_10)
  goto write_error;


 VAR_10 = FUNC_12(VAR_6, VAR_9, VAR_14->pnum, 0, VAR_6->vtbl_size);
 if (VAR_10)
  goto write_error;





 VAR_10 = FUNC_6(VAR_6, VAR_7, VAR_14->pnum, VAR_14->ec, VAR_13, 0);
 FUNC_9(VAR_7, VAR_14);
 FUNC_10(VAR_12);
 return VAR_10;

write_error:
 if (VAR_10 == -VAR_0 && ++VAR_11 <= 5) {




  FUNC_5(&VAR_14->u.list, &VAR_7->erase);
  goto retry;
 }
 FUNC_9(VAR_7, VAR_14);
out_free:
 FUNC_10(VAR_12);
 return VAR_10;

}
