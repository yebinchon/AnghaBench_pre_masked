
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct camss_format_info {scalar_t__ code; scalar_t__ pixelformat; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;

__attribute__((used)) static int FUNC_1(u32 VAR_1, u32 VAR_2,
        const struct camss_format_info *VAR_3,
        unsigned int VAR_4)
{
 int VAR_5;

 for (VAR_5 = 0; VAR_5 < VAR_4; VAR_5++) {
  if (VAR_3[VAR_5].code == VAR_1 &&
      VAR_3[VAR_5].pixelformat == VAR_2)
   return VAR_5;
 }

 for (VAR_5 = 0; VAR_5 < VAR_4; VAR_5++)
  if (VAR_3[VAR_5].code == VAR_1)
   return VAR_5;

 FUNC_0(1);

 return -VAR_0;
}
