
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ ulong ;
typedef int u32 ;
struct zynqmp_qspi {int genfifobus; int genfifocs; int dev; } ;
struct spi_device {int master; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 () ;
 int FUNC_1 (int ,char*) ;
 scalar_t__ VAR_9 ;
 scalar_t__ FUNC_2 (int) ;
 struct zynqmp_qspi* FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (scalar_t__,scalar_t__) ;
 int FUNC_5 (struct zynqmp_qspi*,int ) ;
 int FUNC_6 (struct zynqmp_qspi*,int ,int) ;

__attribute__((used)) static void FUNC_7(struct spi_device *VAR_10, bool VAR_11)
{
 struct zynqmp_qspi *VAR_12 = FUNC_3(VAR_10->master);
 ulong VAR_13;
 u32 VAR_14 = 0x0, VAR_15;

 VAR_14 |= VAR_4;
 VAR_14 |= VAR_12->genfifobus;

 if (!VAR_11) {
  VAR_14 |= VAR_12->genfifocs;
  VAR_14 |= VAR_3;
 } else {
  VAR_14 |= VAR_2;
 }

 FUNC_6(VAR_12, VAR_5, VAR_14);


 FUNC_6(VAR_12, VAR_5, 0x0);


 FUNC_6(VAR_12, VAR_1,
   FUNC_5(VAR_12, VAR_1) |
   VAR_0);

 VAR_13 = VAR_9 + FUNC_2(1000);


 do {
  VAR_15 = FUNC_5(VAR_12, VAR_7);

  if ((VAR_15 & VAR_6) &&
   (VAR_15 & VAR_8))
   break;
  else
   FUNC_0();
 } while (!FUNC_4(VAR_9, VAR_13));

 if (FUNC_4(VAR_9, VAR_13))
  FUNC_1(VAR_12->dev, "Chip select timed out\n");
}
