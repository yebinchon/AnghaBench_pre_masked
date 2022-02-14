
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned int nents; struct scatterlist* sgl; } ;
struct scsi_data_buffer {unsigned int length; TYPE_1__ table; } ;
struct scsi_cmnd {struct scsi_data_buffer sdb; } ;
struct scatterlist {int dummy; } ;


 struct scsi_data_buffer* FUNC_0 (struct scsi_cmnd*) ;

__attribute__((used)) static inline void
FUNC_1(struct scsi_cmnd *VAR_0, struct scatterlist **VAR_1,
  unsigned int *VAR_2, unsigned int *VAR_3,
  unsigned int VAR_4)
{
 struct scsi_data_buffer *VAR_5 = VAR_4 ? FUNC_0(VAR_0) : &VAR_0->sdb;

 *VAR_1 = VAR_5->table.sgl;
 *VAR_2 = VAR_5->table.nents;
 *VAR_3 = VAR_5->length;

}
