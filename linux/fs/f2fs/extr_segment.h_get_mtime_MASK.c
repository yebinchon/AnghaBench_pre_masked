
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ time64_t ;
struct sit_info {scalar_t__ mounted_time; scalar_t__ elapsed_time; } ;
struct f2fs_sb_info {int dummy; } ;


 struct sit_info* FUNC_0 (struct f2fs_sb_info*) ;
 scalar_t__ FUNC_1 () ;

__attribute__((used)) static inline unsigned long long FUNC_2(struct f2fs_sb_info *VAR_0,
      bool VAR_1)
{
 struct sit_info *VAR_2 = FUNC_0(VAR_0);
 time64_t VAR_3, VAR_4 = FUNC_1();

 if (VAR_4 >= VAR_2->mounted_time)
  return VAR_2->elapsed_time + VAR_4 - VAR_2->mounted_time;


 if (!VAR_1) {
  VAR_3 = VAR_2->mounted_time - VAR_4;
  if (VAR_2->elapsed_time >= VAR_3)
   return VAR_2->elapsed_time - VAR_3;
  return 0;
 }
 return VAR_2->elapsed_time;
}
