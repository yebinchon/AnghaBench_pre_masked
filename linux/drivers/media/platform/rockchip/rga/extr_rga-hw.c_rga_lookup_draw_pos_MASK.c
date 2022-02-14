
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u32 ;
struct rga_addr_offset {int dummy; } ;
struct rga_corners_addr_offset {struct rga_addr_offset right_bottom; struct rga_addr_offset right_top; struct rga_addr_offset left_bottom; struct rga_addr_offset left_top; } ;
typedef enum e_rga_start_pos { ____Placeholder_e_rga_start_pos } e_rga_start_pos ;







__attribute__((used)) static struct rga_addr_offset *FUNC_0(struct
  rga_corners_addr_offset
  * VAR_0, u32 VAR_1,
  u32 VAR_2)
{
 static enum e_rga_start_pos VAR_3[4][4] = {
  {
   130, 128, 131, 129,
  },
  {
   128, 130, 129, 131,
  },
  {
   129, 131, 128, 130,
  },
  {
   131, 129, 130, 128,
  },
 };

 if (!VAR_0)
  return ((void*)0);

 switch (VAR_3[VAR_1][VAR_2]) {
 case 130:
  return &VAR_0->left_top;
 case 131:
  return &VAR_0->left_bottom;
 case 128:
  return &VAR_0->right_top;
 case 129:
  return &VAR_0->right_bottom;
 }

 return ((void*)0);
}
