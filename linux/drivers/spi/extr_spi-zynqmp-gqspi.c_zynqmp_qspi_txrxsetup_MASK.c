
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct zynqmp_qspi {scalar_t__ mode; scalar_t__ bytes_to_receive; scalar_t__ bytes_to_transfer; int * rxbuf; int * txbuf; } ;
struct spi_transfer {scalar_t__ len; int rx_nbits; int tx_nbits; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct zynqmp_qspi*) ;
 int FUNC_1 (struct zynqmp_qspi*,int ) ;
 int FUNC_2 (struct zynqmp_qspi*,int ,int ) ;
 int FUNC_3 (struct zynqmp_qspi*,int ) ;
 int FUNC_4 (struct zynqmp_qspi*,int ) ;

__attribute__((used)) static void FUNC_5(struct zynqmp_qspi *VAR_8,
      struct spi_transfer *VAR_9,
      u32 *VAR_10)
{
 u32 VAR_11;


 if ((VAR_8->txbuf != ((void*)0)) && (VAR_8->rxbuf == ((void*)0))) {

  *VAR_10 &= ~VAR_3;
  *VAR_10 |= VAR_2;
  *VAR_10 |= VAR_4;
  *VAR_10 |=
   FUNC_4(VAR_8, VAR_9->tx_nbits);
  VAR_8->bytes_to_transfer = VAR_9->len;
  if (VAR_8->mode == VAR_5) {
   VAR_11 = FUNC_1(VAR_8,
       VAR_1);
   VAR_11 &= ~VAR_0;
   FUNC_2(VAR_8, VAR_1,
        VAR_11);
   VAR_8->mode = VAR_6;
  }
  FUNC_3(VAR_8, VAR_7);

  VAR_8->bytes_to_receive = 0;
 } else if ((VAR_8->txbuf == ((void*)0)) && (VAR_8->rxbuf != ((void*)0))) {



  *VAR_10 &= ~VAR_4;

  *VAR_10 |= VAR_2;
  *VAR_10 |= VAR_3;
  *VAR_10 |=
   FUNC_4(VAR_8, VAR_9->rx_nbits);
  VAR_8->bytes_to_transfer = 0;
  VAR_8->bytes_to_receive = VAR_9->len;
  FUNC_0(VAR_8);
 }
}
