
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {unsigned long long mft_zone_multiplier; int nr_clusters; scalar_t__ mft_zone_start; scalar_t__ mft_zone_pos; scalar_t__ mft_lcn; int cluster_size; scalar_t__ mft_zone_end; scalar_t__ data1_zone_pos; int mft_data_pos; scalar_t__ data2_zone_pos; } ;
typedef TYPE_1__ ntfs_volume ;
typedef int LCN ;


 int FUNC_0 (char*,unsigned long long) ;

__attribute__((used)) static void FUNC_1(ntfs_volume *VAR_0)
{




 FUNC_0("vol->mft_zone_multiplier = 0x%x",
   VAR_0->mft_zone_multiplier);
}
