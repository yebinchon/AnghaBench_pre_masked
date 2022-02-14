
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct f2fs_sb_info {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct f2fs_sb_info*) ;
 int FUNC_1 (struct f2fs_sb_info*,int ) ;
 scalar_t__ FUNC_2 (struct f2fs_sb_info*) ;
 int FUNC_3 (struct f2fs_sb_info*,int ) ;
 scalar_t__ FUNC_4 (struct f2fs_sb_info*) ;
 scalar_t__ FUNC_5 (int ) ;

__attribute__((used)) static inline bool FUNC_6(struct f2fs_sb_info *VAR_4,
     int VAR_5, int VAR_6)
{
 int VAR_7 = FUNC_1(VAR_4, VAR_2);
 int VAR_8 = FUNC_1(VAR_4, VAR_0);
 int VAR_9 = FUNC_1(VAR_4, VAR_1);

 if (FUNC_5(FUNC_3(VAR_4, VAR_3)))
  return 0;

 if (FUNC_0(VAR_4) + VAR_5 == FUNC_4(VAR_4) + VAR_6 &&
   FUNC_2(VAR_4))
  return 0;
 return (FUNC_0(VAR_4) + VAR_5) <=
  (VAR_7 + 2 * VAR_8 + VAR_9 +
  FUNC_4(VAR_4) + VAR_6);
}
