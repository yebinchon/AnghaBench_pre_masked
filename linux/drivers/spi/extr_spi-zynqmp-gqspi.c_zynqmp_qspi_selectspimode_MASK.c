
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct zynqmp_qspi {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;



 int FUNC_0 (int ,char*) ;

__attribute__((used)) static inline u32 FUNC_1(struct zynqmp_qspi *VAR_3,
      u8 VAR_4)
{
 u32 VAR_5 = 0;

 switch (VAR_4) {
 case 130:
  VAR_5 = VAR_0;
  break;
 case 129:
  VAR_5 = VAR_1;
  break;
 case 128:
  VAR_5 = VAR_2;
  break;
 default:
  FUNC_0(VAR_3->dev, "Invalid SPI mode\n");
 }

 return VAR_5;
}
