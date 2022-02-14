
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
typedef unsigned long u32 ;
struct map_info {scalar_t__ size; } ;
struct cfi_private {int device_type; } ;
struct TYPE_3__ {unsigned long* x; } ;
typedef TYPE_1__ map_word ;


 unsigned long VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__,struct map_info*,struct cfi_private*) ;
 TYPE_1__ FUNC_1 (struct map_info*,scalar_t__) ;

__attribute__((used)) static inline u32 FUNC_2(struct map_info *VAR_1, uint32_t VAR_2,
 struct cfi_private *VAR_3)
{
 map_word VAR_4;
 unsigned long VAR_5;
 int VAR_6 = 0;





 do {
  uint32_t VAR_7 = FUNC_0(0 + (VAR_6 << 8), VAR_1, VAR_3);
  VAR_5 = (1 << (VAR_3->device_type * 8)) - 1;
  if (VAR_7 >= VAR_1->size)
   return 0;
  VAR_4 = FUNC_1(VAR_1, VAR_2 + VAR_7);
  VAR_6++;
 } while ((VAR_4.x[0] & VAR_5) == VAR_0);

 return VAR_4.x[0] & VAR_5;
}
