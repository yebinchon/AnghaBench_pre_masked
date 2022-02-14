
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gfs2_sbd {unsigned int sd_quota_slots; int sd_bitmap_lock; int sd_quota_bitmap; } ;
struct gfs2_quota_data {scalar_t__ qd_slot_count; unsigned int qd_slot; struct gfs2_sbd* qd_sbd; } ;


 int VAR_0 ;
 unsigned int FUNC_0 (int ,unsigned int) ;
 int FUNC_1 (unsigned int,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(struct gfs2_quota_data *VAR_1)
{
 struct gfs2_sbd *VAR_2 = VAR_1->qd_sbd;
 unsigned int VAR_3;
 int VAR_4 = 0;

 FUNC_2(&VAR_2->sd_bitmap_lock);
 if (VAR_1->qd_slot_count != 0)
  goto out;

 VAR_4 = -VAR_0;
 VAR_3 = FUNC_0(VAR_2->sd_quota_bitmap, VAR_2->sd_quota_slots);
 if (VAR_3 < VAR_2->sd_quota_slots) {
  FUNC_1(VAR_3, VAR_2->sd_quota_bitmap);
  VAR_1->qd_slot = VAR_3;
  VAR_4 = 0;
out:
  VAR_1->qd_slot_count++;
 }
 FUNC_3(&VAR_2->sd_bitmap_lock);

 return VAR_4;
}
