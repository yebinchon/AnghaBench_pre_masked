
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dasd_device {scalar_t__ state; scalar_t__ target; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (struct dasd_device*) ;
 int FUNC_1 (struct dasd_device*) ;
 int FUNC_2 (struct dasd_device*) ;
 int FUNC_3 (struct dasd_device*) ;
 int FUNC_4 (struct dasd_device*) ;

__attribute__((used)) static int FUNC_5(struct dasd_device *VAR_6)
{
 int VAR_7;

 VAR_7 = 0;
 if (VAR_6->state == VAR_3 &&
     VAR_6->target <= VAR_4)
  VAR_7 = FUNC_2(VAR_6);

 if (!VAR_7 &&
     VAR_6->state == VAR_4 &&
     VAR_6->target <= VAR_0)
  VAR_7 = FUNC_3(VAR_6);

 if (!VAR_7 &&
     VAR_6->state == VAR_5 &&
     VAR_6->target <= VAR_0)
  VAR_7 = FUNC_4(VAR_6);

 if (!VAR_7 &&
     VAR_6->state == VAR_0 &&
     VAR_6->target <= VAR_1)
  VAR_7 = FUNC_0(VAR_6);

 if (!VAR_7 &&
     VAR_6->state == VAR_1 &&
     VAR_6->target <= VAR_2)
  VAR_7 = FUNC_1(VAR_6);

 return VAR_7;
}
