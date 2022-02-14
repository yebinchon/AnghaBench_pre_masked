
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct spi_info {int clk_div; int spi_clock; } ;
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
 int FUNC_0 (struct rtsx_chip*,int ,int,int) ;
 int FUNC_1 (struct rtsx_chip*,int ) ;
 int FUNC_2 (struct rtsx_chip*) ;
 int FUNC_3 (struct rtsx_chip*,int ) ;
 int FUNC_4 (int) ;

__attribute__((used)) static int FUNC_5(struct rtsx_chip *VAR_9)
{
 struct spi_info *VAR_10 = &VAR_9->spi;
 int VAR_11;

 VAR_11 = FUNC_0(VAR_9, VAR_4, 0xFF,
         (u8)(VAR_10->clk_div >> 8));
 if (VAR_11)
  return VAR_11;
 VAR_11 = FUNC_0(VAR_9, VAR_3, 0xFF,
         (u8)(VAR_10->clk_div));
 if (VAR_11)
  return VAR_11;

 VAR_11 = FUNC_3(VAR_9, VAR_10->spi_clock);
 if (VAR_11 != VAR_8)
  return VAR_7;

 VAR_11 = FUNC_1(VAR_9, VAR_2);
 if (VAR_11 != VAR_8)
  return VAR_7;

 VAR_11 = FUNC_0(VAR_9, VAR_0, VAR_5,
         VAR_5);
 if (VAR_11)
  return VAR_11;
 VAR_11 = FUNC_0(VAR_9, VAR_1, VAR_6,
         VAR_6);
 if (VAR_11)
  return VAR_11;

 FUNC_4(10);

 VAR_11 = FUNC_2(VAR_9);
 if (VAR_11 != VAR_8)
  return VAR_7;

 return VAR_8;
}
