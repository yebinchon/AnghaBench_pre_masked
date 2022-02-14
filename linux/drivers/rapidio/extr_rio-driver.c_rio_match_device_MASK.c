
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rio_device_id {scalar_t__ vid; scalar_t__ asm_vid; scalar_t__ did; scalar_t__ asm_did; } ;
struct rio_dev {scalar_t__ vid; scalar_t__ did; scalar_t__ asm_vid; scalar_t__ asm_did; } ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static const struct rio_device_id *FUNC_0(const struct rio_device_id
          *VAR_1,
          const struct rio_dev *VAR_2)
{
 while (VAR_1->vid || VAR_1->asm_vid) {
  if (((VAR_1->vid == VAR_0) || (VAR_1->vid == VAR_2->vid)) &&
      ((VAR_1->did == VAR_0) || (VAR_1->did == VAR_2->did)) &&
      ((VAR_1->asm_vid == VAR_0)
       || (VAR_1->asm_vid == VAR_2->asm_vid))
      && ((VAR_1->asm_did == VAR_0)
   || (VAR_1->asm_did == VAR_2->asm_did)))
   return VAR_1;
  VAR_1++;
 }
 return ((void*)0);
}
