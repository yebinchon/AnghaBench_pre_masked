
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ti_qspi {scalar_t__ rx_chan; int rx_bb_dma_addr; scalar_t__ rx_bb_addr; int dev; int master; } ;
struct platform_device {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,scalar_t__,int ) ;
 int FUNC_1 (scalar_t__) ;
 struct ti_qspi* FUNC_2 (struct platform_device*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static int FUNC_6(struct platform_device *VAR_1)
{
 struct ti_qspi *VAR_2 = FUNC_2(VAR_1);
 int VAR_3;

 VAR_3 = FUNC_5(VAR_2->master);
 if (VAR_3)
  return VAR_3;

 FUNC_4(&VAR_1->dev);
 FUNC_3(&VAR_1->dev);

 if (VAR_2->rx_bb_addr)
  FUNC_0(VAR_2->dev, VAR_0,
      VAR_2->rx_bb_addr,
      VAR_2->rx_bb_dma_addr);
 if (VAR_2->rx_chan)
  FUNC_1(VAR_2->rx_chan);

 return 0;
}
