
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct f2fs_sb_info {unsigned long* last_time; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 unsigned long VAR_3 ;

__attribute__((used)) static inline void FUNC_0(struct f2fs_sb_info *VAR_4, int VAR_5)
{
 unsigned long VAR_6 = VAR_3;

 VAR_4->last_time[VAR_5] = VAR_6;


 if (VAR_5 == VAR_2) {
  VAR_4->last_time[VAR_0] = VAR_6;
  VAR_4->last_time[VAR_1] = VAR_6;
 }
}
