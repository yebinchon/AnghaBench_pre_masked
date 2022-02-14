
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef scalar_t__ u32 ;
struct vfe_format {scalar_t__ code; int bpp; } ;


 int FUNC_0 (int,char*) ;

__attribute__((used)) static u8 FUNC_1(const struct vfe_format *VAR_0,
        unsigned int VAR_1, u32 VAR_2)
{
 unsigned int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_1; VAR_3++)
  if (VAR_2 == VAR_0[VAR_3].code)
   return VAR_0[VAR_3].bpp;

 FUNC_0(1, "Unknown format\n");

 return VAR_0[0].bpp;
}
