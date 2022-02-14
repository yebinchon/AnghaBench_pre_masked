
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct btrfs_device {scalar_t__ dev_stat_values; } ;


 int FUNC_0 (scalar_t__) ;

__attribute__((used)) static inline int FUNC_1(struct btrfs_device *VAR_0,
          int VAR_1)
{
 return FUNC_0(VAR_0->dev_stat_values + VAR_1);
}
