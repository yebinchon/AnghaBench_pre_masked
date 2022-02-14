
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ubi_device {int vtbl_slots; } ;


 int VAR_0 ;

__attribute__((used)) static inline int FUNC_0(const struct ubi_device *VAR_1, int VAR_2)
{
 if (VAR_2 >= VAR_1->vtbl_slots)
  return VAR_2 - VAR_1->vtbl_slots + VAR_0;
 else
  return VAR_2;
}
