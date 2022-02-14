
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct parport {TYPE_2__* physport; } ;
struct TYPE_4__ {int spintime; TYPE_1__* cad; } ;
struct TYPE_3__ {int timeout; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long FUNC_0 (int) ;
 int FUNC_1 (struct parport*,unsigned char,unsigned char,int) ;
 unsigned char FUNC_2 (struct parport*) ;
 int FUNC_3 (struct parport*,unsigned long) ;
 int FUNC_4 (unsigned long) ;
 scalar_t__ FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (unsigned long,unsigned long) ;

int FUNC_7(struct parport *VAR_3,
       unsigned char VAR_4,
       unsigned char VAR_5)
{
 int VAR_6;
 int VAR_7;
 unsigned long VAR_8;
 unsigned char VAR_9;

 VAR_7 = VAR_3->physport->spintime;
 if (!VAR_3->physport->cad->timeout)


  VAR_7 = 35000;







 VAR_6 = FUNC_1 (VAR_3, VAR_4, VAR_5, VAR_7);
 if (VAR_6 != 1)
  return VAR_6;

 if (!VAR_3->physport->cad->timeout)


  return 1;


 VAR_8 = VAR_2 + FUNC_0(40);
 while (FUNC_6 (VAR_2, VAR_8)) {
  if (FUNC_5 (VAR_1))
   return -VAR_0;



  if ((VAR_6 = FUNC_3 (VAR_3, FUNC_0(10))) < 0)
   return VAR_6;

  VAR_9 = FUNC_2 (VAR_3);
  if ((VAR_9 & VAR_4) == VAR_5)
   return 0;

  if (!VAR_6) {



   FUNC_4(FUNC_0(10));
  }
 }

 return 1;
}
