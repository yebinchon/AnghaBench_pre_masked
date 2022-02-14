
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct vol_info_t {scalar_t__ NumClusters; scalar_t__ UsedClusters; scalar_t__ FreeClusters; int ClusterSize; int FatType; } ;
struct super_block {int dummy; } ;
struct fs_info_t {scalar_t__ used_clusters; scalar_t__ num_clusters; int v_sem; scalar_t__ dev_ejected; int cluster_size; int vol_type; TYPE_1__* fs_func; } ;
struct TYPE_4__ {struct fs_info_t fs_info; } ;
struct TYPE_3__ {scalar_t__ (* count_used_clusters ) (struct super_block*) ;} ;


 TYPE_2__* FUNC_0 (struct super_block*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (struct super_block*) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(struct super_block *VAR_4, struct vol_info_t *VAR_5)
{
 int VAR_6 = VAR_2;
 struct fs_info_t *VAR_7 = &(FUNC_0(VAR_4)->fs_info);


 if (!VAR_5)
  return VAR_0;


 FUNC_1(&VAR_7->v_sem);

 if (VAR_7->used_clusters == VAR_3)
  VAR_7->used_clusters = VAR_7->fs_func->count_used_clusters(VAR_4);

 VAR_5->FatType = VAR_7->vol_type;
 VAR_5->ClusterSize = VAR_7->cluster_size;
 VAR_5->NumClusters = VAR_7->num_clusters - 2;
 VAR_5->UsedClusters = VAR_7->used_clusters;
 VAR_5->FreeClusters = VAR_5->NumClusters - VAR_5->UsedClusters;

 if (VAR_7->dev_ejected)
  VAR_6 = VAR_1;


 FUNC_3(&VAR_7->v_sem);

 return VAR_6;
}
