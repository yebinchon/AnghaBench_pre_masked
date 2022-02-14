
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int dma_handle; } ;
struct scsi_cmnd {TYPE_2__ SCp; int sense_buffer; TYPE_1__* device; } ;
struct asc_board {int dev; } ;
typedef int __le32 ;
struct TYPE_3__ {int host; } ;


 int FUNC_0 (int,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,int ,int ) ;
 scalar_t__ FUNC_3 (int ,int ) ;
 struct asc_board* FUNC_4 (int ) ;

__attribute__((used)) static __le32 FUNC_5(struct scsi_cmnd *VAR_2)
{
 struct asc_board *VAR_3 = FUNC_4(VAR_2->device->host);

 VAR_2->SCp.dma_handle = FUNC_2(VAR_3->dev, VAR_2->sense_buffer,
          VAR_1,
          VAR_0);
 if (FUNC_3(VAR_3->dev, VAR_2->SCp.dma_handle)) {
  FUNC_0(1, "failed to map sense buffer\n");
  return 0;
 }
 return FUNC_1(VAR_2->SCp.dma_handle);
}
