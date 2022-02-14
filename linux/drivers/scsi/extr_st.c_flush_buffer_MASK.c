
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct st_partstat {scalar_t__ rw; scalar_t__ eof; scalar_t__ drv_file; scalar_t__ drv_block; } ;
struct scsi_tape {scalar_t__ ready; size_t partition; int block_size; TYPE_1__* buffer; struct st_partstat* ps; scalar_t__ pos_unknown; } ;
struct TYPE_2__ {int buffer_bytes; int read_pointer; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 void* VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (struct scsi_tape*,int ) ;
 int FUNC_1 (struct scsi_tape*) ;
 int FUNC_2 (struct scsi_tape*,int ,int) ;

__attribute__((used)) static int FUNC_3(struct scsi_tape *VAR_6, int VAR_7)
{
 int VAR_8, VAR_9;
 struct st_partstat *VAR_10;





 if (VAR_6->pos_unknown)
  return (-VAR_0);

 if (VAR_6->ready != VAR_4)
  return 0;
 VAR_10 = &(VAR_6->ps[VAR_6->partition]);
 if (VAR_10->rw == VAR_5)
  return FUNC_1(VAR_6);

 if (VAR_6->block_size == 0)
  return 0;

 VAR_8 = ((VAR_6->buffer)->buffer_bytes +
       (VAR_6->buffer)->read_pointer) / VAR_6->block_size -
     ((VAR_6->buffer)->read_pointer + VAR_6->block_size - 1) /
     VAR_6->block_size;
 (VAR_6->buffer)->buffer_bytes = 0;
 (VAR_6->buffer)->read_pointer = 0;
 VAR_9 = 0;
 if (!VAR_7) {
  if (VAR_10->eof == VAR_2) {
   VAR_9 = FUNC_0(VAR_6, 0);
   if (!VAR_9)
    VAR_10->eof = VAR_3;
   else {
    if (VAR_10->drv_file >= 0)
     VAR_10->drv_file++;
    VAR_10->drv_block = 0;
   }
  }
  if (!VAR_9 && VAR_8 > 0)
   VAR_9 = FUNC_2(VAR_6, VAR_1, VAR_8);
 } else if (VAR_10->eof == VAR_2) {
  if (VAR_10->drv_file >= 0)
   VAR_10->drv_file++;
  VAR_10->drv_block = 0;
  VAR_10->eof = VAR_3;
 }
 return VAR_9;

}
