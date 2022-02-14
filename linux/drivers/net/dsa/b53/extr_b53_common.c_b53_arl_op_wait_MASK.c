
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct b53_device {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct b53_device*,int ,int ,int*) ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (int,int) ;

__attribute__((used)) static int FUNC_3(struct b53_device *VAR_4)
{
 unsigned int VAR_5 = 10;
 u8 VAR_6;

 do {
  FUNC_0(VAR_4, VAR_1, VAR_2, &VAR_6);
  if (!(VAR_6 & VAR_0))
   return 0;

  FUNC_2(1000, 2000);
 } while (VAR_5--);

 FUNC_1(VAR_4->dev, "timeout waiting for ARL to finish: 0x%02x\n", VAR_6);

 return -VAR_3;
}
