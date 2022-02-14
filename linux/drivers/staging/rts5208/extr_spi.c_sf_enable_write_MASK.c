
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct spi_info {int write_en; } ;
struct rtsx_chip {struct spi_info spi; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_0 (struct rtsx_chip*,int ,int ,int,int) ;
 int FUNC_1 (struct rtsx_chip*) ;
 int FUNC_2 (struct rtsx_chip*) ;
 int FUNC_3 (struct rtsx_chip*,int ,int) ;
 int FUNC_4 (struct rtsx_chip*,int ) ;

__attribute__((used)) static int FUNC_5(struct rtsx_chip *VAR_13, u8 VAR_14)
{
 struct spi_info *VAR_15 = &VAR_13->spi;
 int VAR_16;

 if (!VAR_15->write_en)
  return VAR_11;

 FUNC_2(VAR_13);

 FUNC_0(VAR_13, VAR_12, VAR_3, 0xFF, VAR_14);
 FUNC_0(VAR_13, VAR_12, VAR_2, 0xFF,
       VAR_4 | VAR_1);
 FUNC_0(VAR_13, VAR_12, VAR_7, 0xFF,
       VAR_9 | VAR_5);
 FUNC_0(VAR_13, VAR_0, VAR_7, VAR_8,
       VAR_8);

 VAR_16 = FUNC_3(VAR_13, 0, 100);
 if (VAR_16 < 0) {
  FUNC_1(VAR_13);
  FUNC_4(VAR_13, VAR_6);
  return VAR_10;
 }

 return VAR_11;
}
