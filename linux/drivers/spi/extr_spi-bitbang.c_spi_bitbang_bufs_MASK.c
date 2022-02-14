
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spi_transfer {scalar_t__ tx_buf; } ;
struct spi_device {int mode; int master; struct spi_bitbang_cs* controller_state; } ;
struct spi_bitbang_cs {unsigned int nsecs; int (* txrx_bufs ) (struct spi_device*,int ,unsigned int,struct spi_transfer*,unsigned int) ;int txrx_word; } ;
struct spi_bitbang {int (* set_line_direction ) (struct spi_device*,int) ;} ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 struct spi_bitbang* FUNC_0 (int ) ;
 int FUNC_1 (struct spi_device*,int) ;
 int FUNC_2 (struct spi_device*,int ,unsigned int,struct spi_transfer*,unsigned int) ;
 int FUNC_3 (struct spi_device*,int ,unsigned int,struct spi_transfer*,unsigned int) ;

__attribute__((used)) static int FUNC_4(struct spi_device *VAR_3, struct spi_transfer *VAR_4)
{
 struct spi_bitbang_cs *VAR_5 = VAR_3->controller_state;
 unsigned VAR_6 = VAR_5->nsecs;
 struct spi_bitbang *VAR_7;

 VAR_7 = FUNC_0(VAR_3->master);
 if (VAR_7->set_line_direction) {
  int VAR_8;

  VAR_8 = VAR_7->set_line_direction(VAR_3, !!(VAR_4->tx_buf));
  if (VAR_8 < 0)
   return VAR_8;
 }

 if (VAR_3->mode & VAR_0) {
  unsigned VAR_9;

  VAR_9 = VAR_4->tx_buf ? VAR_1 : VAR_2;
  return VAR_5->txrx_bufs(VAR_3, VAR_5->txrx_word, VAR_6, VAR_4, VAR_9);
 }
 return VAR_5->txrx_bufs(VAR_3, VAR_5->txrx_word, VAR_6, VAR_4, 0);
}
