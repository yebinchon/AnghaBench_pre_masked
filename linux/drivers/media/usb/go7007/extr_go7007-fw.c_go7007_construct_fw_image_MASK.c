
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct go7007 {int format; int dev; } ;
struct firmware {int size; scalar_t__ data; } ;
typedef int __le16 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;




 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char*,...) ;
 int FUNC_2 (struct go7007*,int,int *,int,int*) ;
 int * FUNC_3 (int,int,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int *,int) ;
 int FUNC_6 (struct firmware const*) ;
 scalar_t__ FUNC_7 (struct firmware const**,int ,int ) ;

int FUNC_8(struct go7007 *VAR_7, u8 **VAR_8, int *VAR_9)
{
 const struct firmware *VAR_10;
 __le16 *VAR_11, *VAR_12;
 int VAR_13[8] = { };
 int VAR_14 = 64 * 1024, VAR_15 = 0, VAR_16, VAR_17, VAR_18;
 int VAR_19;
 int VAR_20;

 switch (VAR_7->format) {
 case 131:
  VAR_19 = VAR_0;
  break;
 case 130:
  VAR_19 = VAR_1;
  break;
 case 129:
  VAR_19 = VAR_2;
  break;
 case 128:
  VAR_19 = VAR_3;
  break;
 default:
  return -1;
 }
 if (FUNC_7(&VAR_10, VAR_6, VAR_7->dev)) {
  FUNC_1(VAR_7->dev,
   "unable to load firmware from file \"%s\"\n",
   VAR_6);
  return -1;
 }
 VAR_11 = FUNC_3(VAR_14, 2, VAR_5);
 if (VAR_11 == ((void*)0))
  goto fw_failed;

 VAR_12 = (__le16 *)VAR_10->data;
 VAR_16 = VAR_10->size / 2;
 while (VAR_16 >= 2) {
  VAR_18 = FUNC_0(VAR_12[0]);
  VAR_17 = FUNC_0(VAR_12[1]);
  if (VAR_17 + 2 > VAR_16) {
   FUNC_1(VAR_7->dev,
    "firmware file \"%s\" appears to be corrupted\n",
    VAR_6);
   goto fw_failed;
  }
  if (VAR_18 & VAR_19) {
   if (VAR_18 & VAR_4) {
    VAR_20 = FUNC_2(VAR_7, FUNC_0(VAR_12[2]),
     &VAR_11[VAR_15], VAR_14 - VAR_15, VAR_13);
    if (VAR_20 < 0) {
     FUNC_1(VAR_7->dev,
      "insufficient memory for firmware construction\n");
     goto fw_failed;
    }
    VAR_15 += VAR_20;
   } else {
    if (VAR_14 - VAR_15 < VAR_17) {
     FUNC_1(VAR_7->dev,
      "insufficient memory for firmware construction\n");
     goto fw_failed;
    }
    FUNC_5(&VAR_11[VAR_15], &VAR_12[2], VAR_17 * 2);
    VAR_15 += VAR_17;
   }
  }
  VAR_16 -= VAR_17 + 2;
  VAR_12 += VAR_17 + 2;
 }
 FUNC_6(VAR_10);
 *VAR_8 = (u8 *)VAR_11;
 *VAR_9 = VAR_15 * 2;
 return 0;

fw_failed:
 FUNC_4(VAR_11);
 FUNC_6(VAR_10);
 return -1;
}
