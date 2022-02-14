
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dw_spi {scalar_t__ rx_end; scalar_t__ rx; } ;


 int FUNC_0 () ;
 int FUNC_1 (struct dw_spi*) ;
 int FUNC_2 (struct dw_spi*) ;

__attribute__((used)) static int FUNC_3(struct dw_spi *VAR_0)
{
 do {
  FUNC_2(VAR_0);
  FUNC_1(VAR_0);
  FUNC_0();
 } while (VAR_0->rx_end > VAR_0->rx);

 return 0;
}
