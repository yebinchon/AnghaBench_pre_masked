
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct wilc_spi {int crc_off; } ;
struct wilc {struct wilc_spi* bus_data; int dev; } ;
struct spi_device {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char*) ;
 struct spi_device* FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (struct wilc*,int*,int) ;

__attribute__((used)) static int FUNC_3(struct wilc *VAR_2, u8 *VAR_3, u32 VAR_4)
{
 struct spi_device *VAR_5 = FUNC_1(VAR_2->dev);
 struct wilc_spi *VAR_6 = VAR_2->bus_data;
 int VAR_7, VAR_8;
 int VAR_9 = 1;
 u8 VAR_10, VAR_11, VAR_12[2] = {0};




 VAR_7 = 0;
 do {
  if (VAR_4 <= VAR_0) {
   VAR_8 = VAR_4;
   VAR_11 = 0x3;
  } else {
   VAR_8 = VAR_0;
   if (VAR_7 == 0)
    VAR_11 = 0x1;
   else
    VAR_11 = 0x02;
  }




  VAR_10 = 0xf0;
  VAR_10 |= VAR_11;

  if (FUNC_2(VAR_2, &VAR_10, 1)) {
   FUNC_0(&VAR_5->dev,
    "Failed data block cmd write, bus error...\n");
   VAR_9 = VAR_1;
   break;
  }




  if (FUNC_2(VAR_2, &VAR_3[VAR_7], VAR_8)) {
   FUNC_0(&VAR_5->dev,
    "Failed data block write, bus error...\n");
   VAR_9 = VAR_1;
   break;
  }




  if (!VAR_6->crc_off) {
   if (FUNC_2(VAR_2, VAR_12, 2)) {
    FUNC_0(&VAR_5->dev, "Failed data block crc write, bus error...\n");
    VAR_9 = VAR_1;
    break;
   }
  }




  VAR_7 += VAR_8;
  VAR_4 -= VAR_8;
 } while (VAR_4);

 return VAR_9;
}
