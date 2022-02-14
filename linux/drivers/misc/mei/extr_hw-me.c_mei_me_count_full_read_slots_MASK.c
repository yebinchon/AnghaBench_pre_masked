
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mei_device {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,char*,unsigned char) ;
 int FUNC_1 (struct mei_device*) ;

__attribute__((used)) static int FUNC_2(struct mei_device *VAR_4)
{
 u32 VAR_5;
 char VAR_6, VAR_7;
 unsigned char VAR_8, VAR_9;

 VAR_5 = FUNC_1(VAR_4);
 VAR_8 = (unsigned char)((VAR_5 & VAR_1) >> 24);
 VAR_6 = (char) ((VAR_5 & VAR_2) >> 8);
 VAR_7 = (char) ((VAR_5 & VAR_3) >> 16);
 VAR_9 = (unsigned char) (VAR_7 - VAR_6);


 if (VAR_9 > VAR_8)
  return -VAR_0;

 FUNC_0(VAR_4->dev, "filled_slots =%08x\n", VAR_9);
 return (int)VAR_9;
}
