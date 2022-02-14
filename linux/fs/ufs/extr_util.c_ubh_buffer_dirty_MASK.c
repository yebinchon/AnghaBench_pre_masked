
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ufs_buffer_head {unsigned int count; int * bh; } ;


 unsigned int FUNC_0 (int ) ;

int FUNC_1 (struct ufs_buffer_head * VAR_0)
{
 unsigned VAR_1;
 unsigned VAR_2 = 0;
 if (!VAR_0)
  return 0;
 for ( VAR_1 = 0; VAR_1 < VAR_0->count; VAR_1++ )
  VAR_2 |= FUNC_0(VAR_0->bh[VAR_1]);
 return VAR_2;
}
