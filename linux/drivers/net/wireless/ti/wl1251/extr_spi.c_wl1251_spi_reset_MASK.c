
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spi_transfer {int len; struct spi_transfer* tx_buf; } ;
typedef struct spi_transfer u8 ;
typedef int t ;
struct wl1251 {int dummy; } ;
struct spi_message {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct spi_transfer*) ;
 struct spi_transfer* FUNC_1 (int,int ) ;
 int FUNC_2 (struct spi_transfer*,int,int) ;
 int FUNC_3 (struct spi_transfer*,struct spi_message*) ;
 int FUNC_4 (struct spi_message*) ;
 int FUNC_5 (int ,struct spi_message*) ;
 int FUNC_6 (int ,char*,struct spi_transfer*,int) ;
 int FUNC_7 (char*) ;
 int FUNC_8 (struct wl1251*) ;

__attribute__((used)) static void FUNC_9(struct wl1251 *VAR_3)
{
 u8 *VAR_4;
 struct spi_transfer VAR_5;
 struct spi_message VAR_6;

 VAR_4 = FUNC_1(VAR_2, VAR_1);
 if (!VAR_4) {
  FUNC_7("could not allocate cmd for spi reset");
  return;
 }

 FUNC_2(&VAR_5, 0, sizeof(VAR_5));
 FUNC_4(&VAR_6);

 FUNC_2(VAR_4, 0xff, VAR_2);

 VAR_5.tx_buf = VAR_4;
 VAR_5.len = VAR_2;
 FUNC_3(&VAR_5, &VAR_6);

 FUNC_5(FUNC_8(VAR_3), &VAR_6);

 FUNC_6(VAR_0, "spi reset -> ", VAR_4, VAR_2);

 FUNC_0(VAR_4);
}
