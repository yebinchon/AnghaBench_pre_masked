
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct f2fs_sb_info {int iostat_lock; scalar_t__* write_iostat; int iostat_enable; } ;
typedef enum iostat_type { ____Placeholder_iostat_type } iostat_type ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static inline void FUNC_2(struct f2fs_sb_info *VAR_3,
   enum iostat_type VAR_4, unsigned long long VAR_5)
{
 if (!VAR_3->iostat_enable)
  return;
 FUNC_0(&VAR_3->iostat_lock);
 VAR_3->write_iostat[VAR_4] += VAR_5;

 if (VAR_4 == VAR_2 || VAR_4 == VAR_1)
  VAR_3->write_iostat[VAR_0] =
   VAR_3->write_iostat[VAR_2] -
   VAR_3->write_iostat[VAR_1];
 FUNC_1(&VAR_3->iostat_lock);
}
