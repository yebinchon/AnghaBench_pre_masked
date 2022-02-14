
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct spi_transfer {unsigned int len; int tx_sg; int * tx_buf; } ;
struct rspi_data {TYPE_1__* ctlr; } ;
struct TYPE_2__ {int dev; scalar_t__ can_dma; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct rspi_data*,struct spi_transfer*) ;
 int FUNC_1 (int *,char*) ;
 unsigned int FUNC_2 (struct rspi_data*,unsigned int) ;
 int FUNC_3 (struct rspi_data*,int *,int *) ;
 int FUNC_4 (struct rspi_data*) ;
 int FUNC_5 (struct rspi_data*,int ) ;

__attribute__((used)) static int FUNC_6(struct rspi_data *VAR_1, struct spi_transfer *VAR_2)
{
 const u8 *VAR_3 = VAR_2->tx_buf;
 unsigned int VAR_4 = VAR_2->len;
 unsigned int VAR_5, VAR_6;
 int VAR_7;

 if (VAR_1->ctlr->can_dma && FUNC_0(VAR_1, VAR_2)) {
  VAR_7 = FUNC_3(VAR_1, &VAR_2->tx_sg, ((void*)0));
  if (VAR_7 != -VAR_0)
   return VAR_7;
 }

 while (VAR_4 > 0) {
  VAR_6 = FUNC_2(VAR_1, VAR_4);
  VAR_7 = FUNC_4(VAR_1);
  if (VAR_7 < 0) {
   FUNC_1(&VAR_1->ctlr->dev, "transmit timeout\n");
   return VAR_7;
  }
  for (VAR_5 = 0; VAR_5 < VAR_6; VAR_5++)
   FUNC_5(VAR_1, *VAR_3++);

  VAR_4 -= VAR_6;
 }


 FUNC_4(VAR_1);

 return 0;
}
