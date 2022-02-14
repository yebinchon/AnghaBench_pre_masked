
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct scsi_disk {int max_xfer_blocks; int opt_xfer_blocks; unsigned int max_unmap_blocks; int unmap_granularity; int unmap_alignment; scalar_t__ lbpws10; scalar_t__ lbpws; scalar_t__ lbpu; int lbpvpd; int lbpme; scalar_t__ max_ws_blocks; TYPE_1__* disk; TYPE_2__* device; } ;
struct TYPE_4__ {unsigned int sector_size; } ;
struct TYPE_3__ {int queue; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,unsigned int) ;
 unsigned int FUNC_1 (unsigned char*) ;
 int FUNC_2 (unsigned char*) ;
 scalar_t__ FUNC_3 (unsigned char*) ;
 int FUNC_4 (unsigned char*) ;
 unsigned char* FUNC_5 (int const,int ) ;
 scalar_t__ FUNC_6 (TYPE_2__*,int,unsigned char*,int const) ;
 int FUNC_7 (struct scsi_disk*,int ) ;

__attribute__((used)) static void FUNC_8(struct scsi_disk *VAR_5)
{
 unsigned int VAR_6 = VAR_5->device->sector_size;
 const int VAR_7 = 64;
 unsigned char *VAR_8 = FUNC_5(VAR_7, VAR_0);

 if (!VAR_8 ||

     FUNC_6(VAR_5->device, 0xb0, VAR_8, VAR_7))
  goto out;

 FUNC_0(VAR_5->disk->queue,
    FUNC_1(&VAR_8[6]) * VAR_6);

 VAR_5->max_xfer_blocks = FUNC_2(&VAR_8[8]);
 VAR_5->opt_xfer_blocks = FUNC_2(&VAR_8[12]);

 if (VAR_8[3] == 0x3c) {
  unsigned int VAR_9, VAR_10;

  VAR_5->max_ws_blocks = (u32)FUNC_3(&VAR_8[36]);

  if (!VAR_5->lbpme)
   goto out;

  VAR_9 = FUNC_2(&VAR_8[20]);
  VAR_10 = FUNC_2(&VAR_8[24]);

  if (VAR_9 && VAR_10)
   VAR_5->max_unmap_blocks = VAR_9;

  VAR_5->unmap_granularity = FUNC_2(&VAR_8[28]);

  if (VAR_8[32] & 0x80)
   VAR_5->unmap_alignment =
    FUNC_2(&VAR_8[32]) & ~(1 << 31);

  if (!VAR_5->lbpvpd) {

   if (VAR_5->max_unmap_blocks)
    FUNC_7(VAR_5, VAR_2);
   else
    FUNC_7(VAR_5, VAR_4);

  } else {
   if (VAR_5->lbpu && VAR_5->max_unmap_blocks)
    FUNC_7(VAR_5, VAR_2);
   else if (VAR_5->lbpws)
    FUNC_7(VAR_5, VAR_4);
   else if (VAR_5->lbpws10)
    FUNC_7(VAR_5, VAR_3);
   else
    FUNC_7(VAR_5, VAR_1);
  }
 }

 out:
 FUNC_4(VAR_8);
}
