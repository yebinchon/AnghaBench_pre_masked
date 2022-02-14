
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct gfs2_trans {int dummy; } ;
struct gfs2_sbd {int dummy; } ;
struct TYPE_2__ {int (* lo_after_commit ) (struct gfs2_sbd*,struct gfs2_trans*) ;} ;


 TYPE_1__** VAR_0 ;
 int FUNC_0 (struct gfs2_sbd*,struct gfs2_trans*) ;

__attribute__((used)) static inline void FUNC_1(struct gfs2_sbd *VAR_1,
         struct gfs2_trans *VAR_2)
{
 int VAR_3;
 for (VAR_3 = 0; VAR_0[VAR_3]; VAR_3++)
  if (VAR_0[VAR_3]->lo_after_commit)
   VAR_0[VAR_3]->lo_after_commit(VAR_1, VAR_2);
}
