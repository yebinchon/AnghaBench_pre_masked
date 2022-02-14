
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct gfs2_rgrpd {int rd_flags; TYPE_1__* rd_rgl; int rd_igeneration; void* rd_dinodes; void* rd_free; void* rd_free_clone; } ;
struct TYPE_2__ {scalar_t__ rl_magic; scalar_t__ rl_unlinked; int rl_igeneration; int rl_dinodes; int rl_free; int rl_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 void* FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (struct gfs2_rgrpd*) ;

__attribute__((used)) static int FUNC_4(struct gfs2_rgrpd *VAR_4)
{
 u32 VAR_5;

 if (VAR_4->rd_flags & VAR_3)
  return 0;

 if (FUNC_2(VAR_0) != VAR_4->rd_rgl->rl_magic)
  return FUNC_3(VAR_4);

 VAR_5 = FUNC_0(VAR_4->rd_rgl->rl_flags);
 VAR_5 &= ~VAR_2;
 VAR_4->rd_flags &= VAR_2;
 VAR_4->rd_flags |= (VAR_5 | VAR_1);
 if (VAR_4->rd_rgl->rl_unlinked == 0)
  VAR_4->rd_flags &= ~VAR_1;
 VAR_4->rd_free = FUNC_0(VAR_4->rd_rgl->rl_free);
 VAR_4->rd_free_clone = VAR_4->rd_free;
 VAR_4->rd_dinodes = FUNC_0(VAR_4->rd_rgl->rl_dinodes);
 VAR_4->rd_igeneration = FUNC_1(VAR_4->rd_rgl->rl_igeneration);
 return 0;
}
