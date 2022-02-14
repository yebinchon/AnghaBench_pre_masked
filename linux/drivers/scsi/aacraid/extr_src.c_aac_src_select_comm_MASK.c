
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int adapter_deliver; int adapter_intr; } ;
struct aac_dev {TYPE_1__ a_ops; } ;



 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_0(struct aac_dev *VAR_2, int VAR_3)
{
 switch (VAR_3) {
 case 128:
  VAR_2->a_ops.adapter_intr = VAR_1;
  VAR_2->a_ops.adapter_deliver = VAR_0;
  break;
 default:
  return 1;
 }
 return 0;
}
