
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct f2fs_sb_info {unsigned long* interval_time; long* last_time; } ;


 unsigned long VAR_0 ;
 long VAR_1 ;
 unsigned int FUNC_0 (long) ;

__attribute__((used)) static inline unsigned int FUNC_1(struct f2fs_sb_info *VAR_2,
      int VAR_3)
{
 unsigned long VAR_4 = VAR_2->interval_time[VAR_3] * VAR_0;
 unsigned int VAR_5 = 0;
 long VAR_6;

 VAR_6 = (VAR_2->last_time[VAR_3] + VAR_4) - VAR_1;
 if (VAR_6 > 0)
  VAR_5 = FUNC_0(VAR_6);

 return VAR_5;
}
