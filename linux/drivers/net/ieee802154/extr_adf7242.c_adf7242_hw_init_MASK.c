
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct firmware {int size; scalar_t__ data; } ;
struct adf7242_local {TYPE_1__* spi; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
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
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int FUNC_1 (struct adf7242_local*) ;
 int FUNC_2 (struct adf7242_local*,int ) ;
 int FUNC_3 (struct adf7242_local*,int *,int ) ;
 int FUNC_4 (struct adf7242_local*,int *,int ) ;
 int FUNC_5 (struct adf7242_local*,int ,int) ;
 int FUNC_6 (int *,char*,int) ;
 int FUNC_7 (struct firmware const*) ;
 int FUNC_8 (struct firmware const**,int ,int *) ;

__attribute__((used)) static int FUNC_9(struct adf7242_local *VAR_20)
{
 int VAR_21;
 const struct firmware *VAR_22;

 FUNC_2(VAR_20, VAR_7);
 FUNC_2(VAR_20, VAR_5);






 VAR_21 = FUNC_8(&VAR_22, VAR_8, &VAR_20->spi->dev);
 if (VAR_21) {
  FUNC_6(&VAR_20->spi->dev,
   "request_firmware() failed with %d\n", VAR_21);
  return VAR_21;
 }

 VAR_21 = FUNC_3(VAR_20, (u8 *)VAR_22->data, VAR_22->size);
 if (VAR_21) {
  FUNC_6(&VAR_20->spi->dev,
   "upload firmware failed with %d\n", VAR_21);
  FUNC_7(VAR_22);
  return VAR_21;
 }

 VAR_21 = FUNC_4(VAR_20, (u8 *)VAR_22->data, VAR_22->size);
 if (VAR_21) {
  FUNC_6(&VAR_20->spi->dev,
   "verify firmware failed with %d\n", VAR_21);
  FUNC_7(VAR_22);
  return VAR_21;
 }

 FUNC_2(VAR_20, VAR_6);

 FUNC_7(VAR_22);

 FUNC_5(VAR_20, VAR_13,
     VAR_0 |
     VAR_1 |
     VAR_2 |
     VAR_3);

 FUNC_5(VAR_20, VAR_11, VAR_19);

 FUNC_5(VAR_20, VAR_17, VAR_4 | FUNC_0(2));

 FUNC_5(VAR_20, VAR_12, 0xF1);
 FUNC_5(VAR_20, VAR_18, 0x1D);

 FUNC_5(VAR_20, VAR_14, 0);
 FUNC_5(VAR_20, VAR_15, VAR_10 | VAR_9);

 FUNC_1(VAR_20);
 FUNC_5(VAR_20, VAR_16, 0xFF);

 FUNC_2(VAR_20, VAR_5);

 return 0;
}
