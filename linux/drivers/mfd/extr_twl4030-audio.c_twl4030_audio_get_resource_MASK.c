
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct twl4030_audio {TYPE_1__* resource; } ;
typedef enum twl4030_audio_res { ____Placeholder_twl4030_audio_res } twl4030_audio_res ;
struct TYPE_2__ {int reg; } ;


 int VAR_0 ;
 struct twl4030_audio* FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (int ,int*,int ) ;

__attribute__((used)) static inline int FUNC_2(enum twl4030_audio_res VAR_2)
{
 struct twl4030_audio *VAR_3 = FUNC_0(VAR_1);
 u8 VAR_4;

 FUNC_1(VAR_0, &VAR_4,
   VAR_3->resource[VAR_2].reg);

 return VAR_4;
}
