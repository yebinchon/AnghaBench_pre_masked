
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct meson_rtc {int dev; int reset; int peripheral; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int ,int ,int,int,int,int) ;
 int FUNC_3 (int ,int ,int,int ) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static int FUNC_5(struct meson_rtc *VAR_7)
{
 int VAR_8, VAR_9 = 3;
 u32 VAR_10;


 VAR_10 = VAR_3 | VAR_4 | VAR_2;
 FUNC_3(VAR_7->peripheral, VAR_1, VAR_10, 0);

 for (VAR_9 = 0; VAR_9 < 3; VAR_9++) {

  if (!FUNC_2(VAR_7->peripheral, VAR_5, VAR_10,
           VAR_10 & VAR_6, 10,
           10000))
   return 0;

  FUNC_1(VAR_7->dev, "failed to get bus, resetting RTC\n");

  VAR_8 = FUNC_4(VAR_7->reset);
  if (VAR_8)
   return VAR_8;
 }

 FUNC_0(VAR_7->dev, "bus is not ready\n");
 return -VAR_0;
}
