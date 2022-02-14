
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct uio_device {TYPE_1__* info; } ;
typedef scalar_t__ irqreturn_t ;
struct TYPE_3__ {scalar_t__ (* handler ) (int,TYPE_1__*) ;} ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int,TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;

__attribute__((used)) static irqreturn_t FUNC_2(int VAR_1, void *VAR_2)
{
 struct uio_device *VAR_3 = (struct uio_device *)VAR_2;
 irqreturn_t VAR_4;

 VAR_4 = VAR_3->info->handler(VAR_1, VAR_3->info);
 if (VAR_4 == VAR_0)
  FUNC_1(VAR_3->info);

 return VAR_4;
}
