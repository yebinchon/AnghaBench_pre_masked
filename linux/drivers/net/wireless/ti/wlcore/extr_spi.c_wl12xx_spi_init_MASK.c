
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef int t ;
struct wl12xx_spi_glue {int dev; } ;
struct spi_transfer {int* tx_buf; int len; } ;
struct spi_message {int* tx_buf; int len; } ;
struct spi_device {int mode; } ;
struct device {int parent; } ;
typedef int m ;


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
 int FUNC_2 (int ,char*) ;
 struct wl12xx_spi_glue* FUNC_3 (int ) ;
 int FUNC_4 (int*) ;
 int* FUNC_5 (int,int ) ;
 int FUNC_6 (struct spi_transfer*,int ,int) ;
 int FUNC_7 (struct spi_transfer*,struct spi_transfer*) ;
 int FUNC_8 (struct spi_transfer*) ;
 int FUNC_9 (struct spi_device*,struct spi_transfer*) ;
 struct spi_device* FUNC_10 (int ) ;

__attribute__((used)) static void FUNC_11(struct device *VAR_17)
{
 struct wl12xx_spi_glue *VAR_18 = FUNC_3(VAR_17->parent);
 struct spi_transfer VAR_19;
 struct spi_message VAR_20;
 struct spi_device *VAR_21 = FUNC_10(VAR_18->dev);
 u8 *VAR_22 = FUNC_5(VAR_12, VAR_0);

 if (!VAR_22) {
  FUNC_2(VAR_17->parent,
   "could not allocate cmd for spi init\n");
  return;
 }

 FUNC_6(&VAR_19, 0, sizeof(VAR_19));
 FUNC_8(&VAR_20);





 VAR_22[0] = 0xff;
 VAR_22[1] = 0xff;
 VAR_22[2] = VAR_13 | VAR_14;
 VAR_22[3] = 0;
 VAR_22[4] = 0;
 VAR_22[5] = VAR_2 << 3;
 VAR_22[5] |= VAR_1 & VAR_9;

 VAR_22[6] = VAR_10 | VAR_11 | VAR_5
  | VAR_16 | VAR_15;

 if (VAR_1 == 0)
  VAR_22[6] |= VAR_6;
 else
  VAR_22[6] |= VAR_8;

 VAR_22[7] = FUNC_1(0, VAR_22+2, VAR_4) | VAR_7;





 FUNC_0((u32 *)VAR_22);
 FUNC_0((u32 *)VAR_22+1);

 VAR_19.tx_buf = VAR_22;
 VAR_19.len = VAR_12;
 FUNC_7(&VAR_19, &VAR_20);

 FUNC_9(FUNC_10(VAR_18->dev), &VAR_20);




 VAR_21->mode ^= VAR_3;
 FUNC_6(&VAR_20, 0, sizeof(VAR_20));
 FUNC_8(&VAR_20);

 VAR_22[0] = 0xff;
 VAR_22[1] = 0xff;
 VAR_22[2] = 0xff;
 VAR_22[3] = 0xff;
 FUNC_0((u32 *)VAR_22);

 VAR_19.tx_buf = VAR_22;
 VAR_19.len = 4;
 FUNC_7(&VAR_19, &VAR_20);

 FUNC_9(FUNC_10(VAR_18->dev), &VAR_20);


 VAR_21->mode ^= VAR_3;
 FUNC_4(VAR_22);
}
