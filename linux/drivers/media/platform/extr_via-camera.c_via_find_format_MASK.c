
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct via_format {scalar_t__ pixelformat; } ;


 unsigned int VAR_0 ;
 struct via_format* VAR_1 ;

__attribute__((used)) static struct via_format *FUNC_0(u32 VAR_2)
{
 unsigned VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++)
  if (VAR_1[VAR_3].pixelformat == VAR_2)
   return VAR_1 + VAR_3;

 return VAR_1;
}
