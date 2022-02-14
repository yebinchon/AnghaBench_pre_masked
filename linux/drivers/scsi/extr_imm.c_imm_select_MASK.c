
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {unsigned short base; } ;
typedef TYPE_1__ imm_struct ;


 int VAR_0 ;
 int FUNC_0 (unsigned short) ;
 int FUNC_1 (int) ;
 int FUNC_2 (unsigned short,int) ;
 int FUNC_3 (unsigned short,int) ;

__attribute__((used)) static int FUNC_4(imm_struct *VAR_1, int VAR_2)
{
 int VAR_3;
 unsigned short VAR_4 = VAR_1->base;





 FUNC_2(VAR_4, 0xc);

 VAR_3 = VAR_0;
 do {
  VAR_3--;
 } while ((FUNC_0(VAR_4) & 0x08) && (VAR_3));

 if (!VAR_3)
  return 0;




 FUNC_2(VAR_4, 0x4);
 FUNC_3(VAR_4, 0x80 | (1 << VAR_2));
 FUNC_1(1);




 FUNC_2(VAR_4, 0xc);
 FUNC_2(VAR_4, 0xd);





 VAR_3 = VAR_0;
 do {
  VAR_3--;
 }
 while (!(FUNC_0(VAR_4) & 0x08) && (VAR_3));




 FUNC_2(VAR_4, 0xc);
 return (VAR_3) ? 1 : 0;
}
