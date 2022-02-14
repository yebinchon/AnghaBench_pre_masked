
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct hl_device {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (struct hl_device*,int,int,int,int,int ) ;

__attribute__((used)) static int FUNC_4(struct hl_device *VAR_6, u32 VAR_7,
    u32 VAR_8, u32 VAR_9)
{
 int VAR_10;
 u32 VAR_11;



 FUNC_1(VAR_7, 1 << VAR_4);

 VAR_11 = FUNC_0(VAR_8);
 if (VAR_11 & VAR_3) {
  VAR_10 = FUNC_3(
   VAR_6,
   VAR_8,
   VAR_11,
   !(VAR_11 & VAR_3),
   1000,
   VAR_1);


  if (VAR_10)
   return 0;
 }

 VAR_10 = FUNC_3(
  VAR_6,
  VAR_9,
  VAR_11,
  (VAR_11 & VAR_5),
  1000,
  VAR_2);

 if (VAR_10) {
  FUNC_2(VAR_6->dev,
   "Timeout while waiting for QMAN to stop\n");
  return -VAR_0;
 }

 return 0;
}
