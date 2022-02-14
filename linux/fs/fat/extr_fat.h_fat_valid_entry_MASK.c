
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct msdos_sb_info {int max_cluster; } ;


 int VAR_0 ;

__attribute__((used)) static inline bool FUNC_0(struct msdos_sb_info *VAR_1, int VAR_2)
{
 return VAR_0 <= VAR_2 && VAR_2 < VAR_1->max_cluster;
}
