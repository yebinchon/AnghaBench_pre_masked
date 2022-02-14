
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct st_buffer {scalar_t__ sg_segs; scalar_t__ do_dio; } ;
struct scsi_tape {struct st_buffer* buffer; } ;


 int FUNC_0 (struct st_buffer*,scalar_t__,int) ;

__attribute__((used)) static void FUNC_1(struct scsi_tape *VAR_0, int VAR_1)
{
 struct st_buffer *VAR_2;

 VAR_2 = VAR_0->buffer;
 if (VAR_2->do_dio) {
  FUNC_0(VAR_2, VAR_2->do_dio, VAR_1);
  VAR_2->do_dio = 0;
  VAR_2->sg_segs = 0;
 }
}
