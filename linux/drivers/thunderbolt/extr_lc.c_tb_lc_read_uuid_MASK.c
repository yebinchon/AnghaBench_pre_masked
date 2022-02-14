
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct tb_switch {scalar_t__ cap_lc; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct tb_switch*,int *,int ,scalar_t__,int) ;

int FUNC_1(struct tb_switch *VAR_3, u32 *VAR_4)
{
 if (!VAR_3->cap_lc)
  return -VAR_0;
 return FUNC_0(VAR_3, VAR_4, VAR_1, VAR_3->cap_lc + VAR_2, 4);
}
