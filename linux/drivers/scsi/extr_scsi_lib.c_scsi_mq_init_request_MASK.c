
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ sense; } ;
struct scsi_cmnd {void* prot_sdb; scalar_t__ sense_buffer; TYPE_1__ req; int flags; } ;
struct scatterlist {int dummy; } ;
struct request {int dummy; } ;
struct blk_mq_tag_set {struct Scsi_Host* driver_data; } ;
struct Scsi_Host {int unchecked_isa_dma; TYPE_2__* hostt; } ;
struct TYPE_4__ {int cmd_size; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct scsi_cmnd* FUNC_0 (struct request*) ;
 scalar_t__ FUNC_1 (int const,int ,unsigned int) ;
 scalar_t__ FUNC_2 (struct Scsi_Host*) ;
 int FUNC_3 (struct Scsi_Host*) ;

__attribute__((used)) static int FUNC_4(struct blk_mq_tag_set *VAR_3, struct request *VAR_4,
    unsigned int VAR_5, unsigned int VAR_6)
{
 struct Scsi_Host *VAR_7 = VAR_3->driver_data;
 const bool VAR_8 = VAR_7->unchecked_isa_dma;
 struct scsi_cmnd *VAR_9 = FUNC_0(VAR_4);
 struct scatterlist *VAR_10;

 if (VAR_8)
  VAR_9->flags |= VAR_2;
 VAR_9->sense_buffer = FUNC_1(VAR_8,
          VAR_1, VAR_6);
 if (!VAR_9->sense_buffer)
  return -VAR_0;
 VAR_9->req.sense = VAR_9->sense_buffer;

 if (FUNC_2(VAR_7)) {
  VAR_10 = (void *)VAR_9 + sizeof(struct scsi_cmnd) +
   VAR_7->hostt->cmd_size;
  VAR_9->prot_sdb = (void *)VAR_10 + FUNC_3(VAR_7);
 }

 return 0;
}
