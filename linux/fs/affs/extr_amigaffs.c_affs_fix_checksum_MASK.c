
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct super_block {int s_blocksize; } ;
struct buffer_head {scalar_t__ b_data; } ;
typedef scalar_t__ __be32 ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (int ) ;

void
FUNC_2(struct super_block *VAR_0, struct buffer_head *VAR_1)
{
 int VAR_2 = VAR_0->s_blocksize / sizeof(__be32);
 __be32 *VAR_3 = (__be32 *)VAR_1->b_data;
 u32 VAR_4;
 __be32 *VAR_5;

 VAR_5 = VAR_3 + 5;
 *VAR_5 = 0;
 for (VAR_4 = 0; VAR_2 > 0; VAR_3++, VAR_2--)
  VAR_4 += FUNC_0(*VAR_3);
 *VAR_5 = FUNC_1(-VAR_4);
}
