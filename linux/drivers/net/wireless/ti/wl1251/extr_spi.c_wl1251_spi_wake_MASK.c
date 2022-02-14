
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef int t ;
struct wl1251 {int dummy; } ;
struct spi_transfer {int* tx_buf; int len; } ;
struct spi_message {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,int*,int ) ;
 int FUNC_2 (int*) ;
 int* FUNC_3 (int ,int ) ;
 int FUNC_4 (struct spi_transfer*,int ,int) ;
 int FUNC_5 (struct spi_transfer*,struct spi_message*) ;
 int FUNC_6 (struct spi_message*) ;
 int FUNC_7 (int ,struct spi_message*) ;
 int FUNC_8 (int ,char*,int*,int ) ;
 int FUNC_9 (char*) ;
 int FUNC_10 (struct wl1251*) ;

__attribute__((used)) static void FUNC_11(struct wl1251 *VAR_17)
{
 struct spi_transfer VAR_18;
 struct spi_message VAR_19;
 u8 *VAR_20 = FUNC_3(VAR_12, VAR_1);

 if (!VAR_20) {
  FUNC_9("could not allocate cmd for spi init");
  return;
 }

 FUNC_4(&VAR_18, 0, sizeof(VAR_18));
 FUNC_6(&VAR_19);




 VAR_20[0] = 0xff;
 VAR_20[1] = 0xff;
 VAR_20[2] = VAR_13 | VAR_14;
 VAR_20[3] = 0;
 VAR_20[4] = 0;
 VAR_20[5] = VAR_3 << 3;
 VAR_20[5] |= VAR_2 & VAR_9;

 VAR_20[6] = VAR_10 | VAR_11 | VAR_5
  | VAR_16 | VAR_15;

 if (VAR_2 == 0)
  VAR_20[6] |= VAR_6;
 else
  VAR_20[6] |= VAR_8;

 VAR_20[7] = FUNC_1(0, VAR_20+2, VAR_4) | VAR_7;




 FUNC_0((u32 *)VAR_20);
 FUNC_0((u32 *)VAR_20+1);

 VAR_18.tx_buf = VAR_20;
 VAR_18.len = VAR_12;
 FUNC_5(&VAR_18, &VAR_19);

 FUNC_7(FUNC_10(VAR_17), &VAR_19);

 FUNC_8(VAR_0, "spi init -> ", VAR_20, VAR_12);

 FUNC_2(VAR_20);
}
