
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct vfio_platform_device {int dummy; } ;


 int VAR_0 ;


 int VAR_1 ;

 int FUNC_0 (struct vfio_platform_device*,unsigned int,unsigned int,unsigned int,int,void*) ;
 int FUNC_1 (struct vfio_platform_device*,unsigned int,unsigned int,unsigned int,int,void*) ;
 int FUNC_2 (struct vfio_platform_device*,unsigned int,unsigned int,unsigned int,int,void*) ;

int FUNC_3(struct vfio_platform_device *VAR_2,
     uint32_t VAR_3, unsigned VAR_4, unsigned VAR_5,
     unsigned VAR_6, void *VAR_7)
{
 int (*VAR_8)(struct vfio_platform_device *VAR_9, unsigned VAR_10,
      unsigned VAR_11, unsigned VAR_12, uint32_t VAR_13,
      void *VAR_14) = ((void*)0);

 switch (VAR_3 & VAR_1) {
 case 130:
  VAR_8 = FUNC_0;
  break;
 case 128:
  VAR_8 = FUNC_2;
  break;
 case 129:
  VAR_8 = FUNC_1;
  break;
 }

 if (!VAR_8)
  return -VAR_0;

 return VAR_8(VAR_2, VAR_4, VAR_5, VAR_6, VAR_3, VAR_7);
}
