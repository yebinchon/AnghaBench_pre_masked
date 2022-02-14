
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {unsigned int ex_magic; unsigned int ex_bn; unsigned int ex_length; unsigned int ex_offset; } ;
struct TYPE_6__ {scalar_t__* raw; TYPE_1__ cooked; } ;
typedef TYPE_2__ efs_extent ;



__attribute__((used)) static inline void FUNC_0(efs_extent *VAR_0, efs_extent *VAR_1) {






 VAR_1->cooked.ex_magic = (unsigned int) VAR_0->raw[0];
 VAR_1->cooked.ex_bn = ((unsigned int) VAR_0->raw[1] << 16) |
    ((unsigned int) VAR_0->raw[2] << 8) |
    ((unsigned int) VAR_0->raw[3] << 0);
 VAR_1->cooked.ex_length = (unsigned int) VAR_0->raw[4];
 VAR_1->cooked.ex_offset = ((unsigned int) VAR_0->raw[5] << 16) |
    ((unsigned int) VAR_0->raw[6] << 8) |
    ((unsigned int) VAR_0->raw[7] << 0);
 return;
}
