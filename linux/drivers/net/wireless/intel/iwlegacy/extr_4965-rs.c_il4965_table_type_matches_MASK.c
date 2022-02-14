
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct il_scale_tbl_info {scalar_t__ lq_type; scalar_t__ ant_type; scalar_t__ is_SGI; } ;



__attribute__((used)) static bool
FUNC_0(struct il_scale_tbl_info *VAR_0,
     struct il_scale_tbl_info *VAR_1)
{
 return (VAR_0->lq_type == VAR_1->lq_type && VAR_0->ant_type == VAR_1->ant_type &&
  VAR_0->is_SGI == VAR_1->is_SGI);
}
