
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct ovl_priv_data {scalar_t__ fifo_low; scalar_t__ fifo_high; int extra_info_dirty; } ;
struct omap_overlay {int dummy; } ;


 struct ovl_priv_data* FUNC_0 (struct omap_overlay*) ;

__attribute__((used)) static void FUNC_1(struct omap_overlay *VAR_0,
  u32 VAR_1, u32 VAR_2)
{
 struct ovl_priv_data *VAR_3 = FUNC_0(VAR_0);

 if (VAR_3->fifo_low == VAR_1 && VAR_3->fifo_high == VAR_2)
  return;

 VAR_3->fifo_low = VAR_1;
 VAR_3->fifo_high = VAR_2;
 VAR_3->extra_info_dirty = 1;
}
