
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct f2fs_sb_info {int cp_lock; } ;


 int FUNC_0 (struct f2fs_sb_info*) ;
 int FUNC_1 (int ,unsigned int) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

__attribute__((used)) static inline void FUNC_4(struct f2fs_sb_info *VAR_0, unsigned int VAR_1)
{
 unsigned long VAR_2;

 FUNC_2(&VAR_0->cp_lock, VAR_2);
 FUNC_1(FUNC_0(VAR_0), VAR_1);
 FUNC_3(&VAR_0->cp_lock, VAR_2);
}
