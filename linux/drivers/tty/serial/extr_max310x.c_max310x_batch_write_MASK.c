
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct uart_port {int dev; } ;
struct spi_transfer {int len; int * tx_buf; } ;
struct max310x_one {int wr_header; } ;


 int FUNC_0 (struct spi_transfer*) ;
 int FUNC_1 (int ,struct spi_transfer*,int ) ;
 struct max310x_one* FUNC_2 (struct uart_port*) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4(struct uart_port *VAR_0, u8 *VAR_1, unsigned int VAR_2)
{
 struct max310x_one *VAR_3 = FUNC_2(VAR_0);
 struct spi_transfer VAR_4[] = {
  {
   .tx_buf = &VAR_3->wr_header,
   .len = sizeof(VAR_3->wr_header),
  }, {
   .tx_buf = VAR_1,
   .len = VAR_2,
  }
 };
 FUNC_1(FUNC_3(VAR_0->dev), VAR_4, FUNC_0(VAR_4));
}
