
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
struct hl_device {int kernel_cb_mgr; int dev; } ;
struct hl_cs_parser {int job_userptr_list; int patched_cb; int patched_cb_size; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,char*,int ) ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (struct hl_device*,struct hl_cs_parser*) ;
 int FUNC_3 (struct hl_device*,struct hl_cs_parser*,int) ;
 int FUNC_4 (struct hl_device*,int *,int ,int*,int ) ;
 int FUNC_5 (struct hl_device*,int *,int) ;
 int FUNC_6 (struct hl_device*,int *,int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (struct hl_device*,int ) ;

__attribute__((used)) static int FUNC_9(struct hl_device *VAR_3,
    struct hl_cs_parser *VAR_4)
{
 u64 VAR_5;
 int VAR_6;

 VAR_6 = FUNC_3(VAR_3, VAR_4, 0);

 if (VAR_6)
  goto free_userptr;

 VAR_6 = FUNC_4(VAR_3, &VAR_3->kernel_cb_mgr,
    VAR_4->patched_cb_size,
    &VAR_5, VAR_1);
 if (VAR_6) {
  FUNC_1(VAR_3->dev,
   "Failed to allocate patched CB for DMA CS %d\n", VAR_6);
  goto free_userptr;
 }

 VAR_5 >>= VAR_2;
 VAR_4->patched_cb = FUNC_6(VAR_3, &VAR_3->kernel_cb_mgr,
    (u32) VAR_5);

 FUNC_0(!VAR_4->patched_cb, "DMA CB handle invalid 0x%x\n",
   (u32) VAR_5);
 if (!VAR_4->patched_cb) {
  VAR_6 = -VAR_0;
  goto out;
 }

 VAR_6 = FUNC_2(VAR_3, VAR_4);

 if (VAR_6)
  FUNC_7(VAR_4->patched_cb);

out:






 FUNC_5(VAR_3, &VAR_3->kernel_cb_mgr,
    VAR_5 << VAR_2);

free_userptr:
 if (VAR_6)
  FUNC_8(VAR_3, VAR_4->job_userptr_list);
 return VAR_6;
}
