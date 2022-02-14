
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct usb_serial {int dev; } ;
typedef int __u16 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int*) ;
 int* FUNC_1 (int,int ) ;
 int FUNC_2 (int ,int ,int ,int ,int,int ,int*,int,int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,int ) ;

__attribute__((used)) static int FUNC_5(struct usb_serial *VAR_9)
{
 int VAR_10, VAR_11 = 0;
 u8 *VAR_12;
 __u16 VAR_13 = 0, VAR_14 = 0;
 __u16 VAR_15 = 0x55AA;
 int VAR_16;

 VAR_12 = FUNC_1(VAR_8, VAR_0);
 if (!VAR_12)
  return 0;


 VAR_16 = FUNC_2(VAR_9->dev, FUNC_3(VAR_9->dev, 0),
  VAR_2, VAR_3, 0x0300, VAR_6,
  VAR_12, VAR_8, VAR_7);
 if (VAR_16 == VAR_8)
  VAR_14 = *VAR_12;

 for (VAR_10 = 0; VAR_10 < 16; VAR_10++) {

  FUNC_2(VAR_9->dev, FUNC_4(VAR_9->dev, 0),
   VAR_4, VAR_5,
   (0x0300 | (((VAR_15 >> VAR_10) & 0x0001) << 1)),
   VAR_6, ((void*)0), 0, VAR_7);


  VAR_16 = FUNC_2(VAR_9->dev,
    FUNC_3(VAR_9->dev, 0), VAR_2,
    VAR_3, 0, VAR_1, VAR_12,
    VAR_8, VAR_7);
  if (VAR_16 == VAR_8)
   VAR_13 = *VAR_12;


  if (((VAR_15 >> VAR_10) ^ (~VAR_13 >> 1)) & 0x0001)
   break;

  VAR_11++;
 }


 FUNC_2(VAR_9->dev, FUNC_4(VAR_9->dev, 0), VAR_4,
  VAR_5, 0x0300 | VAR_14, VAR_6, ((void*)0),
  0, VAR_7);

 FUNC_0(VAR_12);

 if (VAR_11 == 16)
  return 1;

 return 0;
}
