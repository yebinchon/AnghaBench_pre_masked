
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_block {int dummy; } ;
struct quad_buffer_head {int dummy; } ;
typedef int secno ;


 int VAR_0 ;
 unsigned int FUNC_0 (unsigned long*,int) ;
 int FUNC_1 (struct quad_buffer_head*) ;
 unsigned long* FUNC_2 (struct super_block*,int ,struct quad_buffer_head*,int ) ;

__attribute__((used)) static unsigned FUNC_3(struct super_block *VAR_1, secno VAR_2)
{
 struct quad_buffer_head VAR_3;
 unsigned long *VAR_4;
 unsigned VAR_5;

 VAR_4 = FUNC_2(VAR_1, VAR_2, &VAR_3, 0);
 if (!VAR_4)
  return (unsigned)-1;
 VAR_5 = FUNC_0(VAR_4, 2048 * VAR_0);
 FUNC_1(&VAR_3);
 return VAR_5;
}
