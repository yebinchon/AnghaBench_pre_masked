
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct SiS_Private {int SiS_Part4Port; } ;


 int FUNC_0 (struct SiS_Private*,int) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int ,int,int) ;
 int FUNC_3 (struct SiS_Private*) ;

void
FUNC_4(struct SiS_Private *VAR_0)
{

  FUNC_0(VAR_0,0xff00);
  if(!(FUNC_1(VAR_0->SiS_Part4Port,0x26) & 0x02)) {
     FUNC_2(VAR_0->SiS_Part4Port,0x26,0x02);
     FUNC_3(VAR_0);
  }
  if(!(FUNC_1(VAR_0->SiS_Part4Port,0x26) & 0x01)) {
     FUNC_2(VAR_0->SiS_Part4Port,0x26,0x01);
  }
}
