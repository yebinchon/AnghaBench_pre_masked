
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct vhost_virtqueue {unsigned int num; scalar_t__ used; scalar_t__ avail; scalar_t__ desc; int iotlb; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (struct vhost_virtqueue*,int ,int ,int ,int ) ;
 int FUNC_1 (struct vhost_virtqueue*,unsigned int) ;
 int FUNC_2 (struct vhost_virtqueue*,unsigned int) ;
 int FUNC_3 (struct vhost_virtqueue*,unsigned int) ;

int FUNC_4(struct vhost_virtqueue *VAR_5)
{
 unsigned int VAR_6 = VAR_5->num;

 if (!VAR_5->iotlb)
  return 1;

 return FUNC_0(VAR_5, VAR_0, (u64)(uintptr_t)VAR_5->desc,
          FUNC_2(VAR_5, VAR_6), VAR_3) &&
        FUNC_0(VAR_5, VAR_0, (u64)(uintptr_t)VAR_5->avail,
          FUNC_1(VAR_5, VAR_6),
          VAR_2) &&
        FUNC_0(VAR_5, VAR_1, (u64)(uintptr_t)VAR_5->used,
          FUNC_3(VAR_5, VAR_6), VAR_4);
}
