
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct f2fs_sb_info {int sb; int gc_mutex; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct f2fs_sb_info*,int ) ;
 int FUNC_1 (struct f2fs_sb_info*) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct f2fs_sb_info*,int ) ;

__attribute__((used)) static void FUNC_6(struct f2fs_sb_info *VAR_2)
{
 FUNC_3(&VAR_2->gc_mutex);
 FUNC_1(VAR_2);

 FUNC_0(VAR_2, VAR_0);
 FUNC_5(VAR_2, VAR_1);
 FUNC_4(&VAR_2->gc_mutex);

 FUNC_2(VAR_2->sb, 1);
}
