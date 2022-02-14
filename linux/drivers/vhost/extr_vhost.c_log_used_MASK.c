
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct vhost_virtqueue {scalar_t__ used; scalar_t__ log_addr; int log_base; int iotlb; } ;
struct iovec {int iov_len; scalar_t__ iov_base; } ;


 int VAR_0 ;
 int FUNC_0 (int ,scalar_t__,scalar_t__) ;
 int FUNC_1 (struct vhost_virtqueue*,uintptr_t,int ) ;
 int FUNC_2 (struct vhost_virtqueue*,scalar_t__,scalar_t__,struct iovec*,int,int ) ;

__attribute__((used)) static int FUNC_3(struct vhost_virtqueue *VAR_1, u64 VAR_2, u64 VAR_3)
{
 struct iovec VAR_4[64];
 int VAR_5, VAR_6;

 if (!VAR_1->iotlb)
  return FUNC_0(VAR_1->log_base, VAR_1->log_addr + VAR_2, VAR_3);

 VAR_6 = FUNC_2(VAR_1, (uintptr_t)VAR_1->used + VAR_2,
        VAR_3, VAR_4, 64, VAR_0);
 if (VAR_6 < 0)
  return VAR_6;

 for (VAR_5 = 0; VAR_5 < VAR_6; VAR_5++) {
  VAR_6 = FUNC_1(VAR_1, (uintptr_t)VAR_4[VAR_5].iov_base,
        VAR_4[VAR_5].iov_len);
  if (VAR_6)
   return VAR_6;
 }

 return 0;
}
