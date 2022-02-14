
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wl1251 {int physical_mem_addr; int virtual_mem_addr; } ;



__attribute__((used)) static int FUNC_0(struct wl1251 *VAR_0, int VAR_1)
{
 return VAR_1 - VAR_0->physical_mem_addr + VAR_0->virtual_mem_addr;
}
