
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned long u64 ;
struct hl_device {int dummy; } ;
struct hl_ctx {int dummy; } ;
struct dma_fence {long error; } ;


 long VAR_0 ;
 long VAR_1 ;
 scalar_t__ FUNC_0 (struct dma_fence*) ;
 unsigned long VAR_2 ;
 long FUNC_1 (struct dma_fence*) ;
 int FUNC_2 (struct dma_fence*) ;
 long FUNC_3 (struct dma_fence*,int,unsigned long) ;
 int FUNC_4 (struct hl_device*,struct hl_ctx*) ;
 struct dma_fence* FUNC_5 (struct hl_ctx*,unsigned long) ;
 int FUNC_6 (struct hl_ctx*) ;
 unsigned long FUNC_7 (unsigned long) ;

__attribute__((used)) static long FUNC_8(struct hl_device *VAR_3,
  struct hl_ctx *VAR_4, u64 VAR_5, u64 VAR_6)
{
 struct dma_fence *VAR_7;
 unsigned long VAR_8;
 long VAR_9;

 if (VAR_5 == VAR_2)
  VAR_8 = VAR_5;
 else
  VAR_8 = FUNC_7(VAR_5);

 FUNC_4(VAR_3, VAR_4);

 VAR_7 = FUNC_5(VAR_4, VAR_6);
 if (FUNC_0(VAR_7)) {
  VAR_9 = FUNC_1(VAR_7);
 } else if (VAR_7) {
  VAR_9 = FUNC_3(VAR_7, 1, VAR_8);
  if (VAR_7->error == -VAR_1)
   VAR_9 = -VAR_1;
  else if (VAR_7->error == -VAR_0)
   VAR_9 = -VAR_0;
  FUNC_2(VAR_7);
 } else
  VAR_9 = 1;

 FUNC_6(VAR_4);

 return VAR_9;
}
