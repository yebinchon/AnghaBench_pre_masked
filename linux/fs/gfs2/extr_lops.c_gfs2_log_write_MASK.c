
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct page {int dummy; } ;
struct gfs2_sbd {int sd_log_bio; } ;
struct bio {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct bio*,struct page*,unsigned int,unsigned int) ;
 int VAR_1 ;
 struct bio* FUNC_2 (struct gfs2_sbd*,int ,int *,int ,int ,int) ;

void FUNC_3(struct gfs2_sbd *VAR_2, struct page *VAR_3,
      unsigned VAR_4, unsigned VAR_5, u64 VAR_6)
{
 struct bio *VAR_7;
 int VAR_8;

 VAR_7 = FUNC_2(VAR_2, VAR_6, &VAR_2->sd_log_bio, VAR_0,
          VAR_1, 0);
 VAR_8 = FUNC_1(VAR_7, VAR_3, VAR_4, VAR_5);
 if (VAR_8 == 0) {
  VAR_7 = FUNC_2(VAR_2, VAR_6, &VAR_2->sd_log_bio,
           VAR_0, VAR_1, 1);
  VAR_8 = FUNC_1(VAR_7, VAR_3, VAR_4, VAR_5);
  FUNC_0(VAR_8 == 0);
 }
}
