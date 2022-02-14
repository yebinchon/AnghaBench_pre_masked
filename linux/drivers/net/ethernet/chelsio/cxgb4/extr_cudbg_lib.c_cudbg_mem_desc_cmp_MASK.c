
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cudbg_mem_desc {int base; } ;



__attribute__((used)) static int FUNC_0(const void *VAR_0, const void *VAR_1)
{
 return ((const struct cudbg_mem_desc *)VAR_0)->base -
        ((const struct cudbg_mem_desc *)VAR_1)->base;
}
