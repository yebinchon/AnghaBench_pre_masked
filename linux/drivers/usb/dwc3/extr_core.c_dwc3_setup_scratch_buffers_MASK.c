
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct dwc3 {int nr_scratch; int scratch_addr; int sysdev; int scratchbuf; int has_hibernation; } ;
typedef int dma_addr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int ,int ,int,int ) ;
 scalar_t__ FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,int ,int,int ) ;
 int FUNC_5 (struct dwc3*,int ,int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;

__attribute__((used)) static int FUNC_8(struct dwc3 *VAR_5)
{
 dma_addr_t VAR_6;
 u32 VAR_7;
 int VAR_8;

 if (!VAR_5->has_hibernation)
  return 0;

 if (!VAR_5->nr_scratch)
  return 0;


 if (!FUNC_0(VAR_5->scratchbuf))
  return 0;

 VAR_6 = FUNC_2(VAR_5->sysdev, VAR_5->scratchbuf,
   VAR_5->nr_scratch * VAR_3,
   VAR_0);
 if (FUNC_3(VAR_5->sysdev, VAR_6)) {
  FUNC_1(VAR_5->sysdev, "failed to map scratch buffer\n");
  VAR_8 = -VAR_4;
  goto err0;
 }

 VAR_5->scratch_addr = VAR_6;

 VAR_7 = FUNC_6(VAR_6);

 VAR_8 = FUNC_5(VAR_5,
   VAR_2, VAR_7);
 if (VAR_8 < 0)
  goto err1;

 VAR_7 = FUNC_7(VAR_6);

 VAR_8 = FUNC_5(VAR_5,
   VAR_1, VAR_7);
 if (VAR_8 < 0)
  goto err1;

 return 0;

err1:
 FUNC_4(VAR_5->sysdev, VAR_5->scratch_addr, VAR_5->nr_scratch *
   VAR_3, VAR_0);

err0:
 return VAR_8;
}
