
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct snd_tea575x {struct bttv* private_data; } ;
struct bttv_tea575x_gpio {int data; int most; } ;
struct bttv {int mbox_ior; int mbox_csel; int mbox_iow; struct bttv_tea575x_gpio tea_gpio; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,int) ;
 int FUNC_1 () ;
 int FUNC_2 (int) ;

__attribute__((used)) static u8 FUNC_3(struct snd_tea575x *VAR_2)
{
 struct bttv *VAR_3 = VAR_2->private_data;
 struct bttv_tea575x_gpio VAR_4 = VAR_3->tea_gpio;
 u8 VAR_5 = 0;
 u16 VAR_6;

 if (VAR_3->mbox_ior) {

  FUNC_0(VAR_3->mbox_ior | VAR_3->mbox_csel, 0);
  FUNC_2(5);
 }
 VAR_6 = FUNC_1();
 if (VAR_3->mbox_ior) {

  FUNC_0(VAR_3->mbox_ior | VAR_3->mbox_iow | VAR_3->mbox_csel,
     VAR_3->mbox_ior | VAR_3->mbox_iow | VAR_3->mbox_csel);
 }

 if (VAR_6 & (1 << VAR_4.data))
  VAR_5 |= VAR_0;
 if (VAR_6 & (1 << VAR_4.most))
  VAR_5 |= VAR_1;

 return VAR_5;
}
