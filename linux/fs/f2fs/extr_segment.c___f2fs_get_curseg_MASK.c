
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct f2fs_sb_info {int dummy; } ;
struct TYPE_2__ {unsigned int segno; } ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (struct f2fs_sb_info*,int) ;
 int VAR_1 ;

__attribute__((used)) static inline int FUNC_1(struct f2fs_sb_info *VAR_2,
      unsigned int VAR_3)
{
 int VAR_4;

 for (VAR_4 = VAR_0; VAR_4 < VAR_1; VAR_4++) {
  if (FUNC_0(VAR_2, VAR_4)->segno == VAR_3)
   break;
 }
 return VAR_4;
}
