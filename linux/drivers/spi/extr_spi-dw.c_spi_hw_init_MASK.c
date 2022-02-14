
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct dw_spi {int fifo_len; scalar_t__ cs_override; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct device*,char*,int) ;
 int FUNC_1 (struct dw_spi*,int ) ;
 int FUNC_2 (struct dw_spi*,int ,int) ;
 int FUNC_3 (struct dw_spi*) ;

__attribute__((used)) static void FUNC_4(struct device *VAR_2, struct dw_spi *VAR_3)
{
 FUNC_3(VAR_3);





 if (!VAR_3->fifo_len) {
  u32 VAR_4;

  for (VAR_4 = 1; VAR_4 < 256; VAR_4++) {
   FUNC_2(VAR_3, VAR_1, VAR_4);
   if (VAR_4 != FUNC_1(VAR_3, VAR_1))
    break;
  }
  FUNC_2(VAR_3, VAR_1, 0);

  VAR_3->fifo_len = (VAR_4 == 1) ? 0 : VAR_4;
  FUNC_0(VAR_2, "Detected FIFO size: %u bytes\n", VAR_3->fifo_len);
 }


 if (VAR_3->cs_override)
  FUNC_2(VAR_3, VAR_0, 0xF);
}
