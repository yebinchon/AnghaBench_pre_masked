
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vfio_info_cap_header {int version; int id; } ;
struct vfio_info_cap {int dummy; } ;


 scalar_t__ FUNC_0 (struct vfio_info_cap_header*) ;
 int FUNC_1 (struct vfio_info_cap_header*) ;
 int FUNC_2 (struct vfio_info_cap_header*,struct vfio_info_cap_header*,size_t) ;
 struct vfio_info_cap_header* FUNC_3 (struct vfio_info_cap*,size_t,int ,int ) ;

int FUNC_4(struct vfio_info_cap *VAR_0,
        struct vfio_info_cap_header *VAR_1, size_t VAR_2)
{
 struct vfio_info_cap_header *VAR_3;

 VAR_3 = FUNC_3(VAR_0, VAR_2, VAR_1->id, VAR_1->version);
 if (FUNC_0(VAR_3))
  return FUNC_1(VAR_3);

 FUNC_2(VAR_3 + 1, VAR_1 + 1, VAR_2 - sizeof(*VAR_3));

 return 0;
}
