
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u16 ;
struct ms_extra_data_register {int dummy; } ;
struct TYPE_4__ {int cp; scalar_t__ page_address; int block_address; } ;
struct TYPE_3__ {struct ms_extra_data_register extra_data; TYPE_2__ param; } ;
struct msb_data {scalar_t__ block_count; TYPE_1__ regs; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (scalar_t__) ;
 int VAR_3 ;
 int FUNC_2 (struct msb_data*,int ) ;
 int FUNC_3 (char*,scalar_t__) ;
 int FUNC_4 (char*,scalar_t__,scalar_t__) ;

__attribute__((used)) static int FUNC_5(struct msb_data *VAR_4, u16 VAR_5, u16 VAR_6,
 struct ms_extra_data_register *VAR_7)
{
 int VAR_8;

 FUNC_0(!VAR_7);
 VAR_4->regs.param.block_address = FUNC_1(VAR_5);
 VAR_4->regs.param.page_address = VAR_6;
 VAR_4->regs.param.cp = VAR_2;

 if (VAR_5 > VAR_4->block_count) {
  FUNC_3("BUG: attempt to read beyond the end of card at pba %d", VAR_5);
  return -VAR_0;
 }

 VAR_8 = FUNC_2(VAR_4, VAR_3);
 *VAR_7 = VAR_4->regs.extra_data;

 if (VAR_8 == -VAR_1) {
  FUNC_4("correctable error on pba %d, page %d",
   VAR_5, VAR_6);
  return 0;
 }

 return VAR_8;
}
