
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mtk_spi_slave {int dev; scalar_t__ slave_aborted; int xfer_done; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 scalar_t__ FUNC_1 (int *) ;

__attribute__((used)) static int FUNC_2(struct mtk_spi_slave *VAR_1)
{
 if (FUNC_1(&VAR_1->xfer_done) ||
     VAR_1->slave_aborted) {
  FUNC_0(VAR_1->dev, "interrupted\n");
  return -VAR_0;
 }

 return 0;
}
