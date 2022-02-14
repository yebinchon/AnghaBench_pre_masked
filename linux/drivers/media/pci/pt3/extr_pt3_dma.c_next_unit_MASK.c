
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct pt3_adapter {int num_bufs; TYPE_1__* buffer; } ;
struct TYPE_2__ {int * data; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static u8 *FUNC_0(struct pt3_adapter *VAR_2, int *VAR_3, int *VAR_4)
{
 *VAR_4 += VAR_1;
 if (*VAR_4 >= VAR_0) {
  *VAR_4 -= VAR_0;
  (*VAR_3)++;
  if (*VAR_3 == VAR_2->num_bufs)
   *VAR_3 = 0;
 }
 return &VAR_2->buffer[*VAR_3].data[*VAR_4];
}
