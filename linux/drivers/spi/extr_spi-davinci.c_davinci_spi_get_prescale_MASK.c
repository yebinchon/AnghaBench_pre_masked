
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct davinci_spi {int prescaler_limit; int clk; } ;


 int FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;

__attribute__((used)) static inline int FUNC_2(struct davinci_spi *VAR_1,
       u32 VAR_2)
{
 int VAR_3;


 VAR_3 = FUNC_0(FUNC_1(VAR_1->clk), VAR_2) - 1;

 if (VAR_3 < VAR_1->prescaler_limit || VAR_3 > 255)
  return -VAR_0;

 return VAR_3;
}
