
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct geni_se {int dummy; } ;
struct spi_geni_master {int tx_wm; int oversampling; int dev; scalar_t__ tx_fifo_depth; int fifo_width_bits; struct geni_se se; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int FUNC_0 (unsigned int) ;
 unsigned int FUNC_1 (unsigned int) ;
 int FUNC_2 (int ,char*,unsigned int) ;
 unsigned int FUNC_3 (struct geni_se*) ;
 scalar_t__ FUNC_4 (struct geni_se*) ;
 int FUNC_5 (struct geni_se*) ;
 int FUNC_6 (struct geni_se*,int,scalar_t__) ;
 unsigned int FUNC_7 (struct geni_se*) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ) ;

__attribute__((used)) static int FUNC_10(struct spi_geni_master *VAR_2)
{
 struct geni_se *VAR_3 = &VAR_2->se;
 unsigned int VAR_4, VAR_5, VAR_6, VAR_7;

 FUNC_8(VAR_2->dev);

 VAR_4 = FUNC_7(VAR_3);
 if (VAR_4 != VAR_1) {
  FUNC_2(VAR_2->dev, "Invalid proto %d\n", VAR_4);
  FUNC_9(VAR_2->dev);
  return -VAR_0;
 }
 VAR_2->tx_fifo_depth = FUNC_4(VAR_3);


 VAR_2->fifo_width_bits = FUNC_5(VAR_3);





 FUNC_6(VAR_3, 0x0, VAR_2->tx_fifo_depth - 2);

 VAR_2->tx_wm = 1;
 VAR_7 = FUNC_3(VAR_3);
 VAR_5 = FUNC_0(VAR_7);
 VAR_6 = FUNC_1(VAR_7);

 if (VAR_5 == 1 && VAR_6 == 0)
  VAR_2->oversampling = 2;
 else
  VAR_2->oversampling = 1;

 FUNC_9(VAR_2->dev);
 return 0;
}
