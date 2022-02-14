
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct b53_device {int * vta_regs; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct b53_device*,int ,int ,int*) ;
 int FUNC_1 (struct b53_device*,int ,int ,int) ;
 int FUNC_2 (int,int) ;

__attribute__((used)) static int FUNC_3(struct b53_device *VAR_3, u8 VAR_4)
{
 unsigned int VAR_5;

 FUNC_1(VAR_3, VAR_0, VAR_3->vta_regs[0], VAR_2 | VAR_4);

 for (VAR_5 = 0; VAR_5 < 10; VAR_5++) {
  u8 VAR_6;

  FUNC_0(VAR_3, VAR_0, VAR_3->vta_regs[0], &VAR_6);
  if (!(VAR_6 & VAR_2))
   return 0;

  FUNC_2(100, 200);
 }

 return -VAR_1;
}
