
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gfs2_sbd {int sd_log_in_flight; } ;
struct bio {int bi_opf; struct gfs2_sbd* bi_private; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct bio*) ;

void FUNC_2(struct bio **VAR_0, int VAR_1)
{
 struct bio *VAR_2 = *VAR_0;
 if (VAR_2) {
  struct gfs2_sbd *VAR_3 = VAR_2->bi_private;
  FUNC_0(&VAR_3->sd_log_in_flight);
  VAR_2->bi_opf = VAR_1;
  FUNC_1(VAR_2);
  *VAR_0 = ((void*)0);
 }
}
