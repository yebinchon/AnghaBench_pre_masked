
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct snd_tea575x {struct bttv* private_data; } ;
struct bttv_tea575x_gpio {int data; int clk; int wren; } ;
struct bttv {int mbox_ior; int mbox_iow; int mbox_csel; struct bttv_tea575x_gpio tea_gpio; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,int) ;
 int FUNC_1 (int) ;

__attribute__((used)) static void FUNC_2(struct snd_tea575x *VAR_3, u8 VAR_4)
{
 struct bttv *VAR_5 = VAR_3->private_data;
 struct bttv_tea575x_gpio VAR_6 = VAR_5->tea_gpio;
 u16 VAR_7 = 0;

 VAR_7 |= (VAR_4 & VAR_1) ? (1 << VAR_6.data) : 0;
 VAR_7 |= (VAR_4 & VAR_0) ? (1 << VAR_6.clk) : 0;
 VAR_7 |= (VAR_4 & VAR_2) ? (1 << VAR_6.wren) : 0;

 FUNC_0((1 << VAR_6.data) | (1 << VAR_6.clk) | (1 << VAR_6.wren), VAR_7);
 if (VAR_5->mbox_ior) {

  FUNC_0(VAR_5->mbox_iow | VAR_5->mbox_csel, 0);
  FUNC_1(5);

  FUNC_0(VAR_5->mbox_ior | VAR_5->mbox_iow | VAR_5->mbox_csel,
     VAR_5->mbox_ior | VAR_5->mbox_iow | VAR_5->mbox_csel);
 }
}
