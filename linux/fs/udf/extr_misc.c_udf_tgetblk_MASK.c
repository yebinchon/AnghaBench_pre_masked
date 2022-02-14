
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int udf_pblk_t ;
struct super_block {int dummy; } ;
struct buffer_head {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct super_block*,int ) ;
 struct buffer_head* FUNC_1 (struct super_block*,int ) ;
 int FUNC_2 (int ) ;

struct buffer_head *FUNC_3(struct super_block *VAR_1, udf_pblk_t VAR_2)
{
 if (FUNC_0(VAR_1, VAR_0))
  return FUNC_1(VAR_1, FUNC_2(VAR_2));
 else
  return FUNC_1(VAR_1, VAR_2);
}
