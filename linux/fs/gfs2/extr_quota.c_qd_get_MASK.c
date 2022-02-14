
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kqid {int dummy; } ;
struct gfs2_sbd {int sd_quota_count; int sd_quota_list; } ;
struct gfs2_quota_data {int qd_gl; int qd_hlist; int qd_list; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 unsigned int FUNC_2 (struct gfs2_sbd*,struct kqid) ;
 struct gfs2_quota_data* FUNC_3 (unsigned int,struct gfs2_sbd*,struct kqid) ;
 int VAR_1 ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (int ,struct gfs2_quota_data*) ;
 int FUNC_6 (int *,int *) ;
 struct gfs2_quota_data* FUNC_7 (unsigned int,struct gfs2_sbd*,struct kqid) ;
 int * VAR_2 ;
 int VAR_3 ;
 int FUNC_8 () ;
 int FUNC_9 () ;
 int FUNC_10 (int *) ;
 int FUNC_11 (unsigned int) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (unsigned int) ;

__attribute__((used)) static int FUNC_14(struct gfs2_sbd *VAR_4, struct kqid VAR_5,
    struct gfs2_quota_data **VAR_6)
{
 struct gfs2_quota_data *VAR_7, *VAR_8;
 unsigned int VAR_9 = FUNC_2(VAR_4, VAR_5);

 FUNC_8();
 *VAR_6 = VAR_7 = FUNC_3(VAR_9, VAR_4, VAR_5);
 FUNC_9();

 if (VAR_7)
  return 0;

 VAR_8 = FUNC_7(VAR_9, VAR_4, VAR_5);
 if (!VAR_8)
  return -VAR_0;

 FUNC_10(&VAR_3);
 FUNC_11(VAR_9);
 *VAR_6 = VAR_7 = FUNC_3(VAR_9, VAR_4, VAR_5);
 if (VAR_7 == ((void*)0)) {
  *VAR_6 = VAR_8;
  FUNC_6(&VAR_8->qd_list, &VAR_4->sd_quota_list);
  FUNC_4(&VAR_8->qd_hlist, &VAR_2[VAR_9]);
  FUNC_0(&VAR_4->sd_quota_count);
 }
 FUNC_13(VAR_9);
 FUNC_12(&VAR_3);

 if (VAR_7) {
  FUNC_1(VAR_8->qd_gl);
  FUNC_5(VAR_1, VAR_8);
 }

 return 0;
}
