
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ivtv {int i2c_state; } ;


 int VAR_0 ;
 int FUNC_0 (int,int ) ;

__attribute__((used)) static void FUNC_1(void *VAR_1, int VAR_2)
{
 struct ivtv *VAR_3 = (struct ivtv *)VAR_1;

 if (VAR_2)
  VAR_3->i2c_state |= 0x01;
 else
  VAR_3->i2c_state &= ~0x01;



 FUNC_0(~VAR_3->i2c_state, VAR_0);
}
