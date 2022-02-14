
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct se_device {TYPE_1__* transport; } ;
struct TYPE_2__ {scalar_t__ (* get_blocks ) (struct se_device*) ;} ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (struct se_device*) ;

bool FUNC_1(struct se_device *VAR_1)
{
 return (VAR_1) ? VAR_1->transport->get_blocks(VAR_1) > VAR_0 : 0;
}
