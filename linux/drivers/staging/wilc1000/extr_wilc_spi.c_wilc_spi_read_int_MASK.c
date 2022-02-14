
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct wilc_spi {int nint; scalar_t__ has_thrpt_enh; } ;
struct wilc {struct wilc_spi* bus_data; int dev; } ;
struct spi_device {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,char*,...) ;
 int FUNC_1 (struct wilc*,scalar_t__,int*) ;
 struct spi_device* FUNC_2 (int ) ;
 int FUNC_3 (struct wilc*,int,int*) ;

__attribute__((used)) static int FUNC_4(struct wilc *VAR_4, u32 *VAR_5)
{
 struct spi_device *VAR_6 = FUNC_2(VAR_4->dev);
 struct wilc_spi *VAR_7 = VAR_4->bus_data;
 int VAR_8;
 u32 VAR_9;
 u32 VAR_10;
 bool VAR_11;
 int VAR_12;
 u32 VAR_13;
 u32 VAR_14;
 int VAR_15 = VAR_0 + 5;

 if (VAR_7->has_thrpt_enh)
  return FUNC_1(VAR_4, 0xe840 - VAR_2,
      VAR_5);
 VAR_8 = FUNC_3(VAR_4, VAR_3, &VAR_10);
 if (!VAR_8) {
  FUNC_0(&VAR_6->dev,
   "Failed read WILC_VMM_TO_HOST_SIZE ...\n");
  return VAR_8;
 }
 VAR_9 = (VAR_10 >> 2) & VAR_1;

 VAR_12 = 0;
 do {
  FUNC_3(VAR_4, 0x1a90, &VAR_14);
  VAR_9 |= ((VAR_14 >> 27) << VAR_0);

  if (VAR_7->nint > 5) {
   FUNC_3(VAR_4, 0x1a94, &VAR_14);
   VAR_9 |= (((VAR_14 >> 0) & 0x7) << VAR_15);
  }

  VAR_13 = ~((1ul << VAR_7->nint) - 1);

  VAR_11 = (VAR_9 >> VAR_0) & VAR_13;
  if (VAR_11) {
   FUNC_0(&VAR_6->dev,
    "Unexpected interrupt(2):j=%d,tmp=%x,mask=%x\n",
    VAR_12, VAR_9, VAR_13);
  }

  VAR_12++;
 } while (VAR_11);

 *VAR_5 = VAR_9;

 return VAR_8;
}
