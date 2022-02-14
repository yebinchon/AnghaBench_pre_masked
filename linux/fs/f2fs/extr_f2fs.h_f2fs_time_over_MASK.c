
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct f2fs_sb_info {unsigned long* interval_time; scalar_t__* last_time; } ;


 unsigned long VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,scalar_t__) ;

__attribute__((used)) static inline bool FUNC_1(struct f2fs_sb_info *VAR_2, int VAR_3)
{
 unsigned long VAR_4 = VAR_2->interval_time[VAR_3] * VAR_0;

 return FUNC_0(VAR_1, VAR_2->last_time[VAR_3] + VAR_4);
}
