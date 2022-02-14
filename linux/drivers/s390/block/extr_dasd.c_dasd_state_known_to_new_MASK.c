
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dasd_device {scalar_t__ block; int state; } ;


 int VAR_0 ;
 int FUNC_0 (struct dasd_device*) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (struct dasd_device*) ;

__attribute__((used)) static int FUNC_3(struct dasd_device *VAR_1)
{

 FUNC_0(VAR_1);
 VAR_1->state = VAR_0;

 if (VAR_1->block)
  FUNC_1(VAR_1->block);


 FUNC_2(VAR_1);
 return 0;
}
