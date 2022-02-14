
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct btrfs_bio {int map_type; scalar_t__ num_stripes; } ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static inline int FUNC_0(struct btrfs_bio *VAR_2)
{
 if (VAR_2->map_type & VAR_0)
  return 2;
 else if (VAR_2->map_type & VAR_1)
  return 3;
 else
  return (int)VAR_2->num_stripes;
}
