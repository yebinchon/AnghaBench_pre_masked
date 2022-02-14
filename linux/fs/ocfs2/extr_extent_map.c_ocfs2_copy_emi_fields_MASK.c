
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ocfs2_extent_map_item {int ei_flags; int ei_clusters; int ei_phys; int ei_cpos; } ;



__attribute__((used)) static void FUNC_0(struct ocfs2_extent_map_item *VAR_0,
      struct ocfs2_extent_map_item *VAR_1)
{
 VAR_0->ei_cpos = VAR_1->ei_cpos;
 VAR_0->ei_phys = VAR_1->ei_phys;
 VAR_0->ei_clusters = VAR_1->ei_clusters;
 VAR_0->ei_flags = VAR_1->ei_flags;
}
