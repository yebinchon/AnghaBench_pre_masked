
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct zynqmp_qspi {scalar_t__ mode; scalar_t__ bytes_to_receive; scalar_t__ bytes_to_transfer; } ;
struct spi_master {int dummy; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_0 (struct spi_master*) ;
 struct zynqmp_qspi* FUNC_1 (struct spi_master*) ;
 int FUNC_2 (struct zynqmp_qspi*,int ) ;
 int FUNC_3 (struct zynqmp_qspi*,int ,int) ;
 int FUNC_4 (struct zynqmp_qspi*) ;
 int FUNC_5 (struct zynqmp_qspi*,int ) ;
 int FUNC_6 (struct zynqmp_qspi*,int ) ;

__attribute__((used)) static irqreturn_t FUNC_7(int VAR_15, void *VAR_16)
{
 struct spi_master *VAR_17 = VAR_16;
 struct zynqmp_qspi *VAR_18 = FUNC_1(VAR_17);
 int VAR_19 = VAR_14;
 u32 VAR_20, VAR_21, VAR_22 = 0;

 VAR_20 = FUNC_2(VAR_18, VAR_6);
 FUNC_3(VAR_18, VAR_6, VAR_20);
 VAR_21 = (VAR_20 & ~(FUNC_2(VAR_18, VAR_3)));


 if (VAR_18->mode == VAR_8) {
  VAR_22 =
   FUNC_2(VAR_18, VAR_10);
  FUNC_3(VAR_18, VAR_10,
        VAR_22);
 }

 if (VAR_21 & VAR_7) {
  FUNC_5(VAR_18, VAR_12);
  VAR_19 = VAR_13;
 }

 if (VAR_22 & VAR_9) {
  FUNC_4(VAR_18);
  VAR_19 = VAR_13;
 } else if (!(VAR_21 & VAR_2) &&
   (VAR_21 & VAR_1)) {
  FUNC_6(VAR_18, VAR_11);
  VAR_19 = VAR_13;
 }

 if ((VAR_18->bytes_to_receive == 0) && (VAR_18->bytes_to_transfer == 0)
   && ((VAR_20 & VAR_4) == VAR_4)) {
  FUNC_3(VAR_18, VAR_0, VAR_5);
  FUNC_0(VAR_17);
  VAR_19 = VAR_13;
 }
 return VAR_19;
}
