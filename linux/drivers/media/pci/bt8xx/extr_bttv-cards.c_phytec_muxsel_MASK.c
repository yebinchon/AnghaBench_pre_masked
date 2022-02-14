
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bttv {unsigned int svhs; } ;


 int FUNC_0 (int,unsigned int) ;

__attribute__((used)) static void FUNC_1(struct bttv *VAR_0, unsigned int VAR_1)
{
 unsigned int VAR_2 = VAR_1 % 4;

 if (VAR_1 == VAR_0->svhs)
  VAR_2 = 0;

 FUNC_0(0x3, VAR_2);
}
