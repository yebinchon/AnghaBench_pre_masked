
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct snd_tea575x {int tuned; int stereo; TYPE_1__* ops; scalar_t__ mute; } ;
struct TYPE_2__ {int (* read_val ) (struct snd_tea575x*) ;int (* get_pins ) (struct snd_tea575x*) ;int (* set_pins ) (struct snd_tea575x*,int ) ;int (* set_direction ) (struct snd_tea575x*,int ) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct snd_tea575x*) ;
 int FUNC_1 (struct snd_tea575x*,int ) ;
 int FUNC_2 (struct snd_tea575x*,int ) ;
 int FUNC_3 (struct snd_tea575x*,int ) ;
 int FUNC_4 (struct snd_tea575x*) ;
 int FUNC_5 (struct snd_tea575x*,int ) ;
 int FUNC_6 (struct snd_tea575x*) ;
 int FUNC_7 (struct snd_tea575x*,int ) ;
 int FUNC_8 (int) ;

__attribute__((used)) static u32 FUNC_9(struct snd_tea575x *VAR_4)
{
 u16 VAR_5, VAR_6;
 u32 VAR_7 = 0;

 if (VAR_4->ops->read_val)
  return VAR_4->ops->read_val(VAR_4);

 VAR_4->ops->set_direction(VAR_4, 0);
 VAR_4->ops->set_pins(VAR_4, 0);
 FUNC_8(16);

 for (VAR_5 = 24; VAR_5--;) {
  VAR_4->ops->set_pins(VAR_4, VAR_0);
  FUNC_8(2);
  if (!VAR_5)
   VAR_4->tuned = VAR_4->ops->get_pins(VAR_4) & VAR_2 ? 0 : 1;
  VAR_4->ops->set_pins(VAR_4, 0);
  FUNC_8(2);
  VAR_7 <<= 1;
  VAR_6 = VAR_4->ops->get_pins(VAR_4);
  if (!VAR_5)
   VAR_4->stereo = (VAR_6 & VAR_2) ? 0 : 1;
  if (VAR_6 & VAR_1)
   VAR_7++;
  FUNC_8(2);
 }

 if (VAR_4->mute)
  VAR_4->ops->set_pins(VAR_4, VAR_3);

 return VAR_7;
}
