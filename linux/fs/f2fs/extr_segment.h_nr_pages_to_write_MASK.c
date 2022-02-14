
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct writeback_control {scalar_t__ sync_mode; long nr_to_write; } ;
struct f2fs_sb_info {int dummy; } ;


 long VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static inline long FUNC_0(struct f2fs_sb_info *VAR_3, int VAR_4,
     struct writeback_control *VAR_5)
{
 long VAR_6, VAR_7;

 if (VAR_5->sync_mode != VAR_2)
  return 0;

 VAR_6 = VAR_5->nr_to_write;
 VAR_7 = VAR_0;
 if (VAR_4 == VAR_1)
  VAR_7 <<= 1;

 VAR_5->nr_to_write = VAR_7;
 return VAR_7 - VAR_6;
}
