
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u32 ;
typedef scalar_t__ u16 ;
struct scatterlist {scalar_t__ length; } ;
struct TYPE_5__ {int management_flag; int overwrite_flag; void* logical_address; } ;
struct TYPE_4__ {void* block_address; scalar_t__ page_address; int cp; } ;
struct TYPE_6__ {TYPE_2__ extra_data; TYPE_1__ param; } ;
struct msb_data {scalar_t__ page_size; scalar_t__ block_count; scalar_t__ logical_block_count; scalar_t__* boot_block_locations; int current_sg_offset; int erased_blocks_bitmap; scalar_t__ current_page; struct scatterlist* current_sg; TYPE_3__ regs; scalar_t__ read_only; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 void* FUNC_1 (scalar_t__) ;
 int VAR_4 ;
 int FUNC_2 (struct msb_data*,scalar_t__) ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 scalar_t__ FUNC_5 (struct msb_data*,int) ;
 int FUNC_6 (struct msb_data*,int ) ;
 int FUNC_7 (struct msb_data*,scalar_t__,struct scatterlist*,int) ;
 int FUNC_8 (char*,...) ;
 int FUNC_9 (scalar_t__,int ) ;
 scalar_t__ VAR_5 ;

__attribute__((used)) static int FUNC_10(struct msb_data *VAR_6,
   u16 VAR_7, u32 VAR_8, struct scatterlist *VAR_9, int VAR_10)
{
 int VAR_11, VAR_12 = 1;
 FUNC_0(VAR_9->length < VAR_6->page_size);

 if (VAR_6->read_only)
  return -VAR_1;

 if (VAR_7 == VAR_3) {
  FUNC_8(
   "BUG: write: attempt to write MS_BLOCK_INVALID block");
  return -VAR_0;
 }

 if (VAR_7 >= VAR_6->block_count || VAR_8 >= VAR_6->logical_block_count) {
  FUNC_8(
  "BUG: write: attempt to write beyond the end of device");
  return -VAR_0;
 }

 if (FUNC_3(VAR_8) != FUNC_4(VAR_7)) {
  FUNC_8("BUG: write: lba zone mismatch");
  return -VAR_0;
 }

 if (VAR_7 == VAR_6->boot_block_locations[0] ||
  VAR_7 == VAR_6->boot_block_locations[1]) {
  FUNC_8("BUG: write: attempt to write to boot blocks!");
  return -VAR_0;
 }

 while (1) {

  if (VAR_6->read_only)
   return -VAR_1;

  VAR_6->regs.param.cp = VAR_2;
  VAR_6->regs.param.page_address = 0;
  VAR_6->regs.param.block_address = FUNC_1(VAR_7);

  VAR_6->regs.extra_data.management_flag = 0xFF;
  VAR_6->regs.extra_data.overwrite_flag = 0xF8;
  VAR_6->regs.extra_data.logical_address = FUNC_1(VAR_8);

  VAR_6->current_sg = VAR_9;
  VAR_6->current_sg_offset = VAR_10;
  VAR_6->current_page = 0;

  VAR_11 = FUNC_6(VAR_6, VAR_4);







  if (!VAR_11 && (VAR_5 ||
    !FUNC_9(VAR_7, VAR_6->erased_blocks_bitmap)))
   VAR_11 = FUNC_7(VAR_6, VAR_7, VAR_9, VAR_10);

  if (!VAR_11)
   break;

  if (VAR_12 > 1 || FUNC_5(VAR_6, 1))
   break;

  FUNC_8("write failed, trying to erase the pba %d", VAR_7);
  VAR_11 = FUNC_2(VAR_6, VAR_7);
  if (VAR_11)
   break;

  VAR_12++;
 }
 return VAR_11;
}
