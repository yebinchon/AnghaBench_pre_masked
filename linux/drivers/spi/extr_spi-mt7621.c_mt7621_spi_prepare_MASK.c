
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct spi_device {int mode; int dev; } ;
struct mt7621_spi {unsigned int speed; int sys_freq; } ;


 int FUNC_0 (int ,unsigned int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (int *,char*,int) ;
 int FUNC_2 (struct mt7621_spi*,int ) ;
 int FUNC_3 (struct mt7621_spi*,int ,int) ;
 struct mt7621_spi* FUNC_4 (struct spi_device*) ;

__attribute__((used)) static int FUNC_5(struct spi_device *VAR_8, unsigned int VAR_9)
{
 struct mt7621_spi *VAR_10 = FUNC_4(VAR_8);
 u32 VAR_11;
 u32 VAR_12;

 FUNC_1(&VAR_8->dev, "speed:%u\n", VAR_9);

 VAR_11 = FUNC_0(VAR_10->sys_freq, VAR_9);
 FUNC_1(&VAR_8->dev, "rate-1:%u\n", VAR_11);

 if (VAR_11 > 4097)
  return -VAR_0;

 if (VAR_11 < 2)
  VAR_11 = 2;

 VAR_12 = FUNC_2(VAR_10, VAR_6);
 VAR_12 &= ~VAR_1;
 VAR_12 |= (VAR_11 - 2) << VAR_2;
 VAR_10->speed = VAR_9;

 VAR_12 &= ~VAR_5;
 if (VAR_8->mode & VAR_7)
  VAR_12 |= VAR_5;






 VAR_12 &= ~(VAR_3 | VAR_4);

 FUNC_3(VAR_10, VAR_6, VAR_12);

 return 0;
}
