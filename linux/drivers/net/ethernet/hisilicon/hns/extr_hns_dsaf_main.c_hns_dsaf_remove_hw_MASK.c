
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dsaf_device {TYPE_1__* misc_op; } ;
struct TYPE_2__ {int (* dsaf_reset ) (struct dsaf_device*,int ) ;} ;


 int FUNC_0 (struct dsaf_device*,int ) ;

__attribute__((used)) static void FUNC_1(struct dsaf_device *VAR_0)
{

 VAR_0->misc_op->dsaf_reset(VAR_0, 0);
}
