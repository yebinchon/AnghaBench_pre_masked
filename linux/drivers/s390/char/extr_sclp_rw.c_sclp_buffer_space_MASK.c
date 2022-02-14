
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sclp_buffer {scalar_t__ current_length; int * current_line; struct sccb_header* sccb; } ;
struct sccb_header {int length; } ;
struct msg_buf {int dummy; } ;


 int VAR_0 ;

int
FUNC_0(struct sclp_buffer *VAR_1)
{
 struct sccb_header *VAR_2;
 int VAR_3;

 VAR_2 = VAR_1->sccb;
 VAR_3 = VAR_0 - VAR_2->length;
 if (VAR_1->current_line != ((void*)0))
  VAR_3 -= sizeof(struct msg_buf) + VAR_1->current_length;
 return VAR_3;
}
