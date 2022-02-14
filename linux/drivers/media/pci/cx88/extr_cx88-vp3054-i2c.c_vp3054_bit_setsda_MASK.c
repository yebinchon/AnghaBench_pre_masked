
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vp3054_i2c_state {int state; } ;
struct cx88_core {int dummy; } ;
struct cx8802_dev {struct vp3054_i2c_state* vp3054; struct cx88_core* core; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int) ;

__attribute__((used)) static void FUNC_2(void *VAR_1, int VAR_2)
{
 struct cx8802_dev *VAR_3 = VAR_1;
 struct cx88_core *VAR_4 = VAR_3->core;
 struct vp3054_i2c_state *VAR_5 = VAR_3->vp3054;

 if (VAR_2) {
  VAR_5->state |= 0x0002;
  VAR_5->state &= ~0x0200;
 } else {
  VAR_5->state &= ~0x0002;
  VAR_5->state |= 0x0200;
 }
 FUNC_1(VAR_0, 0x020000 | VAR_5->state);
 FUNC_0(VAR_0);
}
