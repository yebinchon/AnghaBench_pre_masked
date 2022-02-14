
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct fb_info {int dummy; } ;
struct TYPE_2__ {int lut; int status2; int addr; } ;


 TYPE_1__* VAR_0 ;
 int FUNC_0 (unsigned long) ;
 int FUNC_1 (unsigned long) ;
 int FUNC_2 () ;
 void* FUNC_3 (int *) ;
 int FUNC_4 (unsigned char,int *) ;

__attribute__((used)) static int FUNC_5(unsigned int VAR_1, unsigned int VAR_2,
       unsigned int VAR_3, unsigned int VAR_4,
       struct fb_info *VAR_5)
{
 unsigned long VAR_6;
 int VAR_7;

 FUNC_1(VAR_6);


 FUNC_4(VAR_1, &VAR_0->addr);
 FUNC_2();





 VAR_7 = FUNC_3(&VAR_0->status2);

 if ((VAR_7 & 0x0008) == 0)
 {
  FUNC_4(VAR_2, &VAR_0->lut);
  FUNC_2();
  FUNC_4(VAR_3, &VAR_0->lut);
  FUNC_2();
  FUNC_4(VAR_4, &VAR_0->lut);
  FUNC_2();
  FUNC_4(0x00, &VAR_0->lut);
 }
 else
 {
  unsigned char VAR_8;

  VAR_8 = FUNC_3(&VAR_0->lut);
  FUNC_2();
  VAR_8 = FUNC_3(&VAR_0->lut);
  FUNC_2();
  VAR_8 = FUNC_3(&VAR_0->lut);
  FUNC_2();
  VAR_8 = FUNC_3(&VAR_0->lut);
  FUNC_2();

  if ((VAR_7 & 0x000D) != 0)
  {
   FUNC_4(0x00, &VAR_0->lut);
   FUNC_2();
   FUNC_4(0x00, &VAR_0->lut);
   FUNC_2();
  }

  FUNC_4(VAR_2, &VAR_0->lut);
  FUNC_2();
  FUNC_4(VAR_3, &VAR_0->lut);
  FUNC_2();
  FUNC_4(VAR_4, &VAR_0->lut);
  FUNC_2();
  FUNC_4(VAR_8, &VAR_0->lut);
 }

 FUNC_0(VAR_6);
 return 0;
}
