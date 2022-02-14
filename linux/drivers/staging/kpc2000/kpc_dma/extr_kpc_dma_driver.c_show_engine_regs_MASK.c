
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dummy; } ;
struct kpc_dma_device {int desc_completed; int desc_next; int desc_pool_last; int desc_pool_first; scalar_t__ eng_regs; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 struct kpc_dma_device* FUNC_0 (struct platform_device*) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (char*,int ,char*,int ,int ,int ,int ,int ,int ,int ,int ) ;
 struct platform_device* FUNC_3 (struct device*) ;

__attribute__((used)) static ssize_t FUNC_4(struct device *VAR_1, struct device_attribute *VAR_2, char *VAR_3)
{
 struct kpc_dma_device *VAR_4;
 struct platform_device *VAR_5 = FUNC_3(VAR_1);

 if (!VAR_5)
  return 0;
 VAR_4 = FUNC_0(VAR_5);
 if (!VAR_4)
  return 0;

 return FUNC_2(VAR_3, VAR_0,
  "EngineControlStatus      = 0x%08x\n"
  "RegNextDescPtr           = 0x%08x\n"
  "RegSWDescPtr             = 0x%08x\n"
  "RegCompletedDescPtr      = 0x%08x\n"
  "desc_pool_first          = %p\n"
  "desc_pool_last           = %p\n"
  "desc_next                = %p\n"
  "desc_completed           = %p\n",
  FUNC_1(VAR_4->eng_regs + 1),
  FUNC_1(VAR_4->eng_regs + 2),
  FUNC_1(VAR_4->eng_regs + 3),
  FUNC_1(VAR_4->eng_regs + 4),
  VAR_4->desc_pool_first,
  VAR_4->desc_pool_last,
  VAR_4->desc_next,
  VAR_4->desc_completed
 );
}
