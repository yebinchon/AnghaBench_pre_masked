
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ocfs2_extent_map_item {unsigned int ei_cpos; unsigned int ei_clusters; } ;



__attribute__((used)) static int FUNC_0(struct ocfs2_extent_map_item *VAR_0,
     struct ocfs2_extent_map_item *VAR_1)
{
 unsigned int VAR_2, VAR_3;




 VAR_2 = VAR_0->ei_cpos + VAR_0->ei_clusters;
 if (VAR_1->ei_cpos >= VAR_0->ei_cpos && VAR_1->ei_cpos < VAR_2)
  return 1;




 VAR_3 = VAR_1->ei_cpos + VAR_1->ei_clusters;
 if (VAR_3 > VAR_0->ei_cpos && VAR_3 <= VAR_2)
  return 1;

 return 0;
}
