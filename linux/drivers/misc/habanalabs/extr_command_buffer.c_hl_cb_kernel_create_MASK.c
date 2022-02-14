
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
struct hl_device {int kernel_cb_mgr; int dev; } ;
struct hl_cb {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,char*,int ) ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (struct hl_device*,int *,int ,int*,int ) ;
 int FUNC_3 (struct hl_device*,int *,int) ;
 struct hl_cb* FUNC_4 (struct hl_device*,int *,int ) ;

struct hl_cb *FUNC_5(struct hl_device *VAR_2, u32 VAR_3)
{
 u64 VAR_4;
 struct hl_cb *VAR_5;
 int VAR_6;

 VAR_6 = FUNC_2(VAR_2, &VAR_2->kernel_cb_mgr, VAR_3, &VAR_4,
   VAR_0);
 if (VAR_6) {
  FUNC_1(VAR_2->dev,
   "Failed to allocate CB for the kernel driver %d\n", VAR_6);
  return ((void*)0);
 }

 VAR_4 >>= VAR_1;
 VAR_5 = FUNC_4(VAR_2, &VAR_2->kernel_cb_mgr, (u32) VAR_4);

 FUNC_0(!VAR_5, "Kernel CB handle invalid 0x%x\n", (u32) VAR_4);
 if (!VAR_5)
  goto destroy_cb;

 return VAR_5;

destroy_cb:
 FUNC_3(VAR_2, &VAR_2->kernel_cb_mgr, VAR_4 << VAR_1);

 return ((void*)0);
}
