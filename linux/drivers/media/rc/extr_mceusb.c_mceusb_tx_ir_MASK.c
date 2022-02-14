
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct rc_dev {struct mceusb_dev* priv; } ;
struct mceusb_dev {int tx_mask; } ;
typedef int cmdbuf ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 unsigned int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 unsigned int VAR_8 ;
 int FUNC_0 (struct mceusb_dev*,int*,int) ;
 int FUNC_1 (struct mceusb_dev*,int*,int) ;

__attribute__((used)) static int FUNC_2(struct rc_dev *VAR_9, unsigned *VAR_10, unsigned VAR_11)
{
 struct mceusb_dev *VAR_12 = VAR_9->priv;
 u8 VAR_13[3] = { VAR_0, VAR_1, 0x00 };
 u8 VAR_14[VAR_2];
 int VAR_15 = 0;
 unsigned int VAR_16;
 int VAR_17, VAR_18, VAR_19;


 VAR_13[2] = VAR_12->tx_mask;
 FUNC_0(VAR_12, VAR_13, sizeof(VAR_13));


 for (VAR_17 = 0; VAR_17 < VAR_11; VAR_17++) {
  VAR_16 = VAR_10[VAR_17] / VAR_8;


  while (VAR_16 > 0) {

   if (VAR_15 % VAR_6 == 0) {

    if (VAR_15 >= VAR_2 - 1) {

     VAR_19 = FUNC_1(VAR_12, VAR_14, VAR_15);
     if (VAR_19 < 0)
      return VAR_19;
     VAR_15 = 0;
    }
    VAR_14[VAR_15++] = VAR_3;
   }


   if (VAR_16 <= VAR_5) {
    VAR_14[VAR_15] = VAR_16;
    VAR_16 = 0;
   } else {
    VAR_14[VAR_15] = VAR_5;
    VAR_16 -= VAR_5;
   }




   VAR_14[VAR_15] |= (VAR_17 & 1 ? 0 : VAR_7);
   VAR_15++;


   if (VAR_15 >= VAR_2) {

    VAR_18 = VAR_15 % VAR_6;
    if (VAR_18 > 0)
     VAR_14[VAR_15 - VAR_18] -=
      VAR_6 - VAR_18;

    VAR_19 = FUNC_1(VAR_12, VAR_14, VAR_15);
    if (VAR_19 < 0)
     return VAR_19;
    VAR_15 = 0;
   }
  }
 }


 VAR_18 = VAR_15 % VAR_6;
 if (VAR_18 > 0)
  VAR_14[VAR_15 - VAR_18] -= VAR_6 - VAR_18;


 VAR_14[VAR_15++] = VAR_4;


 VAR_19 = FUNC_1(VAR_12, VAR_14, VAR_15);
 if (VAR_19 < 0)
  return VAR_19;

 return VAR_11;
}
