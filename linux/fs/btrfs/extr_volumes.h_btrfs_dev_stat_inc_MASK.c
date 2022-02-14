
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct btrfs_device {int dev_stats_ccnt; int * dev_stat_values; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 () ;

__attribute__((used)) static inline void FUNC_2(struct btrfs_device *VAR_0,
          int VAR_1)
{
 FUNC_0(VAR_0->dev_stat_values + VAR_1);






 FUNC_1();
 FUNC_0(&VAR_0->dev_stats_ccnt);
}
