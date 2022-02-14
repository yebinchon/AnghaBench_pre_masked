
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct ufs_sb_private_info {int s_fmask; int s_fshift; } ;
struct ufs_buffer_head {int fragment; int count; int ** bh; } ;
struct super_block {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct ufs_buffer_head*) ;
 struct ufs_buffer_head* FUNC_2 (int,int ) ;
 int * FUNC_3 (struct super_block*,int) ;

struct ufs_buffer_head * FUNC_4 (struct ufs_sb_private_info * VAR_2,
 struct super_block *VAR_3, u64 VAR_4, u64 VAR_5)
{
 struct ufs_buffer_head * VAR_6;
 unsigned VAR_7, VAR_8 ;
 u64 VAR_9 = 0;
 if (VAR_5 & ~VAR_2->s_fmask)
  return ((void*)0);
 VAR_9 = VAR_5 >> VAR_2->s_fshift;
 if (VAR_9 > VAR_1)
  return ((void*)0);
 VAR_6 = FUNC_2 (sizeof (struct ufs_buffer_head), VAR_0);
 if (!VAR_6)
  return ((void*)0);
 VAR_6->fragment = VAR_4;
 VAR_6->count = VAR_9;
 for (VAR_7 = 0; VAR_7 < VAR_9; VAR_7++)
  if (!(VAR_6->bh[VAR_7] = FUNC_3(VAR_3, VAR_4 + VAR_7)))
   goto failed;
 for (; VAR_7 < VAR_1; VAR_7++)
  VAR_6->bh[VAR_7] = ((void*)0);
 return VAR_6;
failed:
 for (VAR_8 = 0; VAR_8 < VAR_7; VAR_8++)
  FUNC_0 (VAR_6->bh[VAR_8]);
 FUNC_1(VAR_6);
 return ((void*)0);
}
