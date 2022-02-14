
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ ulong ;
struct gasket_coherent_buffer_desc {scalar_t__ permissions; scalar_t__ base; scalar_t__ size; } ;
struct gasket_driver_desc {struct gasket_coherent_buffer_desc coherent_buffer_description; } ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static bool
FUNC_0(const struct gasket_driver_desc *VAR_1,
     ulong VAR_2)
{
 struct gasket_coherent_buffer_desc VAR_3 =
  VAR_1->coherent_buffer_description;

 if (VAR_3.permissions != VAR_0) {
  if ((VAR_2 >= VAR_3.base) &&
      (VAR_2 < VAR_3.base + VAR_3.size)) {
   return 1;
  }
 }
 return 0;
}
