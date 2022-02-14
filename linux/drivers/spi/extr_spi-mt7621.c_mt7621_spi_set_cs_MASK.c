
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct spi_device {int chip_select; } ;
struct mt7621_spi {scalar_t__ pending_write; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct mt7621_spi*,int ) ;
 int FUNC_2 (struct mt7621_spi*,int ,int) ;
 struct mt7621_spi* FUNC_3 (struct spi_device*) ;

__attribute__((used)) static void FUNC_4(struct spi_device *VAR_5, int VAR_6)
{
 struct mt7621_spi *VAR_7 = FUNC_3(VAR_5);
 int VAR_8 = VAR_5->chip_select;
 u32 VAR_9 = 0;
 u32 VAR_10;






 VAR_10 = FUNC_1(VAR_7, VAR_3);
 VAR_10 |= VAR_2 | VAR_1;
 VAR_10 &= ~VAR_0;
 FUNC_2(VAR_7, VAR_3, VAR_10);

 VAR_7->pending_write = 0;

 if (VAR_6)
  VAR_9 = FUNC_0(VAR_8);
 FUNC_2(VAR_7, VAR_4, VAR_9);
}
