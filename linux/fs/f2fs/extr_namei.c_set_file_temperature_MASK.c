
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inode {int dummy; } ;
struct f2fs_sb_info {int sb_lock; TYPE_1__* raw_super; } ;
struct TYPE_2__ {int hot_ext_count; int extension_count; int extension_list; } ;


 size_t VAR_0 ;
 int * FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int * VAR_1 ;
 int FUNC_2 (struct inode*) ;
 int FUNC_3 (struct inode*) ;
 scalar_t__ FUNC_4 (unsigned char const*,int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static inline void FUNC_7(struct f2fs_sb_info *VAR_2, struct inode *VAR_3,
  const unsigned char *VAR_4)
{
 FUNC_0 (*VAR_1)[VAR_0] = VAR_2->raw_super->extension_list;
 int VAR_5, VAR_6, VAR_7;

 FUNC_1(&VAR_2->sb_lock);

 VAR_6 = FUNC_5(VAR_2->raw_super->extension_count);
 VAR_7 = VAR_2->raw_super->hot_ext_count;

 for (VAR_5 = 0; VAR_5 < VAR_6 + VAR_7; VAR_5++) {
  if (FUNC_4(VAR_4, VAR_1[VAR_5]))
   break;
 }

 FUNC_6(&VAR_2->sb_lock);

 if (VAR_5 == VAR_6 + VAR_7)
  return;

 if (VAR_5 < VAR_6)
  FUNC_2(VAR_3);
 else
  FUNC_3(VAR_3);
}
