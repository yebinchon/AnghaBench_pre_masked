
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u_char ;
struct TYPE_7__ {int TupleDataLen; scalar_t__ TupleData; } ;
typedef TYPE_2__ tuple_t ;
struct TYPE_8__ {int ngeo; TYPE_1__* geo; } ;
typedef TYPE_3__ cistpl_device_geo_t ;
struct TYPE_6__ {int buswidth; int erase_block; int read_block; int write_block; int partition; int interleave; } ;


 int VAR_0 ;

__attribute__((used)) static int FUNC_0(tuple_t *VAR_1, cistpl_device_geo_t *VAR_2)
{
 u_char *VAR_3, *VAR_4;
 int VAR_5;

 VAR_3 = (u_char *)VAR_1->TupleData;
 VAR_4 = VAR_3 + VAR_1->TupleDataLen;

 for (VAR_5 = 0; VAR_5 < VAR_0; VAR_5++) {
  if (VAR_3 > VAR_4-6)
   break;
  VAR_2->geo[VAR_5].buswidth = VAR_3[0];
  VAR_2->geo[VAR_5].erase_block = 1 << (VAR_3[1]-1);
  VAR_2->geo[VAR_5].read_block = 1 << (VAR_3[2]-1);
  VAR_2->geo[VAR_5].write_block = 1 << (VAR_3[3]-1);
  VAR_2->geo[VAR_5].partition = 1 << (VAR_3[4]-1);
  VAR_2->geo[VAR_5].interleave = 1 << (VAR_3[5]-1);
  VAR_3 += 6;
 }
 VAR_2->ngeo = VAR_5;
 return 0;
}
