
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct xtfpga_spi {int data; int data_sz; } ;
struct spi_device {int master; } ;


 int FUNC_0 (int,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 struct xtfpga_spi* FUNC_1 (int ) ;
 int FUNC_2 (struct xtfpga_spi*) ;
 int FUNC_3 (struct xtfpga_spi*,int ,int) ;

__attribute__((used)) static u32 FUNC_4(struct spi_device *VAR_2, unsigned VAR_3,
    u32 VAR_4, u8 VAR_5, unsigned VAR_6)
{
 struct xtfpga_spi *VAR_7 = FUNC_1(VAR_2->master);

 VAR_7->data = (VAR_7->data << VAR_5) | (VAR_4 & FUNC_0(VAR_5 - 1, 0));
 VAR_7->data_sz += VAR_5;
 if (VAR_7->data_sz >= 16) {
  FUNC_3(VAR_7, VAR_0,
       VAR_7->data >> (VAR_7->data_sz - 16));
  VAR_7->data_sz -= 16;
  FUNC_3(VAR_7, VAR_1, 1);
  FUNC_2(VAR_7);
  FUNC_3(VAR_7, VAR_1, 0);
 }

 return 0;
}
