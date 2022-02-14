
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct usbnet {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct usbnet*,int ,int ,int,int,int*,int ) ;
 int FUNC_1 (struct usbnet*,int ,int ,int,int,int*) ;
 scalar_t__ FUNC_2 (struct usbnet*,int ,int ,int,int,int*) ;
 int VAR_8 ;
 scalar_t__ FUNC_3 (int,unsigned long) ;

__attribute__((used)) static int FUNC_4(struct usbnet *VAR_9)
{
 u8 VAR_10, VAR_11, VAR_12[20];
 u16 VAR_13, VAR_14 = VAR_7 / 10;
 unsigned long VAR_15;


 for (VAR_10 = 0; VAR_10 < 6; VAR_10++) {
  VAR_11 = VAR_10;
  if (FUNC_2(VAR_9, VAR_0, VAR_1,
          1, 1, &VAR_11) < 0)
   return -VAR_6;

  VAR_11 = VAR_5;
  if (FUNC_2(VAR_9, VAR_0, VAR_2,
          1, 1, &VAR_11) < 0)
   return -VAR_6;

  VAR_15 = VAR_8 + VAR_14;
  do {
   FUNC_1(VAR_9, VAR_0, VAR_2,
      1, 1, &VAR_11);

   if (FUNC_3(VAR_8, VAR_15))
    return -VAR_6;

  } while (VAR_11 & VAR_4);

  FUNC_0(VAR_9, VAR_0, VAR_3,
       2, 2, &VAR_12[VAR_10 * 2], 0);

  if ((VAR_10 == 0) && (VAR_12[0] == 0xFF))
   return -VAR_6;
 }

 VAR_13 = VAR_12[6] + VAR_12[7] + VAR_12[8] + VAR_12[9];
 VAR_13 = (VAR_13 >> 8) + (VAR_13 & 0xff);
 if ((VAR_13 + VAR_12[10]) != 0xff)
  return -VAR_6;

 return 0;
}
