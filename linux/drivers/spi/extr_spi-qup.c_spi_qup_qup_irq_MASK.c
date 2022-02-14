
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct spi_qup {int error; int done; int mode; scalar_t__ base; int lock; int dev; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 scalar_t__ VAR_13 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (struct spi_qup*) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (struct spi_qup*,int*) ;
 int FUNC_6 (struct spi_qup*) ;
 int FUNC_7 (int *,unsigned long) ;
 int FUNC_8 (int *,unsigned long) ;
 int FUNC_9 (int,scalar_t__) ;

__attribute__((used)) static irqreturn_t FUNC_10(int VAR_14, void *VAR_15)
{
 struct spi_qup *VAR_16 = VAR_15;
 u32 VAR_17, VAR_18, VAR_19;
 unsigned long VAR_20;
 int VAR_21 = 0;

 VAR_18 = FUNC_2(VAR_16->base + VAR_2);
 VAR_19 = FUNC_2(VAR_16->base + VAR_13);
 VAR_17 = FUNC_2(VAR_16->base + VAR_7);

 FUNC_9(VAR_18, VAR_16->base + VAR_2);
 FUNC_9(VAR_19, VAR_16->base + VAR_13);

 if (VAR_18) {
  if (VAR_18 & VAR_5)
   FUNC_1(VAR_16->dev, "OUTPUT_OVER_RUN\n");
  if (VAR_18 & VAR_4)
   FUNC_1(VAR_16->dev, "INPUT_UNDER_RUN\n");
  if (VAR_18 & VAR_6)
   FUNC_1(VAR_16->dev, "OUTPUT_UNDER_RUN\n");
  if (VAR_18 & VAR_3)
   FUNC_1(VAR_16->dev, "INPUT_OVER_RUN\n");

  VAR_21 = -VAR_0;
 }

 if (VAR_19) {
  if (VAR_19 & VAR_11)
   FUNC_1(VAR_16->dev, "CLK_OVER_RUN\n");
  if (VAR_19 & VAR_12)
   FUNC_1(VAR_16->dev, "CLK_UNDER_RUN\n");

  VAR_21 = -VAR_0;
 }

 FUNC_7(&VAR_16->lock, VAR_20);
 if (!VAR_16->error)
  VAR_16->error = VAR_21;
 FUNC_8(&VAR_16->lock, VAR_20);

 if (FUNC_4(VAR_16->mode)) {
  FUNC_9(VAR_17, VAR_16->base + VAR_7);
 } else {
  if (VAR_17 & VAR_8)
   FUNC_5(VAR_16, &VAR_17);

  if (VAR_17 & VAR_10)
   FUNC_6(VAR_16);

  if (!FUNC_3(VAR_16))
   FUNC_0(&VAR_16->done);
 }

 if (VAR_21)
  FUNC_0(&VAR_16->done);

 if (VAR_17 & VAR_9) {
  if (!FUNC_4(VAR_16->mode)) {
   if (FUNC_3(VAR_16))
    return VAR_1;
  }
  FUNC_0(&VAR_16->done);
 }

 return VAR_1;
}
