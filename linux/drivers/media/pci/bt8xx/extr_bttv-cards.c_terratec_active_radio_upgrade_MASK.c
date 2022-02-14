
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int nr; } ;
struct TYPE_3__ {int wren; int most; int clk; int data; } ;
struct bttv {int has_radio; int has_tea575x; int mbox_iow; int mbox_ior; int mbox_csel; int has_saa6588; TYPE_2__ c; TYPE_1__ tea_gpio; } ;


 int FUNC_0 (char*,int ) ;
 int FUNC_1 (struct bttv*) ;

__attribute__((used)) static int FUNC_2(struct bttv *VAR_0)
{
 VAR_0->has_radio = 1;
 VAR_0->has_tea575x = 1;
 VAR_0->tea_gpio.wren = 4;
 VAR_0->tea_gpio.most = 5;
 VAR_0->tea_gpio.clk = 3;
 VAR_0->tea_gpio.data = 2;

 VAR_0->mbox_iow = 1 << 8;
 VAR_0->mbox_ior = 1 << 9;
 VAR_0->mbox_csel = 1 << 10;

 if (!FUNC_1(VAR_0)) {
  FUNC_0("%d: Terratec Active Radio Upgrade found\n", VAR_0->c.nr);
  VAR_0->has_saa6588 = 1;
 }

 return 0;
}
