
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct dw_spi {scalar_t__ rx_end; scalar_t__ rx; int master; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct dw_spi*) ;
 int FUNC_1 (struct dw_spi*,int ) ;
 int FUNC_2 (struct dw_spi*) ;
 int FUNC_3 (struct dw_spi*,char*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct dw_spi*,int) ;
 int FUNC_6 (struct dw_spi*,int) ;

__attribute__((used)) static irqreturn_t FUNC_7(struct dw_spi *VAR_7)
{
 u16 VAR_8 = FUNC_1(VAR_7, VAR_1);


 if (VAR_8 & (VAR_6 | VAR_3 | VAR_4)) {
  FUNC_1(VAR_7, VAR_0);
  FUNC_3(VAR_7, "interrupt_transfer: fifo overrun/underrun");
  return VAR_2;
 }

 FUNC_0(VAR_7);
 if (VAR_7->rx_end == VAR_7->rx) {
  FUNC_5(VAR_7, VAR_5);
  FUNC_4(VAR_7->master);
  return VAR_2;
 }
 if (VAR_8 & VAR_5) {
  FUNC_5(VAR_7, VAR_5);
  FUNC_2(VAR_7);

  FUNC_6(VAR_7, VAR_5);
 }

 return VAR_2;
}
