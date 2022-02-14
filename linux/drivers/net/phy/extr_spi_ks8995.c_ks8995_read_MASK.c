
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int t ;
struct spi_transfer {int len; char* rx_buf; int * tx_buf; } ;
struct spi_message {int dummy; } ;
struct ks8995_switch {int lock; int spi; } ;
typedef int cmd ;
typedef int __be16 ;


 int VAR_0 ;
 int FUNC_0 (struct ks8995_switch*,int ,unsigned int) ;
 int FUNC_1 (struct spi_transfer**,int ,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct spi_transfer*,struct spi_message*) ;
 int FUNC_5 (struct spi_message*) ;
 int FUNC_6 (int ,struct spi_message*) ;

__attribute__((used)) static int FUNC_7(struct ks8995_switch *VAR_1, char *VAR_2,
   unsigned VAR_3, size_t VAR_4)
{
 __be16 VAR_5;
 struct spi_transfer VAR_6[2];
 struct spi_message VAR_7;
 int VAR_8;

 VAR_5 = FUNC_0(VAR_1, VAR_0, VAR_3);
 FUNC_5(&VAR_7);

 FUNC_1(&VAR_6, 0, sizeof(VAR_6));

 VAR_6[0].tx_buf = &VAR_5;
 VAR_6[0].len = sizeof(VAR_5);
 FUNC_4(&VAR_6[0], &VAR_7);

 VAR_6[1].rx_buf = VAR_2;
 VAR_6[1].len = VAR_4;
 FUNC_4(&VAR_6[1], &VAR_7);

 FUNC_2(&VAR_1->lock);
 VAR_8 = FUNC_6(VAR_1->spi, &VAR_7);
 FUNC_3(&VAR_1->lock);

 return VAR_8 ? VAR_8 : VAR_4;
}
