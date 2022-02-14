
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct gfs2_sbd {scalar_t__ sd_jindex; scalar_t__ sd_rindex; } ;
struct TYPE_2__ {struct gfs2_sbd* ln_sbd; } ;
struct gfs2_glock {scalar_t__ gl_object; TYPE_1__ gl_name; } ;



__attribute__((used)) static int FUNC_0(const struct gfs2_glock *VAR_0)
{
 struct gfs2_sbd *VAR_1 = VAR_0->gl_name.ln_sbd;

 if (VAR_1->sd_jindex == VAR_0->gl_object || VAR_1->sd_rindex == VAR_0->gl_object)
  return 0;

 return 1;
}
