
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u_char ;
struct TYPE_5__ {int TupleDataLen; scalar_t__ TupleData; } ;
typedef TYPE_1__ tuple_t ;
struct TYPE_6__ {int last_idx; int subtuples; scalar_t__* rmask; scalar_t__ base; } ;
typedef TYPE_2__ cistpl_config_t ;


 int VAR_0 ;

__attribute__((used)) static int FUNC_0(tuple_t *VAR_1, cistpl_config_t *VAR_2)
{
 int VAR_3, VAR_4, VAR_5;
 u_char *VAR_6;

 VAR_6 = (u_char *)VAR_1->TupleData;
 VAR_3 = *VAR_6 & 0x03;
 VAR_4 = (*VAR_6 & 0x3c) >> 2;
 if (VAR_1->TupleDataLen < VAR_3+VAR_4+4)
  return -VAR_0;
 VAR_2->last_idx = *(++VAR_6);
 VAR_6++;
 VAR_2->base = 0;
 for (VAR_5 = 0; VAR_5 <= VAR_3; VAR_5++)
  VAR_2->base += VAR_6[VAR_5] << (8*VAR_5);
 VAR_6 += VAR_3+1;
 for (VAR_5 = 0; VAR_5 < 4; VAR_5++)
  VAR_2->rmask[VAR_5] = 0;
 for (VAR_5 = 0; VAR_5 <= VAR_4; VAR_5++)
  VAR_2->rmask[VAR_5>>2] += VAR_6[VAR_5] << (8*(VAR_5%4));
 VAR_2->subtuples = VAR_1->TupleDataLen - (VAR_3+VAR_4+4);
 return 0;
}
