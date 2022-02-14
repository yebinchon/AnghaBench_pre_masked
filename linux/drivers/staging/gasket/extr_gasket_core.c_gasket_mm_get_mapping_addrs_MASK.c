
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ ulong ;
struct gasket_mappable_region {scalar_t__ start; scalar_t__ length_bytes; } ;


 void* FUNC_0 (scalar_t__,scalar_t__) ;

__attribute__((used)) static bool
FUNC_1(const struct gasket_mappable_region *VAR_0,
       ulong VAR_1, ulong VAR_2,
       struct gasket_mappable_region *VAR_3,
       ulong *VAR_4)
{
 ulong VAR_5 = VAR_0->start;
 ulong VAR_6 = VAR_0->length_bytes;
 ulong VAR_7 = VAR_5 + VAR_6;

 *VAR_4 = 0;
 if (VAR_1 + VAR_2 < VAR_5) {




  return 0;
 } else if (VAR_1 <= VAR_5) {
  VAR_3->start = VAR_5;
  *VAR_4 = VAR_5 - VAR_1;
  VAR_3->length_bytes =
   FUNC_0(VAR_2 - *VAR_4, VAR_6);
  return 1;
 } else if (VAR_1 > VAR_5 &&
     VAR_1 < VAR_7) {
  VAR_3->start = VAR_1;
  *VAR_4 = 0;
  VAR_3->length_bytes =
   FUNC_0(VAR_2, VAR_7 - VAR_1);
  return 1;
 }





 return 0;
}
