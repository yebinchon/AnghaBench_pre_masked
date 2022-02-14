
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int adapter_comm; int adapter_ioremap; } ;
struct aac_dev {TYPE_1__ a_ops; } ;


 int FUNC_0 (struct aac_dev*) ;
 int VAR_0 ;
 int VAR_1 ;

int FUNC_1(struct aac_dev * VAR_2)
{



 VAR_2->a_ops.adapter_ioremap = VAR_0;
 VAR_2->a_ops.adapter_comm = VAR_1;

 return FUNC_0(VAR_2);
}
