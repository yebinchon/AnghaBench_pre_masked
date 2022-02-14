
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
struct TYPE_3__ {int sb_bsize; } ;
struct gfs2_sbd {TYPE_1__ sd_sb; } ;
struct gfs2_meta_header {int dummy; } ;
struct gfs2_log_descriptor {int dummy; } ;
struct TYPE_4__ {struct gfs2_sbd* ln_sbd; } ;
struct gfs2_glock {int gl_ail_count; TYPE_2__ gl_name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct gfs2_glock*,int,unsigned int) ;
 unsigned int FUNC_1 (int *) ;
 int FUNC_2 (struct gfs2_sbd*,int *,int) ;
 int FUNC_3 (struct gfs2_sbd*,int ,unsigned int) ;
 int FUNC_4 (struct gfs2_sbd*) ;

void FUNC_5(struct gfs2_glock *VAR_2, bool VAR_3)
{
 struct gfs2_sbd *VAR_4 = VAR_2->gl_name.ln_sbd;
 unsigned int VAR_5 = FUNC_1(&VAR_2->gl_ail_count);
 unsigned int VAR_6 = (VAR_4->sd_sb.sb_bsize - sizeof(struct gfs2_log_descriptor)) / sizeof(u64);
 int VAR_7;

 if (!VAR_5)
  return;

 while (VAR_5 > VAR_6)
  VAR_6 += (VAR_4->sd_sb.sb_bsize - sizeof(struct gfs2_meta_header)) / sizeof(u64);

 VAR_7 = FUNC_3(VAR_4, 0, VAR_6);
 if (VAR_7)
  return;
 FUNC_0(VAR_2, VAR_3, VAR_6);
 FUNC_4(VAR_4);
 FUNC_2(VAR_4, ((void*)0), VAR_1 |
         VAR_0);
}
