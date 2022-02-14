
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct spi_master {int dummy; } ;
struct geni_se {scalar_t__ base; } ;
struct spi_geni_master {scalar_t__ cur_mcmd; int lock; int xfer_done; int cur_bits_per_word; scalar_t__ rx_rem_bytes; int dev; scalar_t__ tx_rem_bytes; struct geni_se se; } ;
typedef int irqreturn_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,char*,scalar_t__,int ) ;
 int FUNC_2 (struct spi_geni_master*) ;
 int FUNC_3 (struct spi_geni_master*) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (struct spi_master*) ;
 struct spi_geni_master* FUNC_6 (struct spi_master*) ;
 int FUNC_7 (int *,unsigned long) ;
 int FUNC_8 (int *,unsigned long) ;
 int FUNC_9 (int,scalar_t__) ;

__attribute__((used)) static irqreturn_t FUNC_10(int VAR_14, void *VAR_15)
{
 struct spi_master *VAR_16 = VAR_15;
 struct spi_geni_master *VAR_17 = FUNC_6(VAR_16);
 struct geni_se *VAR_18 = &VAR_17->se;
 u32 VAR_19;
 unsigned long VAR_20;

 if (VAR_17->cur_mcmd == VAR_1)
  return VAR_4;

 FUNC_7(&VAR_17->lock, VAR_20);
 VAR_19 = FUNC_4(VAR_18->base + VAR_12);

 if ((VAR_19 & VAR_9) || (VAR_19 & VAR_8))
  FUNC_2(VAR_17);

 if (VAR_19 & VAR_10)
  FUNC_3(VAR_17);

 if (VAR_19 & VAR_7) {
  if (VAR_17->cur_mcmd == VAR_2)
   FUNC_5(VAR_16);
  else if (VAR_17->cur_mcmd == VAR_0)
   FUNC_0(&VAR_17->xfer_done);
  VAR_17->cur_mcmd = VAR_1;
  if (VAR_17->tx_rem_bytes) {
   FUNC_9(0, VAR_18->base + VAR_13);
   FUNC_1(VAR_17->dev, "Premature done. tx_rem = %d bpw%d\n",
    VAR_17->tx_rem_bytes, VAR_17->cur_bits_per_word);
  }
  if (VAR_17->rx_rem_bytes)
   FUNC_1(VAR_17->dev, "Premature done. rx_rem = %d bpw%d\n",
    VAR_17->rx_rem_bytes, VAR_17->cur_bits_per_word);
 }

 if ((VAR_19 & VAR_6) || (VAR_19 & VAR_5)) {
  VAR_17->cur_mcmd = VAR_1;
  FUNC_0(&VAR_17->xfer_done);
 }

 FUNC_9(VAR_19, VAR_18->base + VAR_11);
 FUNC_8(&VAR_17->lock, VAR_20);
 return VAR_3;
}
