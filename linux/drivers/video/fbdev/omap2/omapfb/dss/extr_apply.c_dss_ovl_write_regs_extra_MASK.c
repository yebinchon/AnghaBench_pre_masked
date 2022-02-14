
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ovl_priv_data {int extra_info_dirty; int shadow_extra_info_dirty; int fifo_high; int fifo_low; int enabled; } ;
struct omap_overlay {int manager; int id; } ;
struct mgr_priv_data {scalar_t__ updating; } ;


 int FUNC_0 (char*,int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ,int ) ;
 struct mgr_priv_data* FUNC_3 (int ) ;
 struct ovl_priv_data* FUNC_4 (struct omap_overlay*) ;

__attribute__((used)) static void FUNC_5(struct omap_overlay *VAR_0)
{
 struct ovl_priv_data *VAR_1 = FUNC_4(VAR_0);
 struct mgr_priv_data *VAR_2;

 FUNC_0("writing ovl %d regs extra\n", VAR_0->id);

 if (!VAR_1->extra_info_dirty)
  return;




 FUNC_1(VAR_0->id, VAR_1->enabled);
 FUNC_2(VAR_0->id, VAR_1->fifo_low, VAR_1->fifo_high);

 VAR_2 = FUNC_3(VAR_0->manager);

 VAR_1->extra_info_dirty = 0;
 if (VAR_2->updating)
  VAR_1->shadow_extra_info_dirty = 1;
}
