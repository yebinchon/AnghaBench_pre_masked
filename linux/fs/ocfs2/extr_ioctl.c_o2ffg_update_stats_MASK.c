
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ocfs2_info_freefrag_stats {unsigned int ffs_max; unsigned int ffs_min; unsigned int ffs_avg; int ffs_free_chunks_real; } ;



__attribute__((used)) static void FUNC_0(struct ocfs2_info_freefrag_stats *VAR_0,
          unsigned int VAR_1)
{
 if (VAR_1 > VAR_0->ffs_max)
  VAR_0->ffs_max = VAR_1;

 if (VAR_1 < VAR_0->ffs_min)
  VAR_0->ffs_min = VAR_1;

 VAR_0->ffs_avg += VAR_1;
 VAR_0->ffs_free_chunks_real++;
}
