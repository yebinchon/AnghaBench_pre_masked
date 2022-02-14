
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct vhost_virtqueue {scalar_t__ log_ctx; int log_base; scalar_t__ iotlb; } ;
struct vhost_log {int addr; int len; } ;
struct iovec {int iov_len; scalar_t__ iov_base; } ;


 int FUNC_0 () ;
 int FUNC_1 (scalar_t__,int) ;
 int FUNC_2 (int ,int ,scalar_t__) ;
 int FUNC_3 (struct vhost_virtqueue*,uintptr_t,int ) ;
 scalar_t__ FUNC_4 (int ,scalar_t__) ;
 int FUNC_5 () ;

int FUNC_6(struct vhost_virtqueue *VAR_0, struct vhost_log *VAR_1,
      unsigned int VAR_2, u64 VAR_3, struct iovec *VAR_4, int VAR_5)
{
 int VAR_6, VAR_7;


 FUNC_5();

 if (VAR_0->iotlb) {
  for (VAR_6 = 0; VAR_6 < VAR_5; VAR_6++) {
   VAR_7 = FUNC_3(VAR_0, (uintptr_t)VAR_4[VAR_6].iov_base,
       VAR_4[VAR_6].iov_len);
   if (VAR_7 < 0)
    return VAR_7;
  }
  return 0;
 }

 for (VAR_6 = 0; VAR_6 < VAR_2; ++VAR_6) {
  u64 VAR_8 = FUNC_4(VAR_1[VAR_6].len, VAR_3);
  VAR_7 = FUNC_2(VAR_0->log_base, VAR_1[VAR_6].addr, VAR_8);
  if (VAR_7 < 0)
   return VAR_7;
  VAR_3 -= VAR_8;
  if (!VAR_3) {
   if (VAR_0->log_ctx)
    FUNC_1(VAR_0->log_ctx, 1);
   return 0;
  }
 }

 FUNC_0();
 return 0;
}
