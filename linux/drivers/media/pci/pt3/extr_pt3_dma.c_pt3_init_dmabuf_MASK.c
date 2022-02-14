
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct pt3_adapter {int num_bufs; scalar_t__ buf_ofs; scalar_t__ buf_idx; TYPE_1__* buffer; } ;
struct TYPE_2__ {int * data; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;

void FUNC_0(struct pt3_adapter *VAR_3)
{
 int VAR_4, VAR_5;
 u8 *VAR_6;

 VAR_4 = 0;
 VAR_5 = 0;
 VAR_6 = VAR_3->buffer[0].data;

 while (VAR_4 < VAR_3->num_bufs) {
  VAR_6[VAR_5] = VAR_2;
  VAR_5 += VAR_1;
  if (VAR_5 >= VAR_0) {
   VAR_5 -= VAR_0;
   VAR_4++;
   VAR_6 = VAR_3->buffer[VAR_4].data;
  }
 }
 VAR_3->buf_idx = 0;
 VAR_3->buf_ofs = 0;
}
