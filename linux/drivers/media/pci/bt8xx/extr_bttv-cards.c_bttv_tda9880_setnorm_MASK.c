
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_4__ {size_t type; } ;
struct bttv {scalar_t__ audio_input; size_t tvnorm; TYPE_1__ c; } ;
struct TYPE_6__ {int gpiomask; } ;
struct TYPE_5__ {int v4l2_id; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 TYPE_3__* VAR_2 ;
 TYPE_2__* VAR_3 ;
 int FUNC_0 (int ,int) ;

u32 FUNC_1(struct bttv *VAR_4, u32 VAR_5)
{

 if (VAR_4->audio_input == VAR_0) {
  if (VAR_3[VAR_4->tvnorm].v4l2_id & VAR_1)
   VAR_5 |= 0x10000;
  else
   VAR_5 &= ~0x10000;
 }

 FUNC_0(VAR_2[VAR_4->c.type].gpiomask, VAR_5);
 return VAR_5;
}
