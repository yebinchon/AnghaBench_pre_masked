
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct spi_transfer {int speed_hz; } ;
struct spi_message {struct spi_device* spi; } ;
struct spi_device {int mode; } ;
struct hspi_priv {int clk; struct device* dev; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct device*,char*,int ,int) ;
 int FUNC_3 (struct hspi_priv*,int ,int) ;

__attribute__((used)) static void FUNC_4(struct hspi_priv *VAR_5,
     struct spi_message *VAR_6,
     struct spi_transfer *VAR_7)
{
 struct spi_device *VAR_8 = VAR_6->spi;
 struct device *VAR_9 = VAR_5->dev;
 u32 VAR_10, VAR_11;
 u32 VAR_12, VAR_13, VAR_14, VAR_15;




 VAR_14 = ~0;
 VAR_13 = 0;
 VAR_10 = 0;
 for (VAR_11 = 0x00; VAR_11 <= 0x3F; VAR_11++) {
  VAR_12 = FUNC_1(VAR_5->clk);


  if (VAR_11 & (1 << 5))
   VAR_12 /= 128;
  else
   VAR_12 /= 16;


  VAR_12 /= (((VAR_11 & 0x1F) + 1) * 2);


  VAR_15 = FUNC_0(VAR_7->speed_hz - VAR_12);
  if (VAR_15 < VAR_14) {
   VAR_14 = VAR_15;
   VAR_10 = VAR_11;
   VAR_13 = VAR_12;
  }
 }

 if (VAR_8->mode & VAR_1)
  VAR_10 |= 1 << 7;
 if (VAR_8->mode & VAR_2)
  VAR_10 |= 1 << 6;

 FUNC_2(VAR_9, "speed %d/%d\n", VAR_7->speed_hz, VAR_13);

 FUNC_3(VAR_5, VAR_0, VAR_10);
 FUNC_3(VAR_5, VAR_4, 0x0);
 FUNC_3(VAR_5, VAR_3, 0x21);
}
