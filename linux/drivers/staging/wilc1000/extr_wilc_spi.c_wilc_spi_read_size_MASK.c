
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct wilc_spi {scalar_t__ has_thrpt_enh; } ;
struct wilc {struct wilc_spi* bus_data; int dev; } ;
struct spi_device {int dev; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (struct wilc*,scalar_t__,int*) ;
 struct spi_device* FUNC_2 (int ) ;
 int FUNC_3 (struct wilc*,int ,int*) ;

__attribute__((used)) static int FUNC_4(struct wilc *VAR_3, u32 *VAR_4)
{
 struct spi_device *VAR_5 = FUNC_2(VAR_3->dev);
 struct wilc_spi *VAR_6 = VAR_3->bus_data;
 int VAR_7;

 if (VAR_6->has_thrpt_enh) {
  VAR_7 = FUNC_1(VAR_3, 0xe840 - VAR_1,
     VAR_4);
  *VAR_4 = *VAR_4 & VAR_0;
 } else {
  u32 VAR_8;
  u32 VAR_9;

  VAR_7 = FUNC_3(VAR_3, VAR_2,
     &VAR_9);
  if (!VAR_7) {
   FUNC_0(&VAR_5->dev,
    "Failed read WILC_VMM_TO_HOST_SIZE ...\n");
   return VAR_7;
  }
  VAR_8 = (VAR_9 >> 2) & VAR_0;
  *VAR_4 = VAR_8;
 }

 return VAR_7;
}
