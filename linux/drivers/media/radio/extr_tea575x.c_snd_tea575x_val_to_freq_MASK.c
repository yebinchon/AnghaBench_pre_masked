
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct snd_tea575x {int band; } ;
struct TYPE_2__ {int rangehigh; int rangelow; } ;





 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_1__* VAR_3 ;
 int FUNC_0 (int,int ,int ) ;

__attribute__((used)) static u32 FUNC_1(struct snd_tea575x *VAR_4, u32 VAR_5)
{
 u32 VAR_6 = VAR_5 & VAR_1;

 if (VAR_6 == 0)
  return VAR_6;

 switch (VAR_4->band) {
 case 129:

  VAR_6 *= 125;
  VAR_6 /= 10;

  VAR_6 -= VAR_2;
  break;
 case 128:

  VAR_6 *= 125;
  VAR_6 /= 10;

  VAR_6 += VAR_2;
  break;
 case 130:

  VAR_6 -= VAR_0;
  break;
 }

 return FUNC_0(VAR_6 * 16, VAR_3[VAR_4->band].rangelow,
    VAR_3[VAR_4->band].rangehigh);
}
