
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct btrfs_device {int dev_stats_ccnt; scalar_t__ dev_stat_values; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (scalar_t__,int ) ;

__attribute__((used)) static inline int FUNC_2(struct btrfs_device *VAR_0,
      int VAR_1)
{
 int VAR_2;

 VAR_2 = FUNC_1(VAR_0->dev_stat_values + VAR_1, 0);







 FUNC_0(&VAR_0->dev_stats_ccnt);
 return VAR_2;
}
