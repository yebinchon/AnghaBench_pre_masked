
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vbg_ioctl_hdr {int size_in; int size_out; } ;


 int VAR_0 ;

__attribute__((used)) static int FUNC_0(struct vbg_ioctl_hdr *VAR_1, size_t VAR_2,
    size_t VAR_3)
{
 if (VAR_1->size_in != (sizeof(*VAR_1) + VAR_2) ||
     VAR_1->size_out != (sizeof(*VAR_1) + VAR_3))
  return -VAR_0;

 return 0;
}
