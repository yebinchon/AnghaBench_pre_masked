
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef scalar_t__ u32 ;
typedef int t ;
struct spi_transfer {int len; int * rx_buf; int * tx_buf; } ;
struct spi_message {int dummy; } ;
struct pcap_chip {scalar_t__ buf; int spi; } ;


 int FUNC_0 (struct spi_transfer*,int ,int) ;
 int FUNC_1 (struct spi_transfer*,struct spi_message*) ;
 int FUNC_2 (struct spi_message*) ;
 int FUNC_3 (int ,struct spi_message*) ;

__attribute__((used)) static int FUNC_4(struct pcap_chip *VAR_0, u32 *VAR_1)
{
 struct spi_transfer VAR_2;
 struct spi_message VAR_3;
 int VAR_4;

 FUNC_0(&VAR_2, 0, sizeof(VAR_2));
 FUNC_2(&VAR_3);
 VAR_2.len = sizeof(u32);
 FUNC_1(&VAR_2, &VAR_3);

 VAR_0->buf = *VAR_1;
 VAR_2.tx_buf = (u8 *) &VAR_0->buf;
 VAR_2.rx_buf = (u8 *) &VAR_0->buf;
 VAR_4 = FUNC_3(VAR_0->spi, &VAR_3);

 if (VAR_4 == 0)
  *VAR_1 = VAR_0->buf;

 return VAR_4;
}
