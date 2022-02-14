
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ceph_mds_session {int s_nr_caps; int s_mutex; } ;
struct ceph_mds_client {int caps_avail_count; int caps_reserve_count; int caps_total_count; int caps_use_count; int max_sessions; int caps_list_lock; int caps_list; int mutex; } ;
struct ceph_cap_reservation {int count; scalar_t__ used; } ;
struct ceph_cap {int caps_item; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 struct ceph_mds_session* FUNC_2 (struct ceph_mds_client*,int) ;
 int FUNC_3 (struct ceph_mds_client*,int) ;
 int VAR_2 ;
 int FUNC_4 (struct ceph_mds_session*) ;
 int FUNC_5 (struct ceph_mds_client*,struct ceph_mds_session*,int) ;
 int FUNC_6 (char*,struct ceph_cap_reservation*,int,...) ;
 struct ceph_cap* FUNC_7 (int ,int ) ;
 int FUNC_8 (int *,int *) ;
 int FUNC_9 (int *,int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int VAR_3 ;
 int FUNC_12 (char*,struct ceph_cap_reservation*,int,int) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *) ;

int FUNC_15(struct ceph_mds_client *VAR_4,
        struct ceph_cap_reservation *VAR_5, int VAR_6)
{
 int VAR_7, VAR_8;
 struct ceph_cap *VAR_9;
 int VAR_10;
 int VAR_11 = 0;
 int VAR_12;
 int VAR_13 = 0;
 bool VAR_14 = 0;
 struct ceph_mds_session *VAR_15;
 FUNC_1(VAR_3);

 FUNC_6("reserve caps ctx=%p need=%d\n", VAR_5, VAR_6);


 FUNC_13(&VAR_4->caps_list_lock);
 if (VAR_4->caps_avail_count >= VAR_6)
  VAR_10 = VAR_6;
 else
  VAR_10 = VAR_4->caps_avail_count;
 VAR_4->caps_avail_count -= VAR_10;
 VAR_4->caps_reserve_count += VAR_10;
 FUNC_0(VAR_4->caps_total_count != VAR_4->caps_use_count +
      VAR_4->caps_reserve_count +
      VAR_4->caps_avail_count);
 FUNC_14(&VAR_4->caps_list_lock);

 for (VAR_7 = VAR_10; VAR_7 < VAR_6; ) {
  VAR_9 = FUNC_7(VAR_2, VAR_1);
  if (VAR_9) {
   FUNC_8(&VAR_9->caps_item, &VAR_3);
   VAR_11++;
   VAR_7++;
   continue;
  }

  if (!VAR_14) {
   for (VAR_8 = 0; VAR_8 < VAR_4->max_sessions; VAR_8++) {
    VAR_15 = FUNC_2(VAR_4, VAR_8);
    if (!VAR_15)
     continue;
    FUNC_11(&VAR_4->mutex);

    FUNC_10(&VAR_15->s_mutex);
    VAR_12 = VAR_15->s_nr_caps - (VAR_6 - VAR_7);
    FUNC_5(VAR_4, VAR_15, VAR_12);
    FUNC_11(&VAR_15->s_mutex);

    FUNC_4(VAR_15);
    FUNC_10(&VAR_4->mutex);
   }
   VAR_14 = 1;

   FUNC_13(&VAR_4->caps_list_lock);
   if (VAR_4->caps_avail_count) {
    int VAR_16;
    if (VAR_4->caps_avail_count >= VAR_6 - VAR_7)
     VAR_16 = VAR_6 - VAR_7;
    else
     VAR_16 = VAR_4->caps_avail_count;

    VAR_7 += VAR_16;
    VAR_10 += VAR_16;
    VAR_4->caps_avail_count -= VAR_16;
    VAR_4->caps_reserve_count += VAR_16;

   }
   FUNC_14(&VAR_4->caps_list_lock);

   continue;
  }

  FUNC_12("reserve caps ctx=%p ENOMEM need=%d got=%d\n",
   VAR_5, VAR_6, VAR_10 + VAR_11);
  VAR_13 = -VAR_0;
  break;
 }

 if (!VAR_13) {
  FUNC_0(VAR_10 + VAR_11 != VAR_6);
  VAR_5->count = VAR_6;
  VAR_5->used = 0;
 }

 FUNC_13(&VAR_4->caps_list_lock);
 VAR_4->caps_total_count += VAR_11;
 VAR_4->caps_reserve_count += VAR_11;
 FUNC_9(&VAR_3, &VAR_4->caps_list);

 FUNC_0(VAR_4->caps_total_count != VAR_4->caps_use_count +
      VAR_4->caps_reserve_count +
      VAR_4->caps_avail_count);

 if (VAR_13)
  FUNC_3(VAR_4, VAR_10 + VAR_11);

 FUNC_14(&VAR_4->caps_list_lock);

 FUNC_6("reserve caps ctx=%p %d = %d used + %d resv + %d avail\n",
      VAR_5, VAR_4->caps_total_count, VAR_4->caps_use_count,
      VAR_4->caps_reserve_count, VAR_4->caps_avail_count);
 return VAR_13;
}
