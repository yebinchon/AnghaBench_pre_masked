
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct the_nilfs {scalar_t__ ns_pseg_offset; } ;
typedef scalar_t__ sector_t ;



__attribute__((used)) static inline void
FUNC_0(struct the_nilfs *VAR_0, sector_t VAR_1,
   sector_t VAR_2)
{

 VAR_0->ns_pseg_offset = VAR_2 - VAR_1 + 1;
}
