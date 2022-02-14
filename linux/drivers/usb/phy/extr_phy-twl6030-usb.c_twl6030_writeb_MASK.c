
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct twl6030_usb {int dev; } ;


 int FUNC_0 (int ,char*,int ,int) ;
 int FUNC_1 (int ,int ,int ) ;

__attribute__((used)) static inline int FUNC_2(struct twl6030_usb *VAR_0, u8 VAR_1,
      u8 VAR_2, u8 VAR_3)
{
 int VAR_4 = 0;

 VAR_4 = FUNC_1(VAR_1, VAR_2, VAR_3);
 if (VAR_4 < 0)
  FUNC_0(VAR_0->dev,
   "Write[0x%x] Error %d\n", VAR_3, VAR_4);
 return VAR_4;
}
