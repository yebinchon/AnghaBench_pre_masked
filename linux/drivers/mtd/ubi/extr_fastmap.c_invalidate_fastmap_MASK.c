
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ubi_wl_entry {int pnum; } ;
struct ubi_vid_io_buf {int dummy; } ;
struct ubi_vid_hdr {int sqnum; } ;
struct ubi_fastmap_layout {int used_blocks; struct ubi_wl_entry** e; } ;
struct ubi_device {struct ubi_fastmap_layout* fm; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct ubi_fastmap_layout*) ;
 struct ubi_fastmap_layout* FUNC_2 (int,int ) ;
 struct ubi_vid_io_buf* FUNC_3 (struct ubi_device*,int ) ;
 int FUNC_4 (struct ubi_vid_io_buf*) ;
 struct ubi_vid_hdr* FUNC_5 (struct ubi_vid_io_buf*) ;
 int FUNC_6 (struct ubi_device*,int ,struct ubi_vid_io_buf*) ;
 int FUNC_7 (struct ubi_device*) ;
 struct ubi_wl_entry* FUNC_8 (struct ubi_device*,int) ;
 int FUNC_9 (struct ubi_device*,struct ubi_wl_entry*,int ,int ) ;

__attribute__((used)) static int FUNC_10(struct ubi_device *VAR_4)
{
 int VAR_5;
 struct ubi_fastmap_layout *VAR_6;
 struct ubi_wl_entry *VAR_7;
 struct ubi_vid_io_buf *VAR_8 = ((void*)0);
 struct ubi_vid_hdr *VAR_9;

 if (!VAR_4->fm)
  return 0;

 VAR_4->fm = ((void*)0);

 VAR_5 = -VAR_0;
 VAR_6 = FUNC_2(sizeof(*VAR_6), VAR_2);
 if (!VAR_6)
  goto out;

 VAR_8 = FUNC_3(VAR_4, VAR_3);
 if (!VAR_8)
  goto out_free_fm;

 VAR_9 = FUNC_5(VAR_8);

 VAR_5 = -VAR_1;
 VAR_7 = FUNC_8(VAR_4, 1);
 if (!VAR_7)
  goto out_free_fm;





 VAR_9->sqnum = FUNC_0(FUNC_7(VAR_4));
 VAR_5 = FUNC_6(VAR_4, VAR_7->pnum, VAR_8);
 if (VAR_5 < 0) {
  FUNC_9(VAR_4, VAR_7, 0, 0);
  goto out_free_fm;
 }

 VAR_6->used_blocks = 1;
 VAR_6->e[0] = VAR_7;

 VAR_4->fm = VAR_6;

out:
 FUNC_4(VAR_8);
 return VAR_5;

out_free_fm:
 FUNC_1(VAR_6);
 goto out;
}
