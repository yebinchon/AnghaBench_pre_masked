
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u32 ;
typedef scalar_t__ u16 ;
struct TYPE_3__ {int (* release_swfw_sync ) (struct ixgbe_hw*,int ) ;scalar_t__ (* acquire_swfw_sync ) (struct ixgbe_hw*,int ) ;} ;
struct TYPE_4__ {TYPE_1__ ops; } ;
struct ixgbe_hw {TYPE_2__ mac; } ;
struct ixgbe_hic_hdr {scalar_t__ buf_len; } ;
typedef scalar_t__ s32 ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 void* FUNC_0 (struct ixgbe_hw*,int ,scalar_t__) ;
 int FUNC_1 (struct ixgbe_hw*,char*,...) ;
 scalar_t__ FUNC_2 (struct ixgbe_hw*,void*,scalar_t__,scalar_t__) ;
 int FUNC_3 (scalar_t__*) ;
 scalar_t__ FUNC_4 (scalar_t__,int) ;
 scalar_t__ FUNC_5 (struct ixgbe_hw*,int ) ;
 int FUNC_6 (struct ixgbe_hw*,int ) ;

s32 FUNC_7(struct ixgbe_hw *VAR_4, void *VAR_5,
     u32 VAR_6, u32 VAR_7,
     bool VAR_8)
{
 u32 VAR_9 = sizeof(struct ixgbe_hic_hdr);
 union {
  struct ixgbe_hic_hdr hdr;
  u32 u32arr[1];
 } *VAR_10 = VAR_5;
 u16 VAR_11, VAR_12;
 s32 VAR_13;
 u32 VAR_14;

 if (!VAR_6 || VAR_6 > VAR_3) {
  FUNC_1(VAR_4, "Buffer length failure buffersize-%d.\n", VAR_6);
  return VAR_0;
 }

 VAR_13 = VAR_4->mac.ops.acquire_swfw_sync(VAR_4, VAR_2);
 if (VAR_13)
  return VAR_13;

 VAR_13 = FUNC_2(VAR_4, VAR_5, VAR_6, VAR_7);
 if (VAR_13)
  goto rel_out;

 if (!VAR_8)
  goto rel_out;


 VAR_12 = VAR_9 >> 2;


 for (VAR_14 = 0; VAR_14 < VAR_12; VAR_14++) {
  VAR_10->u32arr[VAR_14] = FUNC_0(VAR_4, VAR_1, VAR_14);
  FUNC_3(&VAR_10->u32arr[VAR_14]);
 }


 VAR_11 = VAR_10->hdr.buf_len;
 if (!VAR_11)
  goto rel_out;

 if (VAR_6 < FUNC_4(VAR_11, 4) + VAR_9) {
  FUNC_1(VAR_4, "Buffer not large enough for reply message.\n");
  VAR_13 = VAR_0;
  goto rel_out;
 }


 VAR_12 = (VAR_11 + 3) >> 2;


 for (; VAR_14 <= VAR_12; VAR_14++) {
  VAR_10->u32arr[VAR_14] = FUNC_0(VAR_4, VAR_1, VAR_14);
  FUNC_3(&VAR_10->u32arr[VAR_14]);
 }

rel_out:
 VAR_4->mac.ops.release_swfw_sync(VAR_4, VAR_2);

 return VAR_13;
}
