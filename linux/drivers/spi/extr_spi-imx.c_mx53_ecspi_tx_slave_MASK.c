
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int val ;
typedef int u8 ;
typedef scalar_t__ u32 ;
struct spi_imx_data {int count; int tx_buf; scalar_t__ base; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 (int *,int,int) ;
 int FUNC_2 (scalar_t__,scalar_t__) ;

__attribute__((used)) static void FUNC_3(struct spi_imx_data *VAR_1)
{
 u32 VAR_2 = 0;
 int VAR_3 = VAR_1->count % sizeof(VAR_2);

 if (!VAR_3)
  VAR_3 = sizeof(VAR_2);

 if (VAR_1->tx_buf) {
  FUNC_1(((u8 *)&VAR_2) + sizeof(VAR_2) - VAR_3,
         VAR_1->tx_buf, VAR_3);
  VAR_2 = FUNC_0(VAR_2);
  VAR_1->tx_buf += VAR_3;
 }

 VAR_1->count -= VAR_3;

 FUNC_2(VAR_2, VAR_1->base + VAR_0);
}
