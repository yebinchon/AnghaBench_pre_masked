
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gfs2_sbd {int sd_bitmap_lock; } ;
struct gfs2_quota_data {int qd_slot_count; struct gfs2_sbd* qd_sbd; } ;


 int FUNC_0 (struct gfs2_sbd*,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct gfs2_quota_data *VAR_0)
{
 struct gfs2_sbd *VAR_1 = VAR_0->qd_sbd;

 FUNC_1(&VAR_1->sd_bitmap_lock);
 FUNC_0(VAR_1, VAR_0->qd_slot_count);
 VAR_0->qd_slot_count++;
 FUNC_2(&VAR_1->sd_bitmap_lock);
}
