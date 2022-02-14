
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct address_space {int dummy; } ;
struct gfs2_sbd {struct address_space sd_aspace; } ;
struct TYPE_2__ {struct gfs2_sbd* ln_sbd; } ;
struct gfs2_glock {TYPE_1__ gl_name; } ;


 int FUNC_0 (struct address_space*) ;
 int FUNC_1 (struct address_space*) ;
 struct address_space* FUNC_2 (struct gfs2_glock*) ;
 int FUNC_3 (struct gfs2_sbd*) ;

__attribute__((used)) static void FUNC_4(struct gfs2_glock *VAR_0)
{
 struct address_space *VAR_1 = FUNC_2(VAR_0);
 struct gfs2_sbd *VAR_2 = VAR_0->gl_name.ln_sbd;
 int VAR_3;

 if (VAR_1 == ((void*)0))
  VAR_1 = &VAR_2->sd_aspace;

 FUNC_1(VAR_1);
 VAR_3 = FUNC_0(VAR_1);

 if (VAR_3)
  FUNC_3(VAR_0->gl_name.ln_sbd);
}
