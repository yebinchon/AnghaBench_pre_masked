
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ext4_sb_info {unsigned long long s_cluster_bits; int s_resv_clusters; int s_es; } ;
typedef size_t ssize_t ;
typedef unsigned long long ext4_fsblk_t ;


 size_t VAR_0 ;
 int FUNC_0 (int *,unsigned long long) ;
 unsigned long long FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,unsigned long long*) ;
 int FUNC_3 (char const*) ;

__attribute__((used)) static ssize_t FUNC_4(struct ext4_sb_info *VAR_1,
       const char *VAR_2, size_t VAR_3)
{
 unsigned long long VAR_4;
 ext4_fsblk_t VAR_5 = (FUNC_1(VAR_1->s_es) >>
     VAR_1->s_cluster_bits);
 int VAR_6;

 VAR_6 = FUNC_2(FUNC_3(VAR_2), 0, &VAR_4);
 if (VAR_6 || VAR_4 >= VAR_5)
  return -VAR_0;

 FUNC_0(&VAR_1->s_resv_clusters, VAR_4);
 return VAR_3;
}
