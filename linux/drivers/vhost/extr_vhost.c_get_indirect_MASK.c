
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct vring_desc {unsigned int len; unsigned int flags; int addr; } ;
struct vhost_virtqueue {struct iovec* indirect; } ;
struct vhost_log {int len; scalar_t__ addr; } ;
struct iovec {int dummy; } ;
struct iov_iter {int dummy; } ;
typedef int desc ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (struct vring_desc*,int,struct iov_iter*) ;
 int FUNC_1 (struct vhost_virtqueue*,int ) ;
 int FUNC_2 (struct iov_iter*,int ,struct iovec*,int,int) ;
 unsigned int FUNC_3 (struct vhost_virtqueue*,struct vring_desc*) ;
 int FUNC_4 () ;
 int FUNC_5 (struct vhost_virtqueue*,scalar_t__,int,struct iovec*,unsigned int,int) ;
 scalar_t__ FUNC_6 (unsigned int) ;
 int FUNC_7 (struct vhost_virtqueue*,unsigned int) ;
 scalar_t__ FUNC_8 (struct vhost_virtqueue*,int ) ;
 int FUNC_9 (struct vhost_virtqueue*,char*,unsigned int,...) ;

__attribute__((used)) static int FUNC_10(struct vhost_virtqueue *VAR_10,
   struct iovec VAR_11[], unsigned int VAR_12,
   unsigned int *VAR_13, unsigned int *VAR_14,
   struct vhost_log *VAR_15, unsigned int *VAR_16,
   struct vring_desc *VAR_17)
{
 struct vring_desc VAR_18;
 unsigned int VAR_19 = 0, VAR_20, VAR_21 = 0;
 u32 VAR_22 = FUNC_7(VAR_10, VAR_17->len);
 struct iov_iter VAR_23;
 int VAR_24, VAR_25;


 if (FUNC_6(VAR_22 % sizeof VAR_18)) {
  FUNC_9(VAR_10, "Invalid length in indirect descriptor: "
         "len 0x%llx not multiple of 0x%zx\n",
         (unsigned long long)VAR_22,
         sizeof VAR_18);
  return -VAR_2;
 }

 VAR_24 = FUNC_5(VAR_10, FUNC_8(VAR_10, VAR_17->addr), VAR_22, VAR_10->indirect,
        VAR_4, VAR_6);
 if (FUNC_6(VAR_24 < 0)) {
  if (VAR_24 != -VAR_1)
   FUNC_9(VAR_10, "Translation failure %d in indirect.\n", VAR_24);
  return VAR_24;
 }
 FUNC_2(&VAR_23, VAR_3, VAR_10->indirect, VAR_24, VAR_22);



 FUNC_4();

 VAR_20 = VAR_22 / sizeof VAR_18;


 if (FUNC_6(VAR_20 > VAR_5 + 1)) {
  FUNC_9(VAR_10, "Indirect buffer length too big: %d\n",
         VAR_17->len);
  return -VAR_0;
 }

 do {
  unsigned VAR_26 = *VAR_14 + *VAR_13;
  if (FUNC_6(++VAR_21 > VAR_20)) {
   FUNC_9(VAR_10, "Loop detected: last one at %u "
          "indirect size %u\n",
          VAR_19, VAR_20);
   return -VAR_2;
  }
  if (FUNC_6(!FUNC_0(&VAR_18, sizeof(VAR_18), &VAR_23))) {
   FUNC_9(VAR_10, "Failed indirect descriptor: idx %d, %zx\n",
          VAR_19, (size_t)FUNC_8(VAR_10, VAR_17->addr) + VAR_19 * sizeof VAR_18);
   return -VAR_2;
  }
  if (FUNC_6(VAR_18.flags & FUNC_1(VAR_10, VAR_8))) {
   FUNC_9(VAR_10, "Nested indirect descriptor: idx %d, %zx\n",
          VAR_19, (size_t)FUNC_8(VAR_10, VAR_17->addr) + VAR_19 * sizeof VAR_18);
   return -VAR_2;
  }

  if (VAR_18.flags & FUNC_1(VAR_10, VAR_9))
   VAR_25 = VAR_7;
  else
   VAR_25 = VAR_6;

  VAR_24 = FUNC_5(VAR_10, FUNC_8(VAR_10, VAR_18.addr),
         FUNC_7(VAR_10, VAR_18.len), VAR_11 + VAR_26,
         VAR_12 - VAR_26, VAR_25);
  if (FUNC_6(VAR_24 < 0)) {
   if (VAR_24 != -VAR_1)
    FUNC_9(VAR_10, "Translation failure %d indirect idx %d\n",
     VAR_24, VAR_19);
   return VAR_24;
  }

  if (VAR_25 == VAR_7) {
   *VAR_14 += VAR_24;
   if (FUNC_6(VAR_15 && VAR_24)) {
    VAR_15[*VAR_16].addr = FUNC_8(VAR_10, VAR_18.addr);
    VAR_15[*VAR_16].len = FUNC_7(VAR_10, VAR_18.len);
    ++*VAR_16;
   }
  } else {


   if (FUNC_6(*VAR_14)) {
    FUNC_9(VAR_10, "Indirect descriptor "
           "has out after in: idx %d\n", VAR_19);
    return -VAR_2;
   }
   *VAR_13 += VAR_24;
  }
 } while ((VAR_19 = FUNC_3(VAR_10, &VAR_18)) != -1);
 return 0;
}
