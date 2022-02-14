
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lantiq_ssc_spi {unsigned int rx_todo; int rx_fifo_size; } ;


 int VAR_0 ;
 int FUNC_0 (struct lantiq_ssc_spi*,unsigned int,int ) ;

__attribute__((used)) static void FUNC_1(struct lantiq_ssc_spi *VAR_1)
{
 unsigned int VAR_2, VAR_3;






 VAR_2 = VAR_1->rx_todo;
 VAR_3 = VAR_1->rx_fifo_size * 4;
 if (VAR_2 > VAR_3)
  VAR_2 = VAR_3;

 FUNC_0(VAR_1, VAR_2, VAR_0);
}
