
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int (* intr ) (TYPE_2__*) ;} ;
struct TYPE_6__ {int waitflag; TYPE_1__ func; } ;
typedef TYPE_2__ ips_ha_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (char*,int) ;
 int VAR_6 ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (int) ;

__attribute__((used)) static int
FUNC_3(ips_ha_t * VAR_7, int VAR_8, int VAR_9)
{
 int VAR_10;
 int VAR_11;

 FUNC_0("ips_wait", 1);

 VAR_10 = VAR_1;
 VAR_11 = VAR_0;

 VAR_8 *= VAR_4;

 while ((VAR_8 > 0) && (!VAR_11)) {
  if (VAR_9 == VAR_3) {
   if (VAR_7->waitflag == VAR_0) {
    VAR_10 = VAR_5;
    VAR_11 = VAR_6;
    break;
   }
  } else if (VAR_9 == VAR_2) {
   if (VAR_7->waitflag == VAR_0) {





    VAR_10 = VAR_5;
    VAR_11 = VAR_6;
    break;
   }







   (*VAR_7->func.intr) (VAR_7);
  }


  FUNC_2(1000);
  VAR_8--;
 }

 return (VAR_10);
}
