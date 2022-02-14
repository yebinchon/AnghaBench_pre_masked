
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint ;
typedef int u32 ;
struct TYPE_2__ {int dmactrlflags; } ;
struct dma_info {int rxoffset; int core; int name; TYPE_1__ dma; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct dma_info*,int) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ,int) ;
 int FUNC_3 (int ,char*,int ) ;

__attribute__((used)) static void FUNC_4(struct dma_info *VAR_7)
{
 uint VAR_8 = VAR_7->dma.dmactrlflags;
 u32 VAR_9;

 FUNC_3(VAR_7->core, "%s:\n", VAR_7->name);

 VAR_9 = VAR_3 | (FUNC_1(VAR_7->core,
        FUNC_0(VAR_7, VAR_9)) &
          VAR_0);

 if ((VAR_8 & VAR_5) == 0)
  VAR_9 |= VAR_2;

 if (VAR_8 & VAR_6)
  VAR_9 |= VAR_1;

 FUNC_2(VAR_7->core, FUNC_0(VAR_7, VAR_9),
  ((VAR_7->rxoffset << VAR_4) | VAR_9));
}
