
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm_area_struct {struct mon_reader_bin* vm_private_data; } ;
struct mon_reader_bin {int mmap_active; } ;



__attribute__((used)) static void FUNC_0(struct vm_area_struct *VAR_0)
{
 struct mon_reader_bin *VAR_1 = VAR_0->vm_private_data;
 VAR_1->mmap_active++;
}
