
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spi_qup {int w_size; scalar_t__ rx_bytes; scalar_t__ tx_bytes; } ;


 unsigned int FUNC_0 (scalar_t__,int ) ;
 scalar_t__ FUNC_1 (struct spi_qup*) ;

__attribute__((used)) static bool FUNC_2(struct spi_qup *VAR_0)
{
 unsigned int VAR_1, VAR_2;

 VAR_1 = FUNC_0(FUNC_1(VAR_0) -
        VAR_0->tx_bytes, VAR_0->w_size);

 VAR_2 = FUNC_0(FUNC_1(VAR_0) -
        VAR_0->rx_bytes, VAR_0->w_size);

 return VAR_1 || VAR_2;
}
