
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gfs2_statfs_change_host {void* sc_dinodes; void* sc_free; void* sc_total; } ;
struct gfs2_statfs_change {int sc_dinodes; int sc_free; int sc_total; } ;


 void* FUNC_0 (int ) ;

void FUNC_1(struct gfs2_statfs_change_host *VAR_0, const void *VAR_1)
{
 const struct gfs2_statfs_change *VAR_2 = VAR_1;

 VAR_0->sc_total = FUNC_0(VAR_2->sc_total);
 VAR_0->sc_free = FUNC_0(VAR_2->sc_free);
 VAR_0->sc_dinodes = FUNC_0(VAR_2->sc_dinodes);
}
