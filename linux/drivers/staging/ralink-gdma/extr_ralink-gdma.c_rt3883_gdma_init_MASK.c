
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int dev; } ;
struct gdma_dma_dev {TYPE_1__ ddev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,char*,int,int) ;
 int FUNC_1 (struct gdma_dma_dev*,int ) ;
 int FUNC_2 (struct gdma_dma_dev*,int ,int ) ;

__attribute__((used)) static void FUNC_3(struct gdma_dma_dev *VAR_6)
{
 u32 VAR_7;


 FUNC_2(VAR_6, VAR_0, VAR_1);

 VAR_7 = FUNC_1(VAR_6, VAR_0);
 FUNC_0(VAR_6->ddev.dev, "revision: %d, channels: %d\n",
   (VAR_7 >> VAR_5) & VAR_4,
   8 << ((VAR_7 >> VAR_3) &
   VAR_2));
}
