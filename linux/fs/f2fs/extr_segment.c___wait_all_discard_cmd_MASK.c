
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct f2fs_sb_info {int dummy; } ;
struct discard_policy {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct f2fs_sb_info*,struct discard_policy*,int ,int) ;
 unsigned int FUNC_1 (struct f2fs_sb_info*,struct discard_policy*,int ,int ) ;

__attribute__((used)) static unsigned int FUNC_2(struct f2fs_sb_info *VAR_3,
      struct discard_policy *VAR_4)
{
 struct discard_policy VAR_5;
 unsigned int VAR_6;

 if (VAR_4)
  return FUNC_1(VAR_3, VAR_4, 0, VAR_2);


 FUNC_0(VAR_3, &VAR_5, VAR_0, 1);
 VAR_6 = FUNC_1(VAR_3, &VAR_5, 0, VAR_2);
 FUNC_0(VAR_3, &VAR_5, VAR_1, 1);
 VAR_6 += FUNC_1(VAR_3, &VAR_5, 0, VAR_2);

 return VAR_6;
}
