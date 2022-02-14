
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint ;
typedef int u32 ;
struct TYPE_2__ {int dmactrlflags; } ;
struct dma_info {TYPE_1__ dma; int core; } ;


 int VAR_0 ;
 int FUNC_0 (struct dma_info*,int) ;
 int VAR_1 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ,int) ;

__attribute__((used)) static uint FUNC_3(struct dma_info *VAR_2, uint VAR_3, uint VAR_4)
{
 uint VAR_5;

 if (VAR_2 == ((void*)0))
  return 0;

 VAR_5 = VAR_2->dma.dmactrlflags;
 VAR_5 &= ~VAR_3;
 VAR_5 |= VAR_4;


 if (VAR_5 & VAR_1) {
  u32 VAR_6;

  VAR_6 = FUNC_1(VAR_2->core, FUNC_0(VAR_2, VAR_6));
  FUNC_2(VAR_2->core, FUNC_0(VAR_2, VAR_6),
        VAR_6 | VAR_0);
  if (FUNC_1(VAR_2->core, FUNC_0(VAR_2, VAR_6)) &
      VAR_0)



   FUNC_2(VAR_2->core, FUNC_0(VAR_2, VAR_6),
         VAR_6);
  else

   VAR_5 &= ~VAR_1;
 }

 VAR_2->dma.dmactrlflags = VAR_5;

 return VAR_5;
}
