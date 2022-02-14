
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ubi_wl_entry {int pnum; } ;
struct TYPE_2__ {int rb_node; } ;
struct ubi_device {scalar_t__ works_count; scalar_t__ vid_hdr_aloffset; scalar_t__ peb_size; int wl_lock; int fm_eba_sem; int works; TYPE_1__ free; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct ubi_device*) ;
 int FUNC_3 (struct ubi_device*,struct ubi_wl_entry*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (struct ubi_device*,char*,...) ;
 int FUNC_8 (struct ubi_device*,int,scalar_t__,scalar_t__) ;
 int FUNC_9 (int *) ;
 struct ubi_wl_entry* FUNC_10 (struct ubi_device*) ;

int FUNC_11(struct ubi_device *VAR_1)
{
 int VAR_2;
 struct ubi_wl_entry *VAR_3;

retry:
 FUNC_0(&VAR_1->fm_eba_sem);
 FUNC_4(&VAR_1->wl_lock);
 if (!VAR_1->free.rb_node) {
  if (VAR_1->works_count == 0) {
   FUNC_7(VAR_1, "no free eraseblocks");
   FUNC_6(FUNC_1(&VAR_1->works));
   FUNC_5(&VAR_1->wl_lock);
   return -VAR_0;
  }

  VAR_2 = FUNC_2(VAR_1);
  if (VAR_2 < 0) {
   FUNC_5(&VAR_1->wl_lock);
   return VAR_2;
  }
  FUNC_5(&VAR_1->wl_lock);
  FUNC_9(&VAR_1->fm_eba_sem);
  goto retry;

 }
 VAR_3 = FUNC_10(VAR_1);
 FUNC_3(VAR_1, VAR_3);
 FUNC_5(&VAR_1->wl_lock);

 VAR_2 = FUNC_8(VAR_1, VAR_3->pnum, VAR_1->vid_hdr_aloffset,
        VAR_1->peb_size - VAR_1->vid_hdr_aloffset);
 if (VAR_2) {
  FUNC_7(VAR_1, "new PEB %d does not contain all 0xFF bytes", VAR_3->pnum);
  return VAR_2;
 }

 return VAR_3->pnum;
}
