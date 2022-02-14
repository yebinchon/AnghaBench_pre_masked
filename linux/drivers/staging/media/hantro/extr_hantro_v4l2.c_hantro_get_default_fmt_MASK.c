
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hantro_fmt {scalar_t__ codec_mode; } ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static const struct hantro_fmt *
FUNC_0(const struct hantro_fmt *VAR_1, unsigned int VAR_2,
         bool VAR_3)
{
 unsigned int VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_2; VAR_4++) {
  if (VAR_3 == (VAR_1[VAR_4].codec_mode !=
      VAR_0))
   return &VAR_1[VAR_4];
 }
 return ((void*)0);
}
