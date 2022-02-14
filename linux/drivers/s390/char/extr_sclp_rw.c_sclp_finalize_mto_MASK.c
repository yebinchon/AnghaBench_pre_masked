
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct sclp_buffer {struct msg_buf* current_msg; scalar_t__ current_length; int * current_line; int char_sum; int messages; struct sccb_header* sccb; } ;
struct sccb_header {int length; } ;
struct TYPE_8__ {scalar_t__ length; } ;
struct TYPE_6__ {int length; } ;
struct TYPE_5__ {int length; } ;
struct TYPE_7__ {TYPE_2__ mto; TYPE_1__ header; } ;
struct msg_buf {TYPE_4__ header; TYPE_3__ mdb; } ;



__attribute__((used)) static void
FUNC_0(struct sclp_buffer *VAR_0)
{
 struct sccb_header *VAR_1;
 struct msg_buf *VAR_2;





 VAR_1 = VAR_0->sccb;
 VAR_2 = VAR_0->current_msg;
 VAR_2->header.length += VAR_0->current_length;
 VAR_2->mdb.header.length += VAR_0->current_length;
 VAR_2->mdb.mto.length += VAR_0->current_length;
 VAR_1->length += VAR_2->header.length;






 VAR_0->messages++;
 VAR_0->char_sum += VAR_0->current_length;

 VAR_0->current_line = ((void*)0);
 VAR_0->current_length = 0;
 VAR_0->current_msg = ((void*)0);
}
