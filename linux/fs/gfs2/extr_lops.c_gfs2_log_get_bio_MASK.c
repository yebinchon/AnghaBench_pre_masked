
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct gfs2_sbd {int sd_fsb2bb_shift; } ;
struct bio {int dummy; } ;
typedef int bio_end_io_t ;


 int FUNC_0 (struct bio*) ;
 struct bio* FUNC_1 (struct gfs2_sbd*,int,int *) ;
 int FUNC_2 (struct bio**,int) ;

__attribute__((used)) static struct bio *FUNC_3(struct gfs2_sbd *VAR_0, u64 VAR_1,
        struct bio **VAR_2, int VAR_3,
        bio_end_io_t *VAR_4, bool VAR_5)
{
 struct bio *VAR_6 = *VAR_2;

 if (VAR_6) {
  u64 VAR_7;

  VAR_7 = FUNC_0(VAR_6);
  VAR_7 >>= VAR_0->sd_fsb2bb_shift;
  if (VAR_1 == VAR_7 && !VAR_5)
   return VAR_6;
  FUNC_2(VAR_2, VAR_3);
 }

 *VAR_2 = FUNC_1(VAR_0, VAR_1, VAR_4);
 return *VAR_2;
}
