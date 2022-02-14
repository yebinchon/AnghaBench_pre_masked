
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct isi_format {unsigned int fourcc; } ;
struct atmel_isi {unsigned int num_user_formats; struct isi_format** user_formats; } ;



__attribute__((used)) static const struct isi_format *FUNC_0(struct atmel_isi *VAR_0,
            unsigned int VAR_1)
{
 unsigned int VAR_2 = VAR_0->num_user_formats;
 const struct isi_format *VAR_3;
 unsigned int VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_2; VAR_4++) {
  VAR_3 = VAR_0->user_formats[VAR_4];
  if (VAR_3->fourcc == VAR_1)
   return VAR_3;
 }

 return ((void*)0);
}
