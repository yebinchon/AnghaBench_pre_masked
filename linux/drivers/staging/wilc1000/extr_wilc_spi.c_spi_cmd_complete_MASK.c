
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct wilc_spi {int crc_off; } ;
struct wilc {struct wilc_spi* bus_data; int dev; } ;
struct spi_device {int dev; } ;


 int FUNC_0 (int*) ;
 int FUNC_1 (int) ;
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
 int FUNC_2 (int,int const*,int) ;
 int FUNC_3 (int *,char*,...) ;
 struct spi_device* FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (struct wilc*,int*,int) ;
 scalar_t__ FUNC_6 (struct wilc*,int*,int*,int) ;

__attribute__((used)) static int FUNC_7(struct wilc *VAR_10, u8 VAR_11, u32 VAR_12, u8 *VAR_13, u32 VAR_14,
       u8 VAR_15)
{
 struct spi_device *VAR_16 = FUNC_4(VAR_10->dev);
 struct wilc_spi *VAR_17 = VAR_10->bus_data;
 u8 VAR_18[32], VAR_19[32];
 u8 VAR_20, VAR_21;
 u32 VAR_22;
 u8 VAR_23;
 int VAR_24 = 0;
 int VAR_25 = VAR_8;
 int VAR_26;
 u8 VAR_27[2];

 VAR_18[0] = VAR_11;
 switch (VAR_11) {
 case 130:
  VAR_18[1] = (u8)(VAR_12 >> 16);
  VAR_18[2] = (u8)(VAR_12 >> 8);
  VAR_18[3] = (u8)VAR_12;
  VAR_24 = 5;
  break;

 case 134:
  VAR_18[1] = (u8)(VAR_12 >> 8);
  if (VAR_15 == 1)
   VAR_18[1] |= FUNC_1(7);
  VAR_18[2] = (u8)VAR_12;
  VAR_18[3] = 0x00;
  VAR_24 = 5;
  break;

 case 128:
  VAR_18[1] = 0x00;
  VAR_18[2] = 0x00;
  VAR_18[3] = 0x00;
  VAR_24 = 5;
  break;

 case 132:
  VAR_18[1] = 0x00;
  VAR_18[2] = 0x00;
  VAR_18[3] = 0x00;
  VAR_24 = 5;
  break;

 case 131:
  VAR_18[1] = 0xff;
  VAR_18[2] = 0xff;
  VAR_18[3] = 0xff;
  VAR_24 = 5;
  break;

 case 135:
 case 136:
  VAR_18[1] = (u8)(VAR_12 >> 16);
  VAR_18[2] = (u8)(VAR_12 >> 8);
  VAR_18[3] = (u8)VAR_12;
  VAR_18[4] = (u8)(VAR_14 >> 8);
  VAR_18[5] = (u8)(VAR_14);
  VAR_24 = 7;
  break;

 case 137:
 case 138:
  VAR_18[1] = (u8)(VAR_12 >> 16);
  VAR_18[2] = (u8)(VAR_12 >> 8);
  VAR_18[3] = (u8)VAR_12;
  VAR_18[4] = (u8)(VAR_14 >> 16);
  VAR_18[5] = (u8)(VAR_14 >> 8);
  VAR_18[6] = (u8)(VAR_14);
  VAR_24 = 8;
  break;

 case 133:
  VAR_18[1] = (u8)(VAR_12 >> 8);
  if (VAR_15 == 1)
   VAR_18[1] |= FUNC_1(7);
  VAR_18[2] = (u8)(VAR_12);
  VAR_18[3] = VAR_13[3];
  VAR_18[4] = VAR_13[2];
  VAR_18[5] = VAR_13[1];
  VAR_18[6] = VAR_13[0];
  VAR_24 = 8;
  break;

 case 129:
  VAR_18[1] = (u8)(VAR_12 >> 16);
  VAR_18[2] = (u8)(VAR_12 >> 8);
  VAR_18[3] = (u8)(VAR_12);
  VAR_18[4] = VAR_13[3];
  VAR_18[5] = VAR_13[2];
  VAR_18[6] = VAR_13[1];
  VAR_18[7] = VAR_13[0];
  VAR_24 = 9;
  break;

 default:
  VAR_25 = VAR_7;
  break;
 }

 if (VAR_25 != VAR_8)
  return VAR_25;

 if (!VAR_17->crc_off)
  VAR_18[VAR_24 - 1] = (FUNC_2(0x7f, (const u8 *)&VAR_18[0], VAR_24 - 1)) << 1;
 else
  VAR_24 -= 1;







 if (VAR_11 == 131 ||
     VAR_11 == 128 ||
     VAR_11 == 132) {
  VAR_22 = VAR_24 + ((1) + (2) + (3));
 } else if (VAR_11 == 134 || VAR_11 == 130) {
  int VAR_28 = (2) + (1) + (4)
   + (3);
  if (!VAR_17->crc_off)
   VAR_22 = VAR_24 + VAR_28 + (2);
  else
   VAR_22 = VAR_24 + VAR_28;
 } else {
  VAR_22 = VAR_24 + ((2) + (3));
 }


 if (VAR_22 > FUNC_0(VAR_18)) {
  FUNC_3(&VAR_16->dev, "spi buffer size too small (%d) (%zu)\n",
   VAR_22, FUNC_0(VAR_18));
  return VAR_7;
 }

 for (VAR_20 = VAR_24; VAR_20 < VAR_22; VAR_20++)
  VAR_18[VAR_20] = 0;
 VAR_21 = VAR_24;

 if (FUNC_6(VAR_10, VAR_18, VAR_19, VAR_22)) {
  FUNC_3(&VAR_16->dev, "Failed cmd write, bus error...\n");
  return VAR_7;
 }




 if (VAR_11 == 131 || VAR_11 == 128 || VAR_11 == 132)
  VAR_21++;

 VAR_23 = VAR_19[VAR_21++];

 if (VAR_23 != VAR_11) {
  FUNC_3(&VAR_16->dev,
   "Failed cmd response, cmd (%02x), resp (%02x)\n",
   VAR_11, VAR_23);
  return VAR_7;
 }




 VAR_23 = VAR_19[VAR_21++];
 if (VAR_23 != 0x00) {
  FUNC_3(&VAR_16->dev, "Failed cmd state response state (%02x)\n",
   VAR_23);
  return VAR_7;
 }

 if (VAR_11 == 134 || VAR_11 == 130 ||
     VAR_11 == 136 || VAR_11 == 138) {



  VAR_26 = 100;
  do {




   if (VAR_21 < VAR_22) {
    VAR_23 = VAR_19[VAR_21++];
   } else {
    VAR_26 = 0;
    break;
   }
   if (((VAR_23 >> 4) & 0xf) == 0xf)
    break;
  } while (VAR_26--);

  if (VAR_26 <= 0) {
   FUNC_3(&VAR_16->dev,
    "Error, data read response (%02x)\n", VAR_23);
   return VAR_9;
  }
 }

 if (VAR_11 == 134 || VAR_11 == 130) {



  if ((VAR_21 + 3) < VAR_22) {
   VAR_13[0] = VAR_19[VAR_21++];
   VAR_13[1] = VAR_19[VAR_21++];
   VAR_13[2] = VAR_19[VAR_21++];
   VAR_13[3] = VAR_19[VAR_21++];
  } else {
   FUNC_3(&VAR_16->dev,
    "buffer overrun when reading data.\n");
   return VAR_7;
  }

  if (!VAR_17->crc_off) {



   if ((VAR_21 + 1) < VAR_22) {
    VAR_27[0] = VAR_19[VAR_21++];
    VAR_27[1] = VAR_19[VAR_21++];
   } else {
    FUNC_3(&VAR_16->dev,
     "buffer overrun when reading crc.\n");
    return VAR_7;
   }
  }
 } else if ((VAR_11 == 136) || (VAR_11 == 138)) {
  int VAR_29;


  for (VAR_29 = 0; (VAR_21 < VAR_22) && (VAR_29 < VAR_14); )
   VAR_13[VAR_29++] = VAR_19[VAR_21++];

  VAR_14 -= VAR_29;

  if (VAR_14 > 0) {
   int VAR_30;

   if (VAR_14 <= (VAR_0 - VAR_29))
    VAR_30 = VAR_14;
   else
    VAR_30 = VAR_0 - VAR_29;




   if (FUNC_5(VAR_10, &VAR_13[VAR_29], VAR_30)) {
    FUNC_3(&VAR_16->dev,
     "Failed block read, bus err\n");
    return VAR_7;
   }




   if (!VAR_17->crc_off && FUNC_5(VAR_10, VAR_27, 2)) {
    FUNC_3(&VAR_16->dev,
     "Failed block crc read, bus err\n");
    return VAR_7;
   }

   VAR_29 += VAR_30;
   VAR_14 -= VAR_30;
  }





  while (VAR_14 > 0) {
   int VAR_31;

   if (VAR_14 <= VAR_0)
    VAR_31 = VAR_14;
   else
    VAR_31 = VAR_0;
   VAR_26 = 10;
   do {
    if (FUNC_5(VAR_10, &VAR_23, 1)) {
     FUNC_3(&VAR_16->dev,
      "Failed resp read, bus err\n");
     VAR_25 = VAR_7;
     break;
    }
    if (((VAR_23 >> 4) & 0xf) == 0xf)
     break;
   } while (VAR_26--);

   if (VAR_25 == VAR_7)
    break;




   if (FUNC_5(VAR_10, &VAR_13[VAR_29], VAR_31)) {
    FUNC_3(&VAR_16->dev,
     "Failed block read, bus err\n");
    VAR_25 = VAR_7;
    break;
   }




   if (!VAR_17->crc_off && FUNC_5(VAR_10, VAR_27, 2)) {
    FUNC_3(&VAR_16->dev,
     "Failed block crc read, bus err\n");
    VAR_25 = VAR_7;
    break;
   }

   VAR_29 += VAR_31;
   VAR_14 -= VAR_31;
  }
 }
 return VAR_25;
}
