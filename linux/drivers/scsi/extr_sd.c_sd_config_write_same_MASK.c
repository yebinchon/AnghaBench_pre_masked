
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct scsi_disk {int max_ws_blocks; unsigned int physical_block_size; TYPE_2__* device; int zeroing_mode; scalar_t__ lbpws10; scalar_t__ lbprz; scalar_t__ lbpws; scalar_t__ ws10; scalar_t__ ws16; TYPE_1__* disk; } ;
struct request_queue {int dummy; } ;
struct TYPE_4__ {unsigned int sector_size; int no_write_same; scalar_t__ no_report_opcodes; } ;
struct TYPE_3__ {struct request_queue* queue; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct request_queue*,unsigned int) ;
 int FUNC_1 (struct request_queue*,unsigned int) ;
 int FUNC_2 (TYPE_2__*,unsigned int) ;
 void* FUNC_3 (int,int ) ;
 int FUNC_4 (int,int ) ;

__attribute__((used)) static void FUNC_5(struct scsi_disk *VAR_6)
{
 struct request_queue *VAR_7 = VAR_6->disk->queue;
 unsigned int VAR_8 = VAR_6->device->sector_size;

 if (VAR_6->device->no_write_same) {
  VAR_6->max_ws_blocks = 0;
  goto out;
 }






 if (VAR_6->max_ws_blocks > VAR_0)
  VAR_6->max_ws_blocks = FUNC_3(VAR_6->max_ws_blocks,
         (u32)VAR_1);
 else if (VAR_6->ws16 || VAR_6->ws10 || VAR_6->device->no_report_opcodes)
  VAR_6->max_ws_blocks = FUNC_3(VAR_6->max_ws_blocks,
         (u32)VAR_0);
 else {
  VAR_6->device->no_write_same = 1;
  VAR_6->max_ws_blocks = 0;
 }

 if (VAR_6->lbprz && VAR_6->lbpws)
  VAR_6->zeroing_mode = VAR_5;
 else if (VAR_6->lbprz && VAR_6->lbpws10)
  VAR_6->zeroing_mode = VAR_4;
 else if (VAR_6->max_ws_blocks)
  VAR_6->zeroing_mode = VAR_3;
 else
  VAR_6->zeroing_mode = VAR_2;

 if (VAR_6->max_ws_blocks &&
     VAR_6->physical_block_size > VAR_8) {
  VAR_6->max_ws_blocks =
   FUNC_4(VAR_6->max_ws_blocks,
       FUNC_2(VAR_6->device,
          VAR_6->physical_block_size));
 }

out:
 FUNC_0(VAR_7, VAR_6->max_ws_blocks *
      (VAR_8 >> 9));
 FUNC_1(VAR_7, VAR_6->max_ws_blocks *
      (VAR_8 >> 9));
}
