
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct f2fs_sb_info {int quota_sem; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct f2fs_sb_info*,int ) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (struct f2fs_sb_info*,int ) ;
 int FUNC_3 (struct f2fs_sb_info*) ;
 scalar_t__ FUNC_4 (struct f2fs_sb_info*,int ) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static bool FUNC_6(struct f2fs_sb_info *VAR_4)
{
 bool VAR_5 = 0;

 if (!FUNC_3(VAR_4))
  return 0;

 FUNC_1(&VAR_4->quota_sem);
 if (FUNC_4(VAR_4, VAR_3)) {
  VAR_5 = 0;
 } else if (FUNC_4(VAR_4, VAR_2)) {
  VAR_5 = 0;
 } else if (FUNC_4(VAR_4, VAR_1)) {
  FUNC_0(VAR_4, VAR_1);
  VAR_5 = 1;
 } else if (FUNC_2(VAR_4, VAR_0)) {
  VAR_5 = 1;
 }
 FUNC_5(&VAR_4->quota_sem);
 return VAR_5;
}
