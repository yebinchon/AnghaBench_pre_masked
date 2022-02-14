
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct wilc_spi {int nint; scalar_t__ has_thrpt_enh; } ;
struct wilc {struct wilc_spi* bus_data; int dev; } ;
struct spi_device {int dev; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int *,char*,...) ;
 int FUNC_2 (struct wilc*,scalar_t__,int) ;
 struct spi_device* FUNC_3 (int ) ;
 int FUNC_4 (struct wilc*,int,int) ;

__attribute__((used)) static int FUNC_5(struct wilc *VAR_7, u32 VAR_8)
{
 struct spi_device *VAR_9 = FUNC_3(VAR_7->dev);
 struct wilc_spi *VAR_10 = VAR_7->bus_data;
 int VAR_11;
 u32 VAR_12;
 u32 VAR_13;

 if (VAR_10->has_thrpt_enh) {
  return FUNC_2(VAR_7, 0xe844 - VAR_4,
       VAR_8);
 }

 VAR_12 = VAR_8 & (FUNC_0(VAR_1) - 1);
 if (VAR_12) {
  int VAR_14;

  VAR_11 = 1;
  for (VAR_14 = 0; VAR_14 < VAR_10->nint; VAR_14++) {




   if (VAR_12 & 1)
    VAR_11 = FUNC_4(VAR_7,
        0x10c8 + VAR_14 * 4, 1);
   if (!VAR_11)
    break;
   VAR_12 >>= 1;
  }
  if (!VAR_11) {
   FUNC_1(&VAR_9->dev,
    "Failed wilc_spi_write_reg, set reg %x ...\n",
    0x10c8 + VAR_14 * 4);
   return VAR_11;
  }
  for (VAR_14 = VAR_10->nint; VAR_14 < VAR_1; VAR_14++) {
   if (VAR_12 & 1)
    FUNC_1(&VAR_9->dev,
     "Unexpected interrupt cleared %d...\n",
     VAR_14);
   VAR_12 >>= 1;
  }
 }

 VAR_13 = 0;

 if (VAR_8 & VAR_2)
  VAR_13 |= FUNC_0(0);

 if (VAR_8 & VAR_3)
  VAR_13 |= FUNC_0(1);

 VAR_11 = FUNC_4(VAR_7, VAR_6, VAR_13);
 if (!VAR_11) {
  FUNC_1(&VAR_9->dev, "fail write reg vmm_tbl_ctl...\n");
  return VAR_11;
 }

 if (VAR_8 & VAR_0) {



  VAR_11 = FUNC_4(VAR_7, VAR_5, 1);
  if (!VAR_11) {
   FUNC_1(&VAR_9->dev, "fail write reg vmm_core_ctl...\n");
   return VAR_11;
  }
 }

 return VAR_11;
}
