
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spi_mpc8xxx_cs {int get_tx; int get_rx; scalar_t__ tx_shift; scalar_t__ rx_shift; } ;
struct spi_device {int mode; } ;
struct mpc8xxx_spi {int get_tx; int get_rx; scalar_t__ tx_shift; scalar_t__ rx_shift; int (* set_shifts ) (scalar_t__*,scalar_t__*,int,int) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (scalar_t__*,scalar_t__*,int,int) ;

__attribute__((used)) static int FUNC_1(struct spi_mpc8xxx_cs *VAR_8,
    struct spi_device *VAR_9,
    struct mpc8xxx_spi *VAR_10,
    int VAR_11)
{
 VAR_8->rx_shift = 0;
 VAR_8->tx_shift = 0;
 if (VAR_11 <= 8) {
  VAR_8->get_rx = VAR_4;
  VAR_8->get_tx = VAR_7;
 } else if (VAR_11 <= 16) {
  VAR_8->get_rx = VAR_2;
  VAR_8->get_tx = VAR_5;
 } else if (VAR_11 <= 32) {
  VAR_8->get_rx = VAR_3;
  VAR_8->get_tx = VAR_6;
 } else
  return -VAR_0;

 if (VAR_10->set_shifts)
  VAR_10->set_shifts(&VAR_8->rx_shift, &VAR_8->tx_shift,
     VAR_11,
     !(VAR_9->mode & VAR_1));

 VAR_10->rx_shift = VAR_8->rx_shift;
 VAR_10->tx_shift = VAR_8->tx_shift;
 VAR_10->get_rx = VAR_8->get_rx;
 VAR_10->get_tx = VAR_8->get_tx;

 return VAR_11;
}
