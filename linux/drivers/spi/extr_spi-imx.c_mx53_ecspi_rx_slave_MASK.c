
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int val ;
typedef int u8 ;
typedef int u32 ;
struct spi_imx_data {int slave_burst; int remainder; scalar_t__ rx_buf; scalar_t__ base; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (scalar_t__,int *,int) ;
 int FUNC_2 (scalar_t__) ;

__attribute__((used)) static void FUNC_3(struct spi_imx_data *VAR_1)
{
 u32 VAR_2 = FUNC_0(FUNC_2(VAR_1->base + VAR_0));

 if (VAR_1->rx_buf) {
  int VAR_3 = VAR_1->slave_burst % sizeof(VAR_2);

  if (!VAR_3)
   VAR_3 = sizeof(VAR_2);

  FUNC_1(VAR_1->rx_buf,
         ((u8 *)&VAR_2) + sizeof(VAR_2) - VAR_3, VAR_3);

  VAR_1->rx_buf += VAR_3;
  VAR_1->slave_burst -= VAR_3;
 }

 VAR_1->remainder -= sizeof(u32);
}
