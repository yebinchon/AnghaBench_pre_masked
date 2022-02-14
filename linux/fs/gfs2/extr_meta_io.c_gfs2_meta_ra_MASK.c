
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
struct TYPE_4__ {int sb_bsize_shift; } ;
struct gfs2_sbd {TYPE_2__ sd_sb; } ;
struct TYPE_3__ {struct gfs2_sbd* ln_sbd; } ;
struct gfs2_glock {TYPE_1__ gl_name; } ;
struct buffer_head {int dummy; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct buffer_head*) ;
 int FUNC_2 (struct buffer_head*) ;
 scalar_t__ FUNC_3 (struct buffer_head*) ;
 struct buffer_head* FUNC_4 (struct gfs2_glock*,int ,int ) ;
 int FUNC_5 (struct gfs2_sbd*,int ) ;
 int VAR_5 ;
 int FUNC_6 (int ,int,int,struct buffer_head**) ;
 int FUNC_7 (struct buffer_head*) ;

struct buffer_head *FUNC_8(struct gfs2_glock *VAR_6, u64 VAR_7, u32 VAR_8)
{
 struct gfs2_sbd *VAR_9 = VAR_6->gl_name.ln_sbd;
 struct buffer_head *VAR_10, *VAR_11;
 u32 VAR_12 = FUNC_5(VAR_9, VAR_5) >>
     VAR_9->sd_sb.sb_bsize_shift;

 FUNC_0(!VAR_8);

 if (VAR_12 < 1)
  VAR_12 = 1;
 if (VAR_8 > VAR_12)
  VAR_8 = VAR_12;

 VAR_10 = FUNC_4(VAR_6, VAR_7, VAR_0);

 if (FUNC_3(VAR_10))
  goto out;
 if (!FUNC_2(VAR_10))
  FUNC_6(VAR_2, VAR_1 | VAR_3, 1, &VAR_10);

 VAR_7++;
 VAR_8--;

 while (VAR_8) {
  VAR_11 = FUNC_4(VAR_6, VAR_7, VAR_0);

  if (!FUNC_3(VAR_11) && !FUNC_2(VAR_11))
   FUNC_6(VAR_2,
        VAR_4 | VAR_1 | VAR_3,
        1, &VAR_11);
  FUNC_1(VAR_11);
  VAR_7++;
  VAR_8--;
  if (!FUNC_2(VAR_10) && FUNC_3(VAR_10))
   goto out;
 }

 FUNC_7(VAR_10);
out:
 return VAR_10;
}
