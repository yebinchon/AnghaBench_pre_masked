
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int num_rxp; scalar_t__ fw_query_complete; } ;
struct TYPE_4__ {TYPE_1__ attr; } ;
struct bna {TYPE_2__ ioceth; } ;


 int VAR_0 ;
 int VAR_1 ;

int
FUNC_0(struct bna *VAR_2, int VAR_3)
{
 if (VAR_2->ioceth.attr.fw_query_complete &&
  (VAR_3 <= VAR_2->ioceth.attr.num_rxp)) {
  VAR_2->ioceth.attr.num_rxp = VAR_3;
  return VAR_1;
 }

 return VAR_0;
}
