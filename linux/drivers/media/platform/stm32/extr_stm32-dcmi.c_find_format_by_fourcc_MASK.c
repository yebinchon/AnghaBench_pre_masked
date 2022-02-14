
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stm32_dcmi {unsigned int num_of_sd_formats; struct dcmi_format** sd_formats; } ;
struct dcmi_format {unsigned int fourcc; } ;



__attribute__((used)) static const struct dcmi_format *FUNC_0(struct stm32_dcmi *VAR_0,
             unsigned int VAR_1)
{
 unsigned int VAR_2 = VAR_0->num_of_sd_formats;
 const struct dcmi_format *VAR_3;
 unsigned int VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_2; VAR_4++) {
  VAR_3 = VAR_0->sd_formats[VAR_4];
  if (VAR_3->fourcc == VAR_1)
   return VAR_3;
 }

 return ((void*)0);
}
