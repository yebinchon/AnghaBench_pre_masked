
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ubi_vid_hdr {int dummy; } ;
struct ubi_device {int buf_mutex; int leb_size; int peb_buf; int leb_start; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int,int ) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (char*,int,int ,int ) ;
 scalar_t__ FUNC_5 (int ,int,int ) ;
 int FUNC_6 (int ,char*,int ,int,int,int ,int ,int) ;
 int FUNC_7 (struct ubi_vid_hdr*) ;
 int FUNC_8 (struct ubi_device*,char*,...) ;
 int FUNC_9 (struct ubi_device*,int ,int,int ,int ) ;

__attribute__((used)) static int FUNC_10(struct ubi_device *VAR_3, struct ubi_vid_hdr *VAR_4,
       int VAR_5)
{
 int VAR_6;

 FUNC_2(&VAR_3->buf_mutex);
 FUNC_0(VAR_3->peb_buf, 0x00, VAR_3->leb_size);

 VAR_6 = FUNC_9(VAR_3, VAR_3->peb_buf, VAR_5, VAR_3->leb_start,
     VAR_3->leb_size);
 if (VAR_6 == VAR_2 || FUNC_1(VAR_6)) {







  VAR_6 = 0;
  goto out_unlock;
 }

 if (VAR_6)
  goto out_unlock;

 if (FUNC_5(VAR_3->peb_buf, 0xFF, VAR_3->leb_size))
  goto out_unlock;

 FUNC_8(VAR_3, "PEB %d contains corrupted VID header, and the data does not contain all 0xFF",
  VAR_5);
 FUNC_8(VAR_3, "this may be a non-UBI PEB or a severe VID header corruption which requires manual inspection");
 FUNC_7(VAR_4);
 FUNC_4("hexdump of PEB %d offset %d, length %d",
        VAR_5, VAR_3->leb_start, VAR_3->leb_size);
 FUNC_6(VAR_1, "", VAR_0, 32, 1,
          VAR_3->peb_buf, VAR_3->leb_size, 1);
 VAR_6 = 1;

out_unlock:
 FUNC_3(&VAR_3->buf_mutex);
 return VAR_6;
}
