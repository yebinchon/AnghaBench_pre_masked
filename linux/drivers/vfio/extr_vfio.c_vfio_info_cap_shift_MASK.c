
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vfio_info_cap_header {int next; } ;
struct vfio_info_cap {scalar_t__ buf; } ;



void FUNC_0(struct vfio_info_cap *VAR_0, size_t VAR_1)
{
 struct vfio_info_cap_header *VAR_2;
 void *VAR_3 = (void *)VAR_0->buf;

 for (VAR_2 = VAR_3; VAR_2->next; VAR_2 = VAR_3 + VAR_2->next - VAR_1)
  VAR_2->next += VAR_1;
}
