
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct platform_device {int dev; } ;
struct cqspi_st {int clk; scalar_t__ rx_chan; TYPE_2__* f_pdata; } ;
struct TYPE_3__ {int mtd; } ;
struct TYPE_4__ {TYPE_1__ nor; scalar_t__ registered; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct cqspi_st*,int ) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int *) ;
 struct cqspi_st* FUNC_4 (struct platform_device*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static int FUNC_7(struct platform_device *VAR_1)
{
 struct cqspi_st *VAR_2 = FUNC_4(VAR_1);
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++)
  if (VAR_2->f_pdata[VAR_3].registered)
   FUNC_3(&VAR_2->f_pdata[VAR_3].nor.mtd);

 FUNC_1(VAR_2, 0);

 if (VAR_2->rx_chan)
  FUNC_2(VAR_2->rx_chan);

 FUNC_0(VAR_2->clk);

 FUNC_6(&VAR_1->dev);
 FUNC_5(&VAR_1->dev);

 return 0;
}
