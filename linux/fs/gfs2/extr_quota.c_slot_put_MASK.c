
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gfs2_sbd {int sd_bitmap_lock; int sd_quota_bitmap; } ;
struct gfs2_quota_data {int qd_slot; int qd_slot_count; struct gfs2_sbd* qd_sbd; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct gfs2_sbd*,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int,int ) ;

__attribute__((used)) static void FUNC_5(struct gfs2_quota_data *VAR_0)
{
 struct gfs2_sbd *VAR_1 = VAR_0->qd_sbd;

 FUNC_2(&VAR_1->sd_bitmap_lock);
 FUNC_1(VAR_1, VAR_0->qd_slot_count);
 if (!--VAR_0->qd_slot_count) {
  FUNC_0(!FUNC_4(VAR_0->qd_slot, VAR_1->sd_quota_bitmap));
  VAR_0->qd_slot = -1;
 }
 FUNC_3(&VAR_1->sd_bitmap_lock);
}
