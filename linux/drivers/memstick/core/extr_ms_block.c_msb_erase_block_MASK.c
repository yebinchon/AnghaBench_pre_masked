
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_3__ {int cp; scalar_t__ page_address; int block_address; } ;
struct TYPE_4__ {TYPE_1__ param; } ;
struct msb_data {int command_need_oob; int erased_blocks_bitmap; int command_value; TYPE_2__ regs; scalar_t__ read_only; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*,int ) ;
 int VAR_3 ;
 int FUNC_3 (struct msb_data*,int ) ;
 int FUNC_4 (struct msb_data*,int ) ;
 scalar_t__ FUNC_5 (struct msb_data*,int) ;
 int FUNC_6 (struct msb_data*,int ) ;
 int FUNC_7 (char*,int ) ;

__attribute__((used)) static int FUNC_8(struct msb_data *VAR_4, u16 VAR_5)
{
 int VAR_6, VAR_7;
 if (VAR_4->read_only)
  return -VAR_0;

 FUNC_2("erasing pba %d", VAR_5);

 for (VAR_7 = 1; VAR_7 < 3; VAR_7++) {
  VAR_4->regs.param.block_address = FUNC_1(VAR_5);
  VAR_4->regs.param.page_address = 0;
  VAR_4->regs.param.cp = VAR_1;
  VAR_4->command_value = VAR_2;
  VAR_4->command_need_oob = 0;


  VAR_6 = FUNC_6(VAR_4, VAR_3);
  if (!VAR_6 || FUNC_5(VAR_4, 1))
   break;
 }

 if (VAR_6) {
  FUNC_7("erase failed, marking pba %d as bad", VAR_5);
  FUNC_3(VAR_4, VAR_5);
 }

 FUNC_2("erase success, marking pba %d as unused", VAR_5);
 FUNC_4(VAR_4, VAR_5);
 FUNC_0(VAR_5, VAR_4->erased_blocks_bitmap);
 return VAR_6;
}
