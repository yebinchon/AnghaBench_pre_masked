
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int t ;
struct spi_transfer {int len; int * tx_buf; } ;
struct spi_message {int dummy; } ;
struct p54s_priv {int spi; } ;
typedef int last_word ;
typedef int addr ;
typedef int __le16 ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct spi_transfer*,int ,int) ;
 int FUNC_2 (struct spi_transfer*,struct spi_message*) ;
 int FUNC_3 (struct spi_message*) ;
 int FUNC_4 (int ,struct spi_message*) ;

__attribute__((used)) static void FUNC_5(struct p54s_priv *VAR_0, u8 VAR_1,
        const void *VAR_2, size_t VAR_3)
{
 struct spi_transfer VAR_4[3];
 struct spi_message VAR_5;
 __le16 VAR_6;


 VAR_6 = FUNC_0(VAR_1 << 8);

 FUNC_3(&VAR_5);
 FUNC_1(VAR_4, 0, sizeof(VAR_4));

 VAR_4[0].tx_buf = &VAR_6;
 VAR_4[0].len = sizeof(VAR_6);
 FUNC_2(&VAR_4[0], &VAR_5);

 VAR_4[1].tx_buf = VAR_2;
 VAR_4[1].len = VAR_3 & ~1;
 FUNC_2(&VAR_4[1], &VAR_5);

 if (VAR_3 % 2) {
  __le16 VAR_7;
  VAR_7 = FUNC_0(((u8 *)VAR_2)[VAR_3 - 1]);

  VAR_4[2].tx_buf = &VAR_7;
  VAR_4[2].len = sizeof(VAR_7);
  FUNC_2(&VAR_4[2], &VAR_5);
 }

 FUNC_4(VAR_0->spi, &VAR_5);
}
