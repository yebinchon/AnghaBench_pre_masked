
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sclp_buffer {unsigned short columns; unsigned short htab; scalar_t__ current_length; int * current_line; scalar_t__ char_sum; scalar_t__ messages; scalar_t__ retry_count; struct sccb_header* sccb; } ;
struct sccb_header {int length; } ;
typedef scalar_t__ addr_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct sccb_header*,int ,int) ;

struct sclp_buffer *
FUNC_1(void *VAR_1, unsigned short VAR_2, unsigned short VAR_3)
{
 struct sclp_buffer *VAR_4;
 struct sccb_header *VAR_5;

 VAR_5 = (struct sccb_header *) VAR_1;




 VAR_4 = ((struct sclp_buffer *) ((addr_t) VAR_5 + VAR_0)) - 1;
 VAR_4->sccb = VAR_5;
 VAR_4->retry_count = 0;
 VAR_4->messages = 0;
 VAR_4->char_sum = 0;
 VAR_4->current_line = ((void*)0);
 VAR_4->current_length = 0;
 VAR_4->columns = VAR_2;
 VAR_4->htab = VAR_3;


 FUNC_0(VAR_5, 0, sizeof(struct sccb_header));
 VAR_5->length = sizeof(struct sccb_header);

 return VAR_4;
}
