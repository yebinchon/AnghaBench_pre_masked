
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef void* u8 ;
typedef int u16 ;
struct TYPE_4__ {void* overwrite_flag; } ;
struct TYPE_6__ {int cp; void* page_address; int block_address; } ;
struct TYPE_5__ {TYPE_1__ extra_data; TYPE_3__ param; } ;
struct msb_data {int command_need_oob; int command_value; TYPE_2__ regs; scalar_t__ read_only; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (char*,void*,int ,void*) ;
 int VAR_3 ;
 int FUNC_2 (struct msb_data*,int ) ;

__attribute__((used)) static int FUNC_3(struct msb_data *VAR_4,
      u16 VAR_5, u8 VAR_6, u8 VAR_7)
{
 if (VAR_4->read_only)
  return -VAR_0;

 VAR_4->regs.param.block_address = FUNC_0(VAR_5);
 VAR_4->regs.param.page_address = VAR_6;
 VAR_4->regs.param.cp = VAR_1;
 VAR_4->regs.extra_data.overwrite_flag = VAR_7;
 VAR_4->command_value = VAR_2;
 VAR_4->command_need_oob = 1;

 FUNC_1("changing overwrite flag to %02x for sector %d, page %d",
       VAR_7, VAR_5, VAR_6);
 return FUNC_2(VAR_4, VAR_3);
}
