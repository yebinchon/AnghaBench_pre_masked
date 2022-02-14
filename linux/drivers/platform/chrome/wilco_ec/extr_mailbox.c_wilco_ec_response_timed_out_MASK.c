
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wilco_ec_device {TYPE_1__* io_command; } ;
struct TYPE_2__ {int start; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned long VAR_2 ;
 int FUNC_0 (int ) ;
 unsigned long VAR_3 ;
 scalar_t__ FUNC_1 (unsigned long,unsigned long) ;
 int FUNC_2 (int,int) ;

__attribute__((used)) static bool FUNC_3(struct wilco_ec_device *VAR_4)
{
 unsigned long VAR_5 = VAR_3 + VAR_2;

 do {
  if (!(FUNC_0(VAR_4->io_command->start) &
        (VAR_1 | VAR_0)))
   return 0;
  FUNC_2(100, 200);
 } while (FUNC_1(VAR_3, VAR_5));

 return 1;
}
