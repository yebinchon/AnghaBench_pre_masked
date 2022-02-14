
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dasd_device {int stopped; TYPE_1__* discipline; } ;
struct TYPE_2__ {int (* verify_path ) (struct dasd_device*,int ) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct dasd_device*,int) ;
 int FUNC_1 (struct dasd_device*) ;
 int FUNC_2 (struct dasd_device*) ;
 int FUNC_3 (struct dasd_device*,int ) ;

__attribute__((used)) static void FUNC_4(struct dasd_device *VAR_2)
{
 int VAR_3;

 if (!FUNC_2(VAR_2))
  return;

 if (VAR_2->stopped &
     ~(VAR_0 | VAR_1))
  return;
 VAR_3 = VAR_2->discipline->verify_path(VAR_2,
          FUNC_2(VAR_2));
 if (VAR_3)
  FUNC_0(VAR_2, 50);
 else
  FUNC_1(VAR_2);
}
