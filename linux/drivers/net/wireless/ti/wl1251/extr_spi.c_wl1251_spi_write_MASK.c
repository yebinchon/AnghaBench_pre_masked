
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u32 ;
typedef int t ;
struct wl1251 {size_t buffer_cmd; } ;
struct spi_transfer {size_t* tx_buf; int len; } ;
struct spi_message {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 int FUNC_0 (struct spi_transfer*,int ,int) ;
 int FUNC_1 (struct spi_transfer*,struct spi_message*) ;
 int FUNC_2 (struct spi_message*) ;
 int FUNC_3 (int ,struct spi_message*) ;
 int FUNC_4 (int ,char*,void*,size_t) ;
 int FUNC_5 (struct wl1251*) ;

__attribute__((used)) static void FUNC_6(struct wl1251 *VAR_5, int VAR_6, void *VAR_7,
        size_t VAR_8)
{
 struct spi_transfer VAR_9[2];
 struct spi_message VAR_10;
 u32 *VAR_11;

 VAR_11 = &VAR_5->buffer_cmd;

 *VAR_11 = 0;
 *VAR_11 |= VAR_4;
 *VAR_11 |= (VAR_8 << VAR_3) & VAR_2;
 *VAR_11 |= VAR_6 & VAR_1;

 FUNC_2(&VAR_10);
 FUNC_0(VAR_9, 0, sizeof(VAR_9));

 VAR_9[0].tx_buf = VAR_11;
 VAR_9[0].len = sizeof(*VAR_11);
 FUNC_1(&VAR_9[0], &VAR_10);

 VAR_9[1].tx_buf = VAR_7;
 VAR_9[1].len = VAR_8;
 FUNC_1(&VAR_9[1], &VAR_10);

 FUNC_3(FUNC_5(VAR_5), &VAR_10);

 FUNC_4(VAR_0, "spi_write cmd -> ", VAR_11, sizeof(*VAR_11));
 FUNC_4(VAR_0, "spi_write buf -> ", VAR_7, VAR_8);
}
