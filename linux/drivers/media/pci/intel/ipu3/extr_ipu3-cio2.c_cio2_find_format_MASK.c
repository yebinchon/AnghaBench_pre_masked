
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct ipu3_cio2_fmt {scalar_t__ const fourcc; scalar_t__ const mbus_code; } ;


 unsigned int FUNC_0 (struct ipu3_cio2_fmt const*) ;
 struct ipu3_cio2_fmt const* VAR_0 ;

__attribute__((used)) static const struct ipu3_cio2_fmt *FUNC_1(const u32 *VAR_1,
          const u32 *VAR_2)
{
 unsigned int VAR_3;

 for (VAR_3 = 0; VAR_3 < FUNC_0(VAR_0); VAR_3++) {
  if (VAR_1 && *VAR_1 != VAR_0[VAR_3].fourcc)
   continue;
  if (VAR_2 && *VAR_2 != VAR_0[VAR_3].mbus_code)
   continue;

  return &VAR_0[VAR_3];
 }

 return ((void*)0);
}
