
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct snd_tea575x {struct bttv* private_data; } ;
struct bttv_tea575x_gpio {int clk; int wren; int data; int most; } ;
struct bttv {struct bttv_tea575x_gpio tea_gpio; } ;


 int FUNC_0 (int,int) ;

__attribute__((used)) static void FUNC_1(struct snd_tea575x *VAR_0, bool VAR_1)
{
 struct bttv *VAR_2 = VAR_0->private_data;
 struct bttv_tea575x_gpio VAR_3 = VAR_2->tea_gpio;
 u32 VAR_4 = (1 << VAR_3.clk) | (1 << VAR_3.wren) | (1 << VAR_3.data) |
     (1 << VAR_3.most);

 if (VAR_1)
  FUNC_0(VAR_4, (1 << VAR_3.data) | (1 << VAR_3.clk) |
     (1 << VAR_3.wren));
 else
  FUNC_0(VAR_4, (1 << VAR_3.clk) | (1 << VAR_3.wren));
}
