
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int bits_per_pixel; } ;
struct TYPE_4__ {TYPE_1__ var; } ;
struct stifb_info {TYPE_2__ info; } ;




 scalar_t__ FUNC_0 (struct stifb_info*) ;
 int FUNC_1 (struct stifb_info*) ;
 int FUNC_2 (struct stifb_info*) ;
 int FUNC_3 (struct stifb_info*) ;
 int FUNC_4 (struct stifb_info*,int,int) ;
 int FUNC_5 (struct stifb_info*) ;
 int FUNC_6 (struct stifb_info*) ;
 int FUNC_7 (struct stifb_info*,unsigned int) ;

__attribute__((used)) static void
FUNC_8(struct stifb_info *VAR_0, int VAR_1)
{
 unsigned int VAR_2;

 FUNC_1(VAR_0);

 if (FUNC_0(VAR_0))
  if (VAR_0->info.var.bits_per_pixel == 32)
   VAR_2 = 0x04000F00;
  else
   VAR_2 = 0x00000F00;
 else
  VAR_2 = 0x00000F00;

 switch (VAR_1) {
 case 128:

  if (FUNC_0(VAR_0))
   FUNC_5(VAR_0);
  else
   FUNC_6(VAR_0);



  FUNC_7(VAR_0, VAR_2);


         FUNC_4(VAR_0, 0xff, 255);




  FUNC_3(VAR_0);
  break;

 case 129:

  if (FUNC_0(VAR_0))
   FUNC_5(VAR_0);
  else
   FUNC_6(VAR_0);
  FUNC_7(VAR_0, VAR_2);
  FUNC_4(VAR_0, 0xff, 0);
  break;

 case -1:
  FUNC_3(VAR_0);
  FUNC_7(VAR_0, VAR_2);
  break;
     }

 FUNC_2(VAR_0);
}
