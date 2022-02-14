
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct f2fs_sb_info {int nm_info; } ;
struct f2fs_nm_info {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct f2fs_sb_info*,int,int) ;
 int FUNC_1 (struct f2fs_sb_info*,int,int ) ;
 int FUNC_2 (struct f2fs_sb_info*) ;
 int FUNC_3 (struct f2fs_sb_info*) ;
 int FUNC_4 (struct f2fs_sb_info*) ;

int FUNC_5(struct f2fs_sb_info *VAR_2)
{
 int VAR_3;

 VAR_2->nm_info = FUNC_1(VAR_2, sizeof(struct f2fs_nm_info),
       VAR_1);
 if (!VAR_2->nm_info)
  return -VAR_0;

 VAR_3 = FUNC_3(VAR_2);
 if (VAR_3)
  return VAR_3;

 VAR_3 = FUNC_2(VAR_2);
 if (VAR_3)
  return VAR_3;


 FUNC_4(VAR_2);

 return FUNC_0(VAR_2, 1, 1);
}
