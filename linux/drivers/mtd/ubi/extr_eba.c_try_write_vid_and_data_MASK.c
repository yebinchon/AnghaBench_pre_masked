
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ubi_volume {int vol_id; TYPE_2__* eba_tbl; struct ubi_device* ubi; } ;
struct ubi_vid_io_buf {int dummy; } ;
struct ubi_device {int fm_eba_sem; } ;
struct TYPE_4__ {TYPE_1__* entries; } ;
struct TYPE_3__ {int pnum; } ;


 int FUNC_0 (char*,int,int,int,int,int) ;
 int FUNC_1 (struct ubi_device*,void const*,int,int,int) ;
 int FUNC_2 (struct ubi_device*,int,struct ubi_vid_io_buf*) ;
 int FUNC_3 (struct ubi_device*,char*,int,int,int,...) ;
 int FUNC_4 (struct ubi_device*) ;
 int FUNC_5 (struct ubi_device*,int,int,int,int) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static int FUNC_7(struct ubi_volume *VAR_0, int VAR_1,
      struct ubi_vid_io_buf *VAR_2, const void *VAR_3,
      int VAR_4, int VAR_5)
{
 struct ubi_device *VAR_6 = VAR_0->ubi;
 int VAR_7, VAR_8, VAR_9, VAR_10 = VAR_0->vol_id;

 VAR_7 = FUNC_4(VAR_6);
 if (VAR_7 < 0) {
  VAR_9 = VAR_7;
  goto out_put;
 }

 VAR_8 = VAR_0->eba_tbl->entries[VAR_1].pnum;

 FUNC_0("write VID hdr and %d bytes at offset %d of LEB %d:%d, PEB %d",
  VAR_5, VAR_4, VAR_10, VAR_1, VAR_7);

 VAR_9 = FUNC_2(VAR_6, VAR_7, VAR_2);
 if (VAR_9) {
  FUNC_3(VAR_6, "failed to write VID header to LEB %d:%d, PEB %d",
    VAR_10, VAR_1, VAR_7);
  goto out_put;
 }

 if (VAR_5) {
  VAR_9 = FUNC_1(VAR_6, VAR_3, VAR_7, VAR_4, VAR_5);
  if (VAR_9) {
   FUNC_3(VAR_6,
     "failed to write %d bytes at offset %d of LEB %d:%d, PEB %d",
     VAR_5, VAR_4, VAR_10, VAR_1, VAR_7);
   goto out_put;
  }
 }

 VAR_0->eba_tbl->entries[VAR_1].pnum = VAR_7;

out_put:
 FUNC_6(&VAR_6->fm_eba_sem);

 if (VAR_9 && VAR_7 >= 0)
  VAR_9 = FUNC_5(VAR_6, VAR_10, VAR_1, VAR_7, 1);
 else if (!VAR_9 && VAR_8 >= 0)
  VAR_9 = FUNC_5(VAR_6, VAR_10, VAR_1, VAR_8, 0);

 return VAR_9;
}
