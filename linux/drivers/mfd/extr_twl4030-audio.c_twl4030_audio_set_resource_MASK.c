
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct twl4030_audio {TYPE_1__* resource; } ;
typedef enum twl4030_audio_res { ____Placeholder_twl4030_audio_res } twl4030_audio_res ;
struct TYPE_2__ {int mask; int reg; } ;


 int VAR_0 ;
 struct twl4030_audio* FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (int ,int*,int ) ;
 int FUNC_2 (int ,int,int ) ;

__attribute__((used)) static int FUNC_3(enum twl4030_audio_res VAR_2, int VAR_3)
{
 struct twl4030_audio *VAR_4 = FUNC_0(VAR_1);
 u8 VAR_5;

 FUNC_1(VAR_0, &VAR_5,
   VAR_4->resource[VAR_2].reg);

 if (VAR_3)
  VAR_5 |= VAR_4->resource[VAR_2].mask;
 else
  VAR_5 &= ~VAR_4->resource[VAR_2].mask;

 FUNC_2(VAR_0,
     VAR_5, VAR_4->resource[VAR_2].reg);

 return VAR_5;
}
