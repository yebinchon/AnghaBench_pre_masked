
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct scsi_disk {unsigned int unmap_alignment; unsigned int unmap_granularity; unsigned int provisioning_mode; unsigned int max_unmap_blocks; unsigned int max_ws_blocks; TYPE_3__* device; int physical_block_size; TYPE_1__* disk; } ;
struct TYPE_5__ {unsigned int discard_alignment; int discard_granularity; } ;
struct request_queue {TYPE_2__ limits; } ;
struct TYPE_6__ {unsigned int sector_size; int unmap_limit_for_ws; } ;
struct TYPE_4__ {struct request_queue* queue; } ;


 int VAR_0 ;






 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,struct request_queue*) ;
 int FUNC_1 (int ,struct request_queue*) ;
 int FUNC_2 (struct request_queue*,unsigned int) ;
 int FUNC_3 (int ,unsigned int) ;
 unsigned int FUNC_4 (unsigned int,int ) ;

__attribute__((used)) static void FUNC_5(struct scsi_disk *VAR_3, unsigned int VAR_4)
{
 struct request_queue *VAR_5 = VAR_3->disk->queue;
 unsigned int VAR_6 = VAR_3->device->sector_size;
 unsigned int VAR_7 = 0;

 VAR_5->limits.discard_alignment =
  VAR_3->unmap_alignment * VAR_6;
 VAR_5->limits.discard_granularity =
  FUNC_3(VAR_3->physical_block_size,
      VAR_3->unmap_granularity * VAR_6);
 VAR_3->provisioning_mode = VAR_4;

 switch (VAR_4) {

 case 132:
 case 133:
  FUNC_2(VAR_5, 0);
  FUNC_0(VAR_0, VAR_5);
  return;

 case 131:
  VAR_7 = FUNC_4(VAR_3->max_unmap_blocks,
       (u32)VAR_2);
  break;

 case 129:
  if (VAR_3->device->unmap_limit_for_ws)
   VAR_7 = VAR_3->max_unmap_blocks;
  else
   VAR_7 = VAR_3->max_ws_blocks;

  VAR_7 = FUNC_4(VAR_7, (u32)VAR_2);
  break;

 case 130:
  if (VAR_3->device->unmap_limit_for_ws)
   VAR_7 = VAR_3->max_unmap_blocks;
  else
   VAR_7 = VAR_3->max_ws_blocks;

  VAR_7 = FUNC_4(VAR_7, (u32)VAR_1);
  break;

 case 128:
  VAR_7 = FUNC_4(VAR_3->max_ws_blocks,
       (u32)VAR_1);
  break;
 }

 FUNC_2(VAR_5, VAR_7 * (VAR_6 >> 9));
 FUNC_1(VAR_0, VAR_5);
}
