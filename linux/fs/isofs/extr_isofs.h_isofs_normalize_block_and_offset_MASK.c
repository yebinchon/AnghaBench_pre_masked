
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iso_directory_record {int* flags; int ext_attr_length; int extent; } ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;

__attribute__((used)) static inline void
FUNC_2(struct iso_directory_record* VAR_0,
     unsigned long *VAR_1,
     unsigned long *VAR_2)
{

 if (VAR_0->flags[0] & 2) {
  *VAR_2 = 0;
  *VAR_1 = (unsigned long)FUNC_1(VAR_0->extent)
   + (unsigned long)FUNC_0(VAR_0->ext_attr_length);
 }
}
