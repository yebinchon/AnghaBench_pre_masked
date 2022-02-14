
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct f2fs_sb_info {int dummy; } ;
typedef scalar_t__ block_t ;


 scalar_t__ FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct f2fs_sb_info*,int,scalar_t__) ;

__attribute__((used)) static void FUNC_2(struct f2fs_sb_info *VAR_2,
     block_t VAR_3, int VAR_4)
{
 int VAR_5, VAR_6;
 if (FUNC_0(VAR_4))
  VAR_6 = VAR_4 + VAR_0;
 else
  VAR_6 = VAR_4 + VAR_1;

 for (VAR_5 = VAR_4; VAR_5 < VAR_6; VAR_5++)
  FUNC_1(VAR_2, VAR_5, VAR_3 + (VAR_5 - VAR_4));
}
