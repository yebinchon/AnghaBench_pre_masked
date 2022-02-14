
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct dw_spi {int reg_io_width; } ;


 int FUNC_0 (struct dw_spi*,int ,int ) ;
 int FUNC_1 (struct dw_spi*,int ,int ) ;

__attribute__((used)) static inline void FUNC_2(struct dw_spi *VAR_0, u32 VAR_1, u32 VAR_2)
{
 switch (VAR_0->reg_io_width) {
 case 2:
  FUNC_1(VAR_0, VAR_1, VAR_2);
  break;
 case 4:
 default:
  FUNC_0(VAR_0, VAR_1, VAR_2);
  break;
 }
}
