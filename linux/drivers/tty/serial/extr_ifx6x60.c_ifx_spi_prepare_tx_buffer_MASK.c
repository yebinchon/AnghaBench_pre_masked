
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ifx_spi_device {unsigned char* tx_buffer; int spi_more; int (* swap_buf ) (unsigned char*,int,unsigned char*) ;int tty_port; int fifo_lock; int tx_fifo; int spi_slave_cts; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 int FUNC_0 (unsigned char*,int,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,unsigned char*,int,int *) ;
 int FUNC_3 (int,int ) ;
 int FUNC_4 (unsigned char*,int,unsigned char*) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int FUNC_6(struct ifx_spi_device *VAR_3)
{
 int VAR_4;
 int VAR_5;
 int VAR_6;
 unsigned char *VAR_7;

 VAR_7 = VAR_3->tx_buffer;


 VAR_7 += VAR_0;
 VAR_6 = VAR_0;



 VAR_3->spi_more = 0;


 if (!VAR_3->spi_slave_cts) {

  VAR_5 = FUNC_1(&VAR_3->tx_fifo);
  if (VAR_5 != 0) {

   VAR_4 = FUNC_3(VAR_5, VAR_1);
   VAR_4 = FUNC_2(&VAR_3->tx_fifo,
     VAR_7, VAR_4,
     &VAR_3->fifo_lock);


   VAR_7 += VAR_4;
   VAR_6 += VAR_4;
   if (VAR_4 == VAR_5)

    FUNC_5(&VAR_3->tty_port);
   else
    VAR_3->spi_more = 1;
  }
 }


 FUNC_0(VAR_3->tx_buffer,
     VAR_6-VAR_0,
     VAR_3->spi_more);

 VAR_3->swap_buf((VAR_3->tx_buffer), VAR_6,
  &VAR_3->tx_buffer[VAR_2]);
 return VAR_6;
}
