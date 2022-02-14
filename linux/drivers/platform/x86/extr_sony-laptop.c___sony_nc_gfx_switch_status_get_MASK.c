
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int handle; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (char*,unsigned int) ;
 TYPE_1__* VAR_5 ;
 scalar_t__ FUNC_1 (int,int,unsigned int*) ;

__attribute__((used)) static int FUNC_2(void)
{
 unsigned int VAR_6;

 if (FUNC_1(VAR_5->handle,
    VAR_5->handle == 0x015B ? 0x0000 : 0x0100,
    &VAR_6))
  return -VAR_2;

 switch (VAR_5->handle) {
 case 0x0146:



  return VAR_6 & 0x1 ? VAR_3 : VAR_4;
  break;
 case 0x015B:



  return VAR_6 & 0x1 ? VAR_4 : VAR_3;
  break;
 case 0x0128:




  FUNC_0("GFX Status: 0x%x\n", VAR_6);
  return VAR_6 & 0x80 ? VAR_0 :
   VAR_6 & 0x02 ? VAR_4 : VAR_3;
  break;
 }
 return -VAR_1;
}
