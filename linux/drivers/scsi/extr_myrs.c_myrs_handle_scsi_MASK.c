
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scsi_cmnd {int result; int (* scsi_done ) (struct scsi_cmnd*) ;int sense_buffer; } ;
struct myrs_hba {int sg_pool; int dcdb_pool; int sense_pool; } ;
struct myrs_cmdblk {unsigned char status; unsigned int sense_len; int residual; scalar_t__ sgl_addr; int * sgl; scalar_t__ dcdb_dma; int * dcdb; scalar_t__ sense_addr; int * sense; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned char VAR_2 ;
 unsigned char VAR_3 ;
 unsigned char VAR_4 ;
 unsigned int VAR_5 ;
 int FUNC_0 (int ,int *,scalar_t__) ;
 int FUNC_1 (int ,int *,unsigned int) ;
 int FUNC_2 (struct scsi_cmnd*) ;
 int FUNC_3 (struct scsi_cmnd*,int ) ;
 int FUNC_4 (struct scsi_cmnd*) ;

__attribute__((used)) static void FUNC_5(struct myrs_hba *VAR_6, struct myrs_cmdblk *VAR_7,
  struct scsi_cmnd *VAR_8)
{
 unsigned char VAR_9;

 if (!VAR_7)
  return;

 FUNC_2(VAR_8);
 VAR_9 = VAR_7->status;
 if (VAR_7->sense) {
  if (VAR_9 == VAR_4 && VAR_7->sense_len) {
   unsigned int VAR_10 = VAR_5;

   if (VAR_10 > VAR_7->sense_len)
    VAR_10 = VAR_7->sense_len;
   FUNC_1(VAR_8->sense_buffer, VAR_7->sense, VAR_10);
  }
  FUNC_0(VAR_6->sense_pool, VAR_7->sense,
         VAR_7->sense_addr);
  VAR_7->sense = ((void*)0);
  VAR_7->sense_addr = 0;
 }
 if (VAR_7->dcdb) {
  FUNC_0(VAR_6->dcdb_pool, VAR_7->dcdb,
         VAR_7->dcdb_dma);
  VAR_7->dcdb = ((void*)0);
  VAR_7->dcdb_dma = 0;
 }
 if (VAR_7->sgl) {
  FUNC_0(VAR_6->sg_pool, VAR_7->sgl,
         VAR_7->sgl_addr);
  VAR_7->sgl = ((void*)0);
  VAR_7->sgl_addr = 0;
 }
 if (VAR_7->residual)
  FUNC_3(VAR_8, VAR_7->residual);
 if (VAR_9 == VAR_2 ||
     VAR_9 == VAR_3)
  VAR_8->result = (VAR_0 << 16);
 else
  VAR_8->result = (VAR_1 << 16) | VAR_9;
 VAR_8->scsi_done(VAR_8);
}
