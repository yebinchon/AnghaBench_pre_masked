
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct spi_transfer {int len; int * rx_buf; int delay_usecs; int * tx_buf; } ;
struct spi_message {int dummy; } ;
struct if_spi_card {unsigned int spu_port_delay; unsigned int spu_reg_delay; int spi; scalar_t__ use_dummy_writes; } ;
typedef int reg_trans ;
typedef int reg_out ;
typedef int dummy_trans ;
typedef int data_trans ;
typedef int __le16 ;


 int FUNC_0 (int) ;
 int FUNC_1 (int,int) ;
 int VAR_0 ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct spi_transfer*,int ,int) ;
 int FUNC_4 (struct spi_transfer*,struct spi_message*) ;
 int FUNC_5 (struct spi_message*) ;
 int FUNC_6 (int ,struct spi_message*) ;
 scalar_t__ FUNC_7 (int) ;
 int FUNC_8 (struct if_spi_card*) ;
 int FUNC_9 (struct if_spi_card*) ;

__attribute__((used)) static int FUNC_10(struct if_spi_card *VAR_1, u16 VAR_2, u8 *VAR_3, int VAR_4)
{
 unsigned int VAR_5;
 int VAR_6 = 0;
 __le16 VAR_7 = FUNC_2(VAR_2 | VAR_0);
 struct spi_message VAR_8;
 struct spi_transfer VAR_9;
 struct spi_transfer VAR_10;
 struct spi_transfer VAR_11;





 FUNC_0(VAR_4 & 0x1);

 FUNC_9(VAR_1);

 FUNC_5(&VAR_8);
 FUNC_3(&VAR_9, 0, sizeof(VAR_9));
 FUNC_3(&VAR_10, 0, sizeof(VAR_10));
 FUNC_3(&VAR_11, 0, sizeof(VAR_11));


 VAR_9.tx_buf = &VAR_7;
 VAR_9.len = sizeof(VAR_7);
 FUNC_4(&VAR_9, &VAR_8);

 VAR_5 = FUNC_7(VAR_2) ? VAR_1->spu_port_delay :
      VAR_1->spu_reg_delay;
 if (VAR_1->use_dummy_writes) {

  VAR_10.len = VAR_5 / 8;
  FUNC_4(&VAR_10, &VAR_8);
 } else {

  VAR_9.delay_usecs =
   FUNC_1((100 + (VAR_5 * 10)), 1000);
 }


 VAR_11.rx_buf = VAR_3;
 VAR_11.len = VAR_4;
 FUNC_4(&VAR_11, &VAR_8);

 VAR_6 = FUNC_6(VAR_1->spi, &VAR_8);
 FUNC_8(VAR_1);
 return VAR_6;
}
