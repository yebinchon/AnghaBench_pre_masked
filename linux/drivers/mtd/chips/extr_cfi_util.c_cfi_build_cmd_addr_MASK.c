
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int uint32_t ;
struct map_info {int dummy; } ;
struct cfi_private {unsigned int device_type; } ;


 unsigned int FUNC_0 (struct cfi_private*) ;
 unsigned int FUNC_1 (struct map_info*) ;

uint32_t FUNC_2(uint32_t VAR_0,
    struct map_info *VAR_1, struct cfi_private *VAR_2)
{
 unsigned VAR_3 = FUNC_1(VAR_1);
 unsigned VAR_4 = FUNC_0(VAR_2);
 unsigned VAR_5 = VAR_2->device_type;
 uint32_t VAR_6;

 VAR_6 = (VAR_0 * VAR_5) * VAR_4;






 if (((VAR_5 * VAR_4) > VAR_3) && ((VAR_0 & 0xff) == 0xaa))
  VAR_6 |= (VAR_5 >> 1)*VAR_4;

 return VAR_6;
}
