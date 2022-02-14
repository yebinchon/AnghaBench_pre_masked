
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef scalar_t__ u32 ;
struct packet_msg_prot {int dummy; } ;
struct hl_device {int kernel_cb_mgr; int dev; } ;
struct hl_cs_parser {scalar_t__ patched_cb_size; scalar_t__ user_cb_size; struct hl_cb* patched_cb; struct hl_cb* user_cb; } ;
struct hl_cb {scalar_t__ kernel_address; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int,char*,scalar_t__) ;
 int FUNC_1 (int ,char*,...) ;
 int FUNC_2 (struct hl_device*,struct hl_cs_parser*,int) ;
 int FUNC_3 (struct hl_device*,int *,scalar_t__,int*,int ) ;
 int FUNC_4 (struct hl_device*,int *,int) ;
 struct hl_cb* FUNC_5 (struct hl_device*,int *,scalar_t__) ;
 int FUNC_6 (struct hl_cb*) ;
 int FUNC_7 (void*,void*,scalar_t__) ;

__attribute__((used)) static int FUNC_8(struct hl_device *VAR_4,
  struct hl_cs_parser *VAR_5)
{
 u64 VAR_6;
 u32 VAR_7;
 struct hl_cb *VAR_8;
 int VAR_9;






 VAR_5->patched_cb_size = VAR_5->user_cb_size +
   sizeof(struct packet_msg_prot) * 2;

 VAR_9 = FUNC_3(VAR_4, &VAR_4->kernel_cb_mgr,
    VAR_5->patched_cb_size,
    &VAR_6, VAR_2);

 if (VAR_9) {
  FUNC_1(VAR_4->dev,
   "Failed to allocate patched CB for DMA CS %d\n",
   VAR_9);
  return VAR_9;
 }

 VAR_6 >>= VAR_3;
 VAR_5->patched_cb = FUNC_5(VAR_4, &VAR_4->kernel_cb_mgr,
    (u32) VAR_6);

 FUNC_0(!VAR_5->patched_cb, "DMA CB handle invalid 0x%x\n",
   (u32) VAR_6);
 if (!VAR_5->patched_cb) {
  VAR_9 = -VAR_0;
  goto out;
 }





 FUNC_7((void *) (uintptr_t) VAR_5->patched_cb->kernel_address,
  (void *) (uintptr_t) VAR_5->user_cb->kernel_address,
  VAR_5->user_cb_size);

 VAR_7 = VAR_5->patched_cb_size;


 VAR_8 = VAR_5->user_cb;
 VAR_5->user_cb = VAR_5->patched_cb;
 VAR_9 = FUNC_2(VAR_4, VAR_5, 1);
 VAR_5->user_cb = VAR_8;

 if (VAR_9) {
  FUNC_6(VAR_5->patched_cb);
  goto out;
 }

 if (VAR_7 != VAR_5->patched_cb_size) {
  FUNC_1(VAR_4->dev, "user CB size mismatch\n");
  FUNC_6(VAR_5->patched_cb);
  VAR_9 = -VAR_1;
  goto out;
 }

out:






 FUNC_4(VAR_4, &VAR_4->kernel_cb_mgr,
     VAR_6 << VAR_3);

 return VAR_9;
}
