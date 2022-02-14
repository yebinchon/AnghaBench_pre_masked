
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int space_configured; } ;
struct dasd_eckd_private {TYPE_1__ vsq; } ;
struct dasd_device {struct dasd_eckd_private* private; } ;


 int FUNC_0 (struct dasd_device*) ;

__attribute__((used)) static int FUNC_1(struct dasd_device *VAR_0)
{
 struct dasd_eckd_private *VAR_1 = VAR_0->private;
 int VAR_2;

 VAR_2 = FUNC_0(VAR_0);

 return VAR_2 ? : VAR_1->vsq.space_configured;
}
