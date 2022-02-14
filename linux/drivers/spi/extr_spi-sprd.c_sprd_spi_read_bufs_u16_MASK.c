
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct sprd_spi {int rx_buf; scalar_t__ base; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (scalar_t__) ;

__attribute__((used)) static int FUNC_1(struct sprd_spi *VAR_1, u32 VAR_2)
{
 u16 *VAR_3 = (u16 *)VAR_1->rx_buf;
 int VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_2; VAR_4++)
  VAR_3[VAR_4] = FUNC_0(VAR_1->base + VAR_0);

 VAR_1->rx_buf += VAR_4 << 1;
 return VAR_4 << 1;
}
