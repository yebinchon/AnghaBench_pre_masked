
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bttv {int i2c_state; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int,int ) ;

__attribute__((used)) static void FUNC_2(void *VAR_1, int VAR_2)
{
 struct bttv *VAR_3 = (struct bttv*)VAR_1;

 if (VAR_2)
  VAR_3->i2c_state |= 0x01;
 else
  VAR_3->i2c_state &= ~0x01;
 FUNC_1(VAR_3->i2c_state, VAR_0);
 FUNC_0(VAR_0);
}
