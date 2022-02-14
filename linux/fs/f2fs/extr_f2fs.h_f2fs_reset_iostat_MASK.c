
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct f2fs_sb_info {int iostat_lock; scalar_t__* write_iostat; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static inline void FUNC_2(struct f2fs_sb_info *VAR_1)
{
 int VAR_2;

 FUNC_0(&VAR_1->iostat_lock);
 for (VAR_2 = 0; VAR_2 < VAR_0; VAR_2++)
  VAR_1->write_iostat[VAR_2] = 0;
 FUNC_1(&VAR_1->iostat_lock);
}
