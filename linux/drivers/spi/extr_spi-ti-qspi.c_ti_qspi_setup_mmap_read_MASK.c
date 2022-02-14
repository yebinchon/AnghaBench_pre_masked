
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct ti_qspi {int dummy; } ;
struct spi_device {int chip_select; int master; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;


 struct ti_qspi* FUNC_1 (int ) ;
 int FUNC_2 (struct ti_qspi*,int,int ) ;

__attribute__((used)) static void FUNC_3(struct spi_device *VAR_5, u8 VAR_6,
        u8 VAR_7, u8 VAR_8,
        u8 VAR_9)
{
 struct ti_qspi *VAR_10 = FUNC_1(VAR_5->master);
 u32 VAR_11 = VAR_6;

 switch (VAR_7) {
 case 128:
  VAR_11 |= VAR_4;
  break;
 case 129:
  VAR_11 |= VAR_2;
  break;
 default:
  VAR_11 |= VAR_3;
  break;
 }
 VAR_11 |= ((VAR_8 - 1) << VAR_0 |
     VAR_9 << VAR_1);
 FUNC_2(VAR_10, VAR_11,
        FUNC_0(VAR_5->chip_select));
}
