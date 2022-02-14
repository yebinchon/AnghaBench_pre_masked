
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u16 ;
struct vfio_info_cap_header {int next; void* version; void* id; } ;
struct vfio_info_cap {int size; void* buf; } ;


 int VAR_0 ;
 struct vfio_info_cap_header* FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (void*) ;
 void* FUNC_2 (void*,int,int ) ;
 int FUNC_3 (struct vfio_info_cap_header*,int ,size_t) ;

struct vfio_info_cap_header *FUNC_4(struct vfio_info_cap *VAR_2,
            size_t VAR_3, u16 VAR_4, u16 VAR_5)
{
 void *VAR_6;
 struct vfio_info_cap_header *VAR_7, *VAR_8;

 VAR_6 = FUNC_2(VAR_2->buf, VAR_2->size + VAR_3, VAR_1);
 if (!VAR_6) {
  FUNC_1(VAR_2->buf);
  VAR_2->size = 0;
  return FUNC_0(-VAR_0);
 }

 VAR_2->buf = VAR_6;
 VAR_7 = VAR_6 + VAR_2->size;


 FUNC_3(VAR_7, 0, VAR_3);

 VAR_7->id = VAR_4;
 VAR_7->version = VAR_5;


 for (VAR_8 = VAR_6; VAR_8->next; VAR_8 = VAR_6 + VAR_8->next)
  ;

 VAR_8->next = VAR_2->size;
 VAR_2->size += VAR_3;

 return VAR_7;
}
