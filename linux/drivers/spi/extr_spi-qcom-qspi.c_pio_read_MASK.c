
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct TYPE_2__ {unsigned int rem_bytes; int* rx_buf; } ;
struct qcom_qspi {TYPE_1__ xfer; scalar_t__ base; int dev; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (scalar_t__,int*,unsigned int) ;
 unsigned int FUNC_2 (unsigned int,unsigned int) ;
 int FUNC_3 (scalar_t__) ;

__attribute__((used)) static irqreturn_t FUNC_4(struct qcom_qspi *VAR_9)
{
 u32 VAR_10;
 u32 VAR_11;
 unsigned int VAR_12;
 unsigned int VAR_13;
 unsigned int VAR_14;
 u32 *VAR_15;
 u8 *VAR_16;
 int VAR_17;

 VAR_10 = FUNC_3(VAR_9->base + VAR_6);

 if (!(VAR_10 & VAR_1)) {
  FUNC_0(VAR_9->dev, "Spurious IRQ %#x\n", VAR_10);
  return VAR_3;
 }

 VAR_12 = (VAR_10 & VAR_7) >> VAR_8;
 VAR_12 = FUNC_2(VAR_12, VAR_9->xfer.rem_bytes);

 VAR_14 = VAR_12 / VAR_4;
 VAR_13 = VAR_12 % VAR_4;

 if (VAR_14) {
  VAR_15 = VAR_9->xfer.rx_buf;
  VAR_9->xfer.rem_bytes -= VAR_14 * VAR_4;
  FUNC_1(VAR_9->base + VAR_5, VAR_15, VAR_14);
  VAR_9->xfer.rx_buf = VAR_15 + VAR_14;
 }

 if (VAR_13) {
  VAR_16 = VAR_9->xfer.rx_buf;
  VAR_11 = FUNC_3(VAR_9->base + VAR_5);
  VAR_9->xfer.rem_bytes -= VAR_13;
  for (VAR_17 = 0; VAR_17 < VAR_13; VAR_17++)
   *VAR_16++ = VAR_11 >> (VAR_17 * VAR_0);
  VAR_9->xfer.rx_buf = VAR_16;
 }

 return VAR_2;
}
