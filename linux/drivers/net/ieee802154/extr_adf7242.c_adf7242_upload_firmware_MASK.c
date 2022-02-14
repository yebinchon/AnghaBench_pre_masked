
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef int u16 ;
struct spi_transfer {int len; scalar_t__* tx_buf; } ;
struct spi_message {int dummy; } ;
struct adf7242_local {int bmux; int spi; scalar_t__* buf; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct adf7242_local*,int ,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct spi_transfer*,struct spi_message*) ;
 int FUNC_4 (struct spi_message*) ;
 int FUNC_5 (int ,struct spi_message*) ;

__attribute__((used)) static int FUNC_6(struct adf7242_local *VAR_3, u8 *VAR_4, u16 VAR_5)
{
 struct spi_message VAR_6;
 struct spi_transfer VAR_7 = { };
 int VAR_8, VAR_9, VAR_10 = 0;
 u8 *VAR_11 = VAR_3->buf;

 struct spi_transfer VAR_12 = {
  .len = 2,
  .tx_buf = VAR_11,
 };

 VAR_11[0] = VAR_0;
 VAR_11[1] = 0;

 FUNC_4(&VAR_6);
 FUNC_3(&VAR_12, &VAR_6);
 FUNC_3(&VAR_7, &VAR_6);

 for (VAR_9 = VAR_5; VAR_9 >= 0; VAR_9 -= VAR_1) {
  FUNC_0(VAR_3, VAR_2, VAR_10);

  VAR_7.len = (VAR_9 >= VAR_1) ? VAR_1 : VAR_9;
  VAR_7.tx_buf = &VAR_4[VAR_10 * VAR_1];

  FUNC_1(&VAR_3->bmux);
  VAR_8 = FUNC_5(VAR_3->spi, &VAR_6);
  FUNC_2(&VAR_3->bmux);
  VAR_10++;
 }

 return VAR_8;
}
