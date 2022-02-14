
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct snd_tea575x {TYPE_1__* ops; int mute; } ;
struct TYPE_2__ {void (* write_val ) (struct snd_tea575x*,unsigned int) ;int (* set_pins ) (struct snd_tea575x*,int) ;int (* set_direction ) (struct snd_tea575x*,int) ;} ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 void FUNC_0 (struct snd_tea575x*,unsigned int) ;
 int FUNC_1 (struct snd_tea575x*,int) ;
 int FUNC_2 (struct snd_tea575x*,int) ;
 int FUNC_3 (struct snd_tea575x*,int) ;
 int FUNC_4 (struct snd_tea575x*,int) ;
 int FUNC_5 (struct snd_tea575x*,int) ;
 int FUNC_6 (int) ;

__attribute__((used)) static void FUNC_7(struct snd_tea575x *VAR_3, unsigned int VAR_4)
{
 u16 VAR_5;
 u8 VAR_6;

 if (VAR_3->ops->write_val)
  return VAR_3->ops->write_val(VAR_3, VAR_4);

 VAR_3->ops->set_direction(VAR_3, 1);
 FUNC_6(16);

 for (VAR_5 = 25; VAR_5 > 0; VAR_5--) {
  VAR_6 = (VAR_4 >> 24) & VAR_1;
  VAR_4 <<= 1;
  VAR_3->ops->set_pins(VAR_3, VAR_6 | VAR_2);
  FUNC_6(2);
  VAR_3->ops->set_pins(VAR_3, VAR_6 | VAR_2 | VAR_0);
  FUNC_6(2);
  VAR_3->ops->set_pins(VAR_3, VAR_6 | VAR_2);
  FUNC_6(2);
 }

 if (!VAR_3->mute)
  VAR_3->ops->set_pins(VAR_3, 0);
}
