
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ len; int version; int flag; } ;
struct TYPE_3__ {int fw_vers; } ;
struct adapter {TYPE_2__ eth_dump; TYPE_1__ params; } ;


 int VAR_0 ;

void FUNC_0(struct adapter *VAR_1)
{
 VAR_1->eth_dump.flag = VAR_0;
 VAR_1->eth_dump.version = VAR_1->params.fw_vers;
 VAR_1->eth_dump.len = 0;
}
